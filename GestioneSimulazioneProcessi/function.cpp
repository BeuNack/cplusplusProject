#include <iostream>
#include "prototipi.hpp"

using namespace std;


Nodo *creaNodo(int valPid, float valCPU_time){

    Nodo * other;
    other = new Nodo;

    other->pid = valPid;

    other->CPU_time = valCPU_time;

    other->next = nullptr;

    return other;
}



Nodo *inserimentoOrdinato(Nodo* head,int valPid, float valCPU_time){

    Nodo *other = nullptr;
    other = creaNodo(valPid,valCPU_time);
    Nodo *temp;


    if(other==nullptr || head==nullptr){
        return other;
    }else{
        if(head->pid == other ->pid){
            return head;
        }
        if(head->CPU_time>other->CPU_time){
            other->next=head;
            return other;
        }else{
            temp=head;
            while(temp->next!=nullptr && other->CPU_time>(temp->next)->CPU_time){
                temp=temp->next;
            }
            other->next=temp->next;
            temp->next=other;
            return head;
        }
    }

    if(head->pid!=other->pid){
        return head;
    }


}


Nodo *rimuoviProcesso(Nodo * head){

    Nodo * temp = nullptr;

    temp = head;
    head = head->next;

    delete temp;
    decrementa(head);

    return head;


}


void visualizzaLista(Nodo * head){
    int contatore = 0;
    if(head == nullptr){
        cout << "Inserisci almeno un nodo" << endl;
    }else{
        while(head!=nullptr){
            cout << "Nodo numero: " << contatore << endl;
            cout << "PID: " << head->pid << endl;
            cout << "CPU_time: " << head->CPU_time << endl;
            head = head->next;
            contatore++;
        }
    }


}


void decrementa(Nodo * head){

    while(head!=nullptr){
        if(head->CPU_time!=1){
            head->CPU_time--;
        }
        head = head->next;

    }
}


bool visualizzaTempoMedioMassimo(Nodo * head, int &media, int &massimo){

    int somma;
    int contatore = 0;
    bool primavolta = true;
    int minimo;

    if(head==NULL){
        return false;
    }else{
        while(head!=nullptr){
            somma = head->CPU_time + somma;
            if(primavolta==true){
                minimo = head->CPU_time;
                massimo = head->CPU_time;
                primavolta = false;
            }

            if(massimo < head->CPU_time){
                massimo = head->CPU_time;
            }
            if(minimo > head->CPU_time){
                minimo = head->CPU_time;
            }
            head = head->next;
            contatore++;
        }

        media = somma/contatore;
        return true;
    }


}
