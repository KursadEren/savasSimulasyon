#include "uret.h"

Uret* newUret(){
    Uret* this = (Uret*)malloc(sizeof(struct Uret));
    int uretim = duzUretim();
    this->uretim = uretim;
    this->duzUretim = &duzUretim;
    this->EkleUret = &EkleUret;
    return this;
}

int duzUretim()
{
    int sayi = rand() % 10 + 1;
    return sayi;
}

void EkleUret(Koloni*UretKoloni1){
    UretKoloni1->yemekStogu += UretKoloni1->UretilmeOran;
}