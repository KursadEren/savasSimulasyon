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

int main() {
      srand(time(NULL));
    Oyun * oyunubaslat = NewOyun();
    oyunubaslat->OyunBaslat();
    return 0;
}
