#include "Buret.h"

Buret* ByeniUretim(){

     Buret* this = (Buret*)malloc(sizeof(struct Buret));
     Uret * yeniUret = newUret();
    int sayi2 = BtipiUretim();
    this->uretim = yeniUret->uretim*sayi2;
    this->uret = NULL;
    this->BtipiUretim = &BtipiUretim;

}

int BtipiUretim(){
    int sayi = rand() % 10 + 5;
    return sayi;
}