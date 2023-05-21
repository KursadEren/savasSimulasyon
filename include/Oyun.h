#ifndef OYUN_H
#define OYUN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Koloni.h"
#include "Btaktik.h"
#include "Ataktik.h"
#include "Taktik.h"
#include "uret.h"
#include "Buret.h"
#include "Auret.h"
#include "Oyun.h"
typedef struct Oyun{
    struct Koloni* koloni;
    struct Uret * YenidenUret;
    void (*OyunBaslat)();
    void (*TurSonuDeger)(struct Koloni* koloni1);
}Oyun;
Oyun* NewOyun();
void OyunBaslat();
void TurSonuDeger(struct Koloni* koloni1);
#endif