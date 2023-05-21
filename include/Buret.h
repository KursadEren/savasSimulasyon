#ifndef BURET_H
#define BURET_H
#include "uret.h"

typedef struct Buret{
   
   int uretim;
   struct Uret* uret ;
    int (*BtipiUretim)();

}Buret;
Buret* ByeniUretim();
int BtipiUretim();

#endif