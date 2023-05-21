#include "Auret.h"


Auret* AyeniUretim(){
    Auret* this = (Auret*)malloc(sizeof(struct Auret));
    Uret * yeniUret = newUret();
    int sayi2 = AtipiUretim();
    this->uretim = yeniUret->uretim*sayi2;
    this->uret = NULL;
    this->AtipiUretim = &AtipiUretim;

}


int AtipiUretim(){
    int sayi = rand() % 2 + 1;
    return sayi;
}