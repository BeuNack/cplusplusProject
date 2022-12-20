
#include <iostream>
using namespace std;

int main()
{
    
    
    int den, den2;
    int num, num2;
    int esponente;
    char menu;
    
    do{
        cout << "--------------MENU--------------" << endl;
        cout << "Inserire 0 per uscire dal programma" << endl;
        cout << "Inserire 1 per sommare due frazioni" << endl;
        cout << "Inserire 2 per sottrarre due frazioni" << endl;
        cout << "Inserire 3 per moltiplicare due frazioni" << endl;
        cout << "Inserire 4 per dividere due frazioni" << endl;
        cout << "Inserire 5 per elevare una frazione" << endl;
        cout << "--------------MENU--------------" << endl;
        cin >> menu;
        
        switch(menu){
            
            case '0':
                break;
                
            case '1':
            
                //Richiesta numeratori
                cout << "Inserire il primo numeratore: ";
                cin >> num;
                cout << "" << endl;
                cout << "Inserire il secondo numeratore: ";
                cin >> num2;
                cout << "" << endl;
                
                //Richiesta denominatori
                cout << "Inserire il primo denominatore: ";
                cin >> den;
                cout << "" << endl;
                cout << "Inserire il secondo denominatore: ";
                cin >> den2;
                cout << "" << endl;
                
                somma(den,den2,num,num2);
                
                cout << num << endl;
                cout << "-" << endl;
                cout << den << endl;
                break;
                
            case '2':
                //Richiesta numeratori
                cout << "Inserire il primo numeratore: ";
                cin >> num;
                cout << "" << endl;
                cout << "Inserire il secondo numeratore: ";
                cin >> num2;
                cout << "" << endl;
                
                //Richiesta denominatori
                cout << "Inserire il primo denominatore: ";
                cin >> den;
                cout << "" << endl;
                cout << "Inserire il secondo denominatore: ";
                cin >> den2;
                cout << "" << endl;
                
                sottrazione(den,den2,num,num2);
                
                cout << num << endl;
                cout << "-" << endl;
                cout << den << endl;
                break;
                
            case '3':
                //Richiesta numeratori
                cout << "Inserire il primo numeratore: ";
                cin >> num;
                cout << "" << endl;
                cout << "Inserire il secondo numeratore: ";
                cin >> num2;
                cout << "" << endl;
                
                //Richiesta denominatori
                cout << "Inserire il primo denominatore: ";
                cin >> den;
                cout << "" << endl;
                cout << "Inserire il secondo denominatore: ";
                cin >> den2;
                cout << "" << endl;
                
                moltiplicazione(den,den2,num,num2);
                
                cout << num << endl;
                cout << "-" << endl;
                cout << den << endl;
                break;
                
            case '4':
                //Richiesta numeratori
                cout << "Inserire il primo numeratore: ";
                cin >> num;
                cout << "" << endl;
                cout << "Inserire il secondo numeratore: ";
                cin >> num2;
                cout << "" << endl;
                
                //Richiesta denominatori
                cout << "Inserire il primo denominatore: ";
                cin >> den;
                cout << "" << endl;
                cout << "Inserire il secondo denominatore: ";
                cin >> den2;
                cout << "" << endl;
                
                divisione(den,den2,num,num2);
                
                cout << num << endl;
                cout << "-" << endl;
                cout << den << endl;
                break;
                
            case '5':
                //Richiesta numeratori
                cout << "Inserire il primo numeratore: ";
                cin >> num;
                cout << "" << endl;
                
                //Richiesta denominatori
                cout << "Inserire il primo denominatore: ";
                cin >> den;
                cout << "" << endl;
                
                //Richiesta indice potenza
                cout << "Inserire l'esponente della frazione: ";
                cin >> esponente;
                cout << "" << endl;
                
                potenze(den,num,esponente);
                
                cout << num << endl;
                cout << "-" << endl;
                cout << den << endl;
                break;
        }
        
        
        
    }while(menu!='0');
    
    
}
