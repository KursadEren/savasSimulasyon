#ifndef ATAKTIK_H
#define ATAKTIK_H

#include "Taktik.h"

typedef struct Ataktik {
    int SaldiriGucu;
    int SavunmaGucu;
    struct Taktik* taktik;
    int (*Ataktik)();
} Ataktik;

Ataktik* newAtaktik(Taktik* taktik);
int Ataktikguc();

#endif
