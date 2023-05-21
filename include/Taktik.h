#ifndef TAKTIK_H
#define TAKTIK_H
#include <stdlib.h>


   typedef struct Taktik {
     int value;
     int (*TaktikGuc)();
     
void (*Savas)(struct Taktik* taktik, struct Koloni* koloni1, struct Koloni* koloni2)
    } Taktik;

Taktik* newTaktik(Taktik* taktik);

void Savas(struct Taktik* taktik, struct Koloni* koloni1, struct Koloni* koloni2);
int TaktikGuc();
#endif