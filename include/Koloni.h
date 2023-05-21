#ifndef KOLONI_H
#define KOLONI_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


// Koloni yapısı
typedef struct Koloni {
    int populasyon;
    int yemekStogu;
    char sembol;
    int guc;
    int kazanma;
    int kaybetme;
    int UretilmeOran;
    
    int (*koloniCountGetir)(char*p);
    void (*destroyColony)(struct Koloni* koloni);
   
} Koloni;

Koloni* newKoloniler(char* str, int* KoloniCount); 
int koloniCountGetir(char* str);
void destroyColony(Koloni* koloni);

#endif
