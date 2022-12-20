#include <iostream>
#include "prototipi.hpp"

using namespace std;

int main(){

    Nodo * head = nullptr;
    char menu;
    int valPid;
    float valCPU_time;
    int media = 0;
    int massimo = 0;
    bool nodoInserito = false;

    do{
        system("CLS");
        cout << "--------------------MENU--------------------" << endl;
        cout << "Inserire 0 per uscire dal programma" << endl;
        cout << "Inserire 1 per inserire nella lista un nodo in modo ordinata" << endl;
        cout << "Inserire 2 per visualizzare la lista" << endl;
        cout << "Inserire 3 per rimuovere dalla lista il processo con priorita' maggiore" << endl;
        cout << "Inserire 4 per visualizzare il tempo massimo e la media dei processi" << endl;
        cout << "--------------------MENU--------------------" << endl;
        cin >> menu;
        switch(menu){
            case '0':
                break;
            case '1':
                cout << "Inserire il PID: ";
                cin >> valPid;
                cout << "" << endl;
                cout << "Inserire la CPU_time: ";
                cin >> valCPU_time;
                while(valCPU_time<=0){
                    cout << "Inserire un valore positivo: ";
                    cin >> valCPU_time;
                }
                cout << "" << endl;
                head = inserimentoOrdinato(head, valPid, valCPU_time);
                system("pause");
                break;
            case '2':
                visualizzaLista(head);
                system("pause");
                break;
            case '3':
                head = rimuoviProcesso(head);
                system("pause");
                break;
            case '4':
                nodoInserito = visualizzaTempoMedioMassimo(head, media, massimo);
                if(nodoInserito == false){
                    cout << "Inserisci almeno un nodo" << endl;
                }else{
                    cout << "Il tempo medio dei processi e' di: " << media << endl;
                    cout << "Il tempo del processo piu' alto e' di: " << massimo << endl;
                }
                system("pause");
                break;
        }
    }while(menu!='0');



}
