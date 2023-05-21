#ifndef KOLONI_H
#define KOLONI_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "Taktik.h"

// Koloni yapısı
typedef struct Koloni {
    int populasyon;
    int yemekStogu;
    char sembol;
    int guc;
    struct Taktik* taktik;
    struct Uret* uret;

    int (*koloniCountGetir)(char*p);
    void (*destroyColony)(struct Koloni* koloni);
   
    
    
} Koloni;


Koloni* newKoloniler(char* str , int *koloniCount); 
int koloniCountGetir(char*p);
void destroyColony(Koloni* koloni);


#endif
