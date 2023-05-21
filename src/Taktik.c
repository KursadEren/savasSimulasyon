#include "Taktik.h"


Taktik* newTaktik(Taktik* taktik){

    
    Taktik* tactic = (Taktik*)malloc(sizeof(Taktik));
    tactic->value=TaktikGuc();
    tactic->TaktikGuc=&TaktikGuc;
    tactic->Savas = &Savas;
   
    return taktik;
}

int TaktikGuc()
{
    int sayi = rand() % 1000 + 1;
    return sayi;
}

void Savas(struct Taktik* taktik, struct Koloni* koloni1, struct Koloni* koloni2) {

     

    int fark = koloni1->guc - koloni2->guc;

    if (fark > 0) {
        // taktik kazanır
        koloni2->populasyon -= ((koloni2->populasyon*(1000/fark))/100);
        koloni1->yemekStogu += ((koloni2->yemekStogu*fark)/100);

    } else if (fark < 0) {
        // koloni kazanır
        koloni1->populasyon -= ((koloni1->populasyon*(1000/fark))/100);
        koloni2->yemekStogu += ((koloni1->yemekStogu*fark)/100);
    } else {
        // berabere durum
        if (koloni1->populasyon > koloni2->populasyon) {
             koloni2->populasyon -= ((koloni2->populasyon*(5))/100);
             koloni1->yemekStogu += ((koloni2->yemekStogu*fark)/100)
           
        } else if (koloni1->populasyon < koloni2->populasyon) {
            koloni2->populasyon -= (int)(koloni2->populasyon * 0.1);
            koloni2->yemekStogu -= (int)(koloni2->yemekStogu * 0.1);
            taktik->value -= (int)(taktik->value * 0.1);
        } else {
            // Eşit popülasyon durumu
            int rastgele = rand() % 2; // 0 veya 1
            if (rastgele == 0) {
                koloni1->populasyon -= (int)(koloni1->populasyon * 0.1);
                koloni1->yemekStogu -= (int)(koloni1->yemekStogu * 0.1);
                taktik->value += (int)(taktik->value * 0.1);
            } else {
                koloni2->populasyon -= (int)(koloni2->populasyon * 0.1);
                koloni2->yemekStogu -= (int)(koloni2->yemekStogu * 0.1);
                taktik->value -= (int)(taktik->value * 0.1);
            }
        }
    }
}
