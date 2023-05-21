#ifndef URET_H
#define URET_H
#include "Koloni.h"
 typedef struct Uret{
    struct Koloni*UretKoloni;
    int uretim;
    int (*duzUretim)();
    void (*EkleUret)(struct Koloni*UretKoloni1);
  } Uret ;

Uret* newUret();
int duzUretim();
void EkleUret(Koloni*UretKoloni1);
#endif