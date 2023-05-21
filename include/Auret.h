#ifndef AURET_H
#define AURET_H

#include "uret.h"

typedef struct Auret {
    int uretim;
    struct Uret* uret;
    int (*AtipiUretimGetir)(struct Auret* AGetir);
    int (*AtipiUretim)();
} Auret;

Auret* AyeniUretim();
int AtipiUretim();
int AtipiUretimGetir(struct Auret* AGetir);

#endif
