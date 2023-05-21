#ifndef TAKTIK_H
#define TAKTIK_H
#include <stdlib.h>


   typedef struct Taktik {
     int value;
     int (*TaktikGuc)();
     
    } Taktik;

Taktik* newTaktik(Taktik* taktik);

int TaktikGuc();
#endif