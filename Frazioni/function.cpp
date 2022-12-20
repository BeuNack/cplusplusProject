#include <iostream>

using namespace std;


void somma(int &den, int &den2, int &num, int &num2){
    
    int mcm = den;
    int mcm2 = den2;
    int mcm2pre = 0;
    
    int i = 1;
    
    //Controllo se i due denominatori sono uguali
    if(den == den2){
        num = num+num2;
    }else{
        //Ciclo finchè non trovo il minimo comune multiplo
        while(mcm!=mcm2pre){
            mcm = den*i;
            mcm2pre = mcm2;
            mcm2 = den2*i;
            i++;
        }
        //Faccio tutte le operazioni fra frazioni
        num = (mcm/den)*num;
        num2 = (mcm/den2)*num2;
        num = num+num2;
        den = mcm;
        
        i = 1;
    }
    
    riduciFrazione(num, den);
    
}


void sottrazione(int &den, int &den2, int &num, int &num2){
    
    int mcm = den;
    int mcm2 = den2;
    int mcm2pre = 0;
    
    int i = 1;
    
    //Controllo se i due denominatori sono uguali
    if(den == den2){
        num = num-num2;
    }else{
        //Ciclo finchè non trovo il minimo comune multiplo
        while(mcm!=mcm2pre){
            mcm = den*i;
            mcm2pre = mcm2;
            mcm2 = den2*i;
            i++;
        }
        //Faccio tutte le operazioni fra frazioni
        num = (mcm/den)*num;
        num2 = (mcm/den2)*num2;
        num = num-num2;
        den = mcm;
        
    }
    
    riduciFrazione(num, den);

}


void moltiplicazione(int &den, int &den2, int &num, int &num2){
    
    bool avvenuto = false;
    int divisore_comune;
    
    int i = 1;
    
    
    //Moltiplico la frazione
    num = num * num2;  // moltiplichiamo i numeratori tra loro
    den = den * den2;  // moltiplichiamo i denominatori tra loro
    
    
    riduciFrazione(num, den);
    
}


void divisione(int &den, int &den2, int &num, int &num2){

    int variabileDiSupporto = 0;
    
    variabileDiSupporto = num2;
    
    int i = 1;
    
    //Moltiplico la frazione
    num = num * den2;  // moltiplichiamo il primo numeratore per il secondo denominatore
    den = den * num2;  // moltiplichiamo il primo denominatore per il secondo numeratore
    
    
    riduciFrazione(num, den);
    
}


void potenze(int &den, int &num, int esponente){
    
    int i = 1;
    
    
    if(esponente==0){
        //Se l'esponente e' 0 allora la frazione e' uguale a 1
        den = 1;
        num = 1;
    }
    else if(esponente==1){
        //Se l'esponente e' 1 allora la frazione rimane invariata
    }else{
        int risden = den;
        int risnum = num;
        for(i = 1; i < esponente; i++){
            risden *= den;
            risnum *= num;
        }
        den = risden;
        num = risnum; 
    }
    
    riduciFrazione(num, den);
    
}


void riduciFrazione(int &num, int &den){
    
    bool avvenuto = false;
    int divisore_comune;

    //Controllo se è ridotta ai minimi termini
    int min_num = (num < den) ? num : den;

    // ciclo che itera da 1 fino al minimo dei due numeri
    for (int i = 1; i <= min_num; i++) {
        // se entrambi i numeri sono divisibili per il numero corrente, salviamo il numero corrente come divisore comune
        if (num % i == 0 && den % i == 0) {
        divisore_comune = i;
        avvenuto = true;
        }
    }
    
    if(avvenuto == true){
        num = num/divisore_comune;
        den = den/divisore_comune;
    }

}
