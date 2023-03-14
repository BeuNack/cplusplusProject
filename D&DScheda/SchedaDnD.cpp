#include <iostream>

using namespace std;

/*
ELENCO NOMI STRUTTURE:
PRIMA SCHEDA

infoSchedaPersonaggio -> iSP
puntiCaratteristica -> pC
tiriSalvezza -> tS
caratteristicheAbilita -> cA
caratteristicheFombat -> cF
caratteristicheVarie -> cV
attacchiIncantesimi -> aI
vasoDiPandora -> vDP

SECONDA SCHEDA

caratteristicheCorpo -> cC
caratteristicheUltra -> cU

TERZA SCHEDA

caratteristicheIncantatore -> cE
incantesimi -> inc

*/

//Variabili globali:
int value;



//PRIMA SCHEDA

//Inizio scheda, partiamo con le informazioni del personaggio
struct infoSchedaPersonaggio{

    string nomePersonaggio;
    string classe;
    string background;
    string nomeGiocatore;
    string razza;
    string allineamento;

    int exp;
    int livello;

};
infoSchedaPersonaggio  iSP;

//Punti delle caratteristiche 
struct puntiCaratteristica{

    int forza;
    int modForza;

    int destrezza;
    int modDestrezza;

    int costituzione;
    int modCostituzione;

    int intelligenza;
    int modIntelligenza;

    int saggezza;
    int modSaggezza;

    int carisma;
    int modCarisma;

};
puntiCaratteristica pC;

//Tiri salvezza
struct tiriSalvezza{

    int forzaSalv;
    int destrezzaSalv;
    int costituzioneSalv;
    int intelligenzaSalv;
    int saggezzaSalv;
    int carismaSalv;

};
tiriSalvezza tS;

//Caratteristiche Abilità DA INSERIRE
struct caratteristicheAbilita{

    //Acrobazia
    //Altre Shit
    //Storia

};
caratteristicheAbilita cA;

//Caratteristiche da combattimento
struct caratteristicheFight{
    
    //Prime tre
    int costituzione;
    int iniziativa;
    float velocita;

    //pf
    int maxPF;
    int pfAtt;
    int pfTemp;

    //dadi
    string dadiVita;
    
    //ts contro morte
    int successi = 0;
    int fallimenti = 0;

};
caratteristicheFight cF;

//Caratteristiche varie presenti nella scheda senza locazione
struct caratteristicheVarie{
    
    bool ispirazione;
    int bonusCompetenza; //Va settato in base al livello del pg
    int percezionePassiva;

};
caratteristicheVarie cV;

//Attacchi e incantesimi
struct attacchiIncantesimi{
    
    string nome;
    string danniTipo;
    int bonusAtt;

};
attacchiIncantesimi aI;

//Illustrazione del personaggio
struct vasoDiPandora{

    //Box in alto a destra
    string trattiCaratteriali; //Cosa lo identifica
    string ideali;  //Per cosa combatte
    string legami;  //Legami con esterni
    string difetti; //Difetti del personaggio

    //Box in basso a destra
    string privilegiTratti;

    //Equipaggiamento (box in mezzo in fondo)
    string equipaggiamento;
    
    //Monete (Insieme all'equipaggiamento)
    float moneteRame;
    float moneteArgento;
    float moeneteOro;
    float monetePlatini;

    //Competenze e linguaggio (box in basso a sinistra)
    string competenzeLinguaggi;

};
vasoDiPandora vDP;

//SECONDA SCHEDA

//Caratteristiche corporee
struct caratteristicheCorpo{

    //In teoria ci starebbe anche il nome del personaggio
    //Ma l'ho già definito nella prima structure "infoScheda"

    string occhi;
    string carnagione;
    string capelli;

    int eta;

    float altezza;
    float peso;

};
caratteristicheCorpo cC;

//Box del resto della seconda scheda
struct caratteristicheUltra{
    
    string alleatiOrganizzazioni;
    string storia;
    string tesoro;

};
caratteristicheUltra cU;

//TERZA SCHEDA

//Prima box
struct caratteristicheIncantatore{

