#ifndef URET_H
#define URET_H
#include "Koloni.h"
 typedef struct Uret{

    int uretim;
    int (*duzUretim)();
  } Uret ;

Uret* newUret();
int duzUretim();
#endif