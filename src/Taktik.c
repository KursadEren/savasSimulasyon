
#include "Taktik.h"


Taktik* newTaktik() {
    Taktik* this = (Taktik*)malloc(sizeof(Taktik));
    this->value = TaktikGuc();
    this->koloni = NULL;
    this->TaktikGuc = &TaktikGuc;
    this->Savas = &Savas;
    return this;
}

int TaktikGuc()
{
    int sayi = rand() % 1000 + 1;
    return sayi;
}

void Savas( struct Koloni* koloni1, struct Koloni* koloni2) {

     

    int fark = koloni1->guc - koloni2->guc;

    if (fark > 0) {
        // taktik kazanır
        koloni2->populasyon -= ((koloni2->populasyon*(1000/fark))/100);
        koloni1->yemekStogu += ((koloni2->yemekStogu*fark)/100);
        koloni1->kazanma += 1;
        koloni2->kaybetme += 1;
    } else if (fark < 0) {
        // koloni kazanır
        koloni1->populasyon -= ((koloni1->populasyon*(1000/fark))/100);
        koloni2->yemekStogu += ((koloni1->yemekStogu*fark)/100);
        koloni1->kaybetme += 1;
        koloni2->kazanma += 1;
    } else {
        // berabere durum
        if (koloni1->populasyon > koloni2->populasyon) {
             koloni2->populasyon -= ((koloni2->populasyon*(5))/100);
             koloni1->yemekStogu += ((koloni2->yemekStogu*fark)/100);
             koloni1->kazanma += 1;
             koloni2->kaybetme += 1;
           
        } else if (koloni1->populasyon < koloni2->populasyon) {
            koloni1->populasyon -= ((koloni1->populasyon*(5))/100);
             koloni2->yemekStogu += ((koloni1->yemekStogu*fark)/100);
             koloni1->kaybetme += 1;
             koloni2->kazanma += 1;
            
        } else {
            // Eşit popülasyon durumu
            int rastgele = rand() % 2; // 0 veya 1
            if (rastgele == 0) {
                koloni2->populasyon -= ((koloni2->populasyon*(5))/100);
             koloni1->yemekStogu += ((koloni2->yemekStogu*fark)/100);
                koloni1->kaybetme += 1;
                koloni2->kazanma += 1;
            } else {
                 koloni1->populasyon -= ((koloni1->populasyon*(5))/100);
                 koloni2->yemekStogu += ((koloni1->yemekStogu*fark)/100);
                koloni1->kaybetme += 1;
                koloni2->kazanma += 1;
            }
        }
    }
}
