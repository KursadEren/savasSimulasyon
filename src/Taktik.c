#include "Taktik.h"


Taktik* newTaktik(Taktik* taktik){

    
    Taktik* tactic = (Taktik*)malloc(sizeof(Taktik));
    tactic->value=TaktikGuc();
    tactic->TaktikGuc=&TaktikGuc;
   
    return taktik;
}

int TaktikGuc()
{
    int sayi = rand() % 1000 + 1;
    return sayi;
}