    string classeIncantatore;
    string carIncantatore;

    int cdTiroSalv;
    int bonusAttaccoIncantesimi;

};
caratteristicheIncantatore cE;

//LISTA INCANTESIMI 

//Incantesimi livello 1
struct incantesimi{

    string trucchetto[8];
    string incUno[8];
    string incDue[8];
    string incTre[8];
    string incQuattro[8];
    string incCinque[8];
    string incSei[8];
    string incSette[8];
    string incOtto[8];
    string incNove[8];

};
incantesimi inc;

int main(){

    int forza = 10;
    int modforza = 0;
    

}

/*

Elenco funzioni principali:
    -Funzione per infoSchedaPersonaggio
    -Funzione per puntiCaratteristica
    -Funzione per i tiri salvezza
*/

//Funzione per inserire nella struttura "infoSchedaPersonaggio" le variabili
void inserimentoInfoSchedaPersonaggio(infoSchedaPersonaggio& iSP,
    string nomePersonaggioValue, string classeValue, string backgroundValue,
    string nomeGiocatoreValue, string razzaValue,
    string allineamentoValue, int expValue, int livelloValue
    )
{
    iSP.nomeGiocatore = nomeGiocatoreValue;
    iSP.classe = classeValue;
    iSP.background = backgroundValue;
    iSP.nomePersonaggio = nomePersonaggioValue;
    iSP.razza = razzaValue;
    iSP.allineamento = allineamentoValue;
    iSP.exp = expValue;
    iSP.livello = livelloValue;

} 

//Funzione per inserire nella struttura "puntiCaratteristica" le variabili
/*
Si ricorda che il calcolo per il modificatore è: (Caratteristica-10)/2 e che
esso può venire con la virgola.
*/
void inserimentoPuntiCaratteristica(puntiCaratteristica& pC,
    int forzaValue, int destrezzaValue, int costituzioneValue, int intelligenzaValue, 
    int saggezzaValue, int carismaValue
    )
{
    pC.forza = forzaValue;
    pC.modForza = (int)(forzaValue-10)/2;
    pC.destrezza = destrezzaValue;
    pC.modDestrezza = (int)(destrezzaValue-10)/2;
    pC.costituzione = costituzioneValue;
    pC.modCostituzione = (int)(costituzioneValue-10)/2;
    pC.intelligenza = intelligenzaValue;
    pC.modIntelligenza = (int)(intelligenzaValue-10)/2;
    pC.saggezza = saggezzaValue;
    pC.modSaggezza = (int)(saggezzaValue-10)/2;
    pC.carisma = carismaValue;
    pC.modCarisma = (int)(carismaValue-10)/2;

}

//Funzione per inserire nella struttura "tiriSalvezza" le variabili
/*
Ricordiamo che il tiro salvezza è il mod + eventualmente b.competenza
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
N.B.: RICORDIAMO CHE I TIRI SALVEZZA POSSONO ESSERE SOMMATI AL BONUS COMPETENZA DIPENDENTEMENTE DALLA CLASSE
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/
void inserimentoTiriSalvezza(tiriSalvezza& tS,
    puntiCaratteristica pC, infoSchedaPersonaggio iSP,
    caratteristicheVarie cV
    )
{
    //Se il personaggio è barbaro 
    if(iSP.classe == "Barbaro"){
        //Sommo il modificatore + il bonus competenza
        tS.forzaSalv = pC.modForza + cV.bonusCompetenza;
        tS.costituzioneSalv = pC.modCostituzione + cV.bonusCompetenza;
        //Metto solo il modificatore ai restanti parametri
        tS.destrezzaSalv = pC.modDestrezza;
        tS.intelligenzaSalv = pC.modIntelligenza;
        tS.saggezzaSalv = pC.modSaggezza;
        tS.carismaSalv = pC.modCarisma;
    }

    //Se il personaggio è un bardo 
    if(iSP.classe == "Bardo"){
        //Sommo il modificatore + il bonus competenza
        tS.destrezzaSalv = pC.modDestrezza + cV.bonusCompetenza;
        tS.carismaSalv = pC.modCarisma + cV.bonusCompetenza;
        //Metto solo il modificatore ai restanti parametri
        tS.forzaSalv = pC.modForza;
        tS.costituzioneSalv = pC.modCostituzione;
        tS.intelligenzaSalv = pC.modIntelligenza;
        tS.saggezzaSalv = pC.modSaggezza;
    }

    //Se il personaggio è un chierico
    if(iSP.classe == "Chierico"){
        //Sommo il modificatore + il bonus competenza
        tS.saggezzaSalv = pC.modSaggezza + cV.bonusCompetenza;
        tS.carismaSalv = pC.modCarisma + cV.bonusCompetenza;
        //Metto solo il modificatore ai restanti parametri
        tS.forzaSalv = pC.modForza;
        tS.destrezzaSalv = pC.modDestrezza;
        tS.costituzioneSalv = pC.modCostituzione;
        tS.intelligenzaSalv = pC.modIntelligenza;
    }

    //Se il personaggio è un druido
    if(iSP.classe == "Druido"){
        //Sommo il modificatore + il bonus competenza
        tS.intelligenzaSalv = pC.modIntelligenza + cV.bonusCompetenza;
        tS.saggezzaSalv = pC.modSaggezza + cV.bonusCompetenza;
        //Metto solo il modificatore ai restanti parametri
        tS.forzaSalv = pC.modForza;
        tS.destrezzaSalv = pC.modDestrezza;
        tS.costituzioneSalv = pC.modCostituzione;
        tS.carismaSalv = pC.modCarisma;
    }

    //Se il personaggio è un guerriero
    if(iSP.classe == "Guerriero"){
        //Sommo il modificatore + il bonus competenza
        tS.forzaSalv = pC.modForza + cV.bonusCompetenza;
        tS.costituzioneSalv = pC.modCostituzione + cV.bonusCompetenza;
        //Metto solo il modificatore ai restanti parametri
        tS.destrezzaSalv = pC.modDestrezza;
        tS.intelligenzaSalv = pC.modIntelligenza;
        tS.saggezzaSalv = pC.modSaggezza;
        tS.carismaSalv = pC.modCarisma;
    }

    //Se il personaggio è un ladro
    if(iSP.classe == "Ladro"){
        tS.destrezzaSalv = pC.modDestrezza + cV.bonusCompetenza;
        tS.intelligenzaSalv = pC.modIntelligenza + cV.bonusCompetenza;
    }

    //Se il personaggio è un mago
    if(iSP.classe == "Mago"){
        tS.intelligenzaSalv = pC.modIntelligenza + cV.bonusCompetenza;
        tS.saggezzaSalv = pC.modSaggezza + cV.bonusCompetenza;
    }

    //Se il personaggio è un monaco
    if(iSP.classe == "Monaco"){
        tS.forzaSalv = pC.modForza + cV.bonusCompetenza;
        tS.destrezzaSalv = pC.modDestrezza + cV.bonusCompetenza;
    }

    //Se il personaggio è un paladino
    if(iSP.classe == "Paladino"){
        tS.saggezzaSalv = pC.modSaggezza + cV.bonusCompetenza;
        tS.carismaSalv = pC.modCarisma + cV.bonusCompetenza;
    }

    //Se il personaggio è un ranger
    if(iSP.classe == "Ranger"){
        tS.forzaSalv = pC.modForza + cV.bonusCompetenza;
        tS.destrezzaSalv = pC.modDestrezza + cV.bonusCompetenza;
    }

    //Se il personaggio è uno stregone
    if(iSP.classe == "Stregone"){
        tS.costituzioneSalv = pC.modCostituzione + cV.bonusCompetenza;
        tS.carismaSalv = pC.modCarisma + cV.bonusCompetenza;
    }

    //Se il personaggio è un warlock
    if(iSP.classe == "Warlock"){
        tS.saggezzaSalv = pC.modSaggezza + cV.bonusCompetenza;
        tS.carismaSalv = pC.modCarisma + cV.bonusCompetenza;
    }

}
