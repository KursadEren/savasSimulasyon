#ifndef ATAKTIK_H
#define ATAKTIK_H

#include "Taktik.h"

typedef struct Btaktik {
    int BtaktikGuc;
    Taktik* taktik;
     int (*BTaktik) (); 
} Btaktik;

Btaktik* newBtaktik(Taktik* taktik);


int BTaktik ();

#endif