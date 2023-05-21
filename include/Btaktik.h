#ifndef BTAKTIK_H
#define BTAKTIK_H

#include "Taktik.h"

typedef struct Btaktik {
    int BtaktikGuc;
     struct Taktik* taktik;
     int (*BTaktik) (void); 
     int (*BtaktikGucGetir)(struct Btaktik*taktik);
}Btaktik;

Btaktik* newBtaktik();

int BtaktikGucGetir(Btaktik*taktik);
int BTaktik ();

#endif