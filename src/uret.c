#include "uret.h"

Uret* newUret(){
    Uret* this = (Uret*)malloc(sizeof(struct Uret));
    int uretim = duzUretim();
    this->uretim = uretim;
    this->duzUretim = &duzUretim;
}

int duzUretim()
{
    int sayi = rand() % 10 + 1;
    return sayi;
}