#ifndef ATAKTIK_H
#define ATAKTIK_H


#include "Taktik.h"

typedef struct Ataktik {
    int SaldiriGucu;
    int SavunmaGucu;
    int taktikguc;
    struct Taktik* taktik;
    int (*AtaktikGucGetir)(struct Ataktik*taktik);
    int (*Ataktik)(void);
}Ataktik;

Ataktik* newAtaktik();
int Ataktikguc();
int AtaktikGucGetir(Ataktik*taktik);

#endif
