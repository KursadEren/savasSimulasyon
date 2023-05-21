#ifndef TAKTIK_H
#define TAKTIK_H

#include "Koloni.h"

typedef struct Taktik {
    int value;
    struct Koloni* koloni;
    int (*TaktikGuc)();
    void (*Savas)(struct Koloni* koloni1, struct Koloni* koloni2);
    
} Taktik;

Taktik* newTaktik();
void Savas(struct Koloni* koloni1, struct Koloni* koloni2);

int TaktikGuc();

#endif
