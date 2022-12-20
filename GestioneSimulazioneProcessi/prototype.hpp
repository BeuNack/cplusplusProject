#ifndef PROTOTIPI_HPP_INCLUDED
#define PROTOTIPI_HPP_INCLUDED

struct Nodo{

    int pid;
    float CPU_time;
    Nodo * next;

};

Nodo *creaNodo(int valPid, float valCPU_time);
Nodo *inserimentoOrdinato(Nodo * head, int valPid, float valCPU_time);
Nodo *rimuoviProcesso(Nodo * head);
Nodo *rimuoviProcesso(Nodo * head);
void visualizzaLista(Nodo * head);
void decrementa(Nodo * head);
bool visualizzaTempoMedioMassimo(Nodo * head, int &media, int &massimo);



#endif // PROTOTIPI_HPP_INCLUDED
