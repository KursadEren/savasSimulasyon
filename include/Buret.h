#ifndef BURET_H
#define BURET_H
#include "uret.h"

typedef struct Buret{
   
   int uretim;
   struct Uret* uret ;
    int (*BtipiUretim)();
    int (*BtipiUretimGetir)(struct Buret* BGetir );

}Buret;
Buret* ByeniUretim();
int BtipiUretim();
int BtipiUretimGetir(Buret* BGetir);
#endif