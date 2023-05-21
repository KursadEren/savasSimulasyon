#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Koloni.h"
#include "Btaktik.h"
#include "Ataktik.h"
#include "Taktik.h"

#include "Koloni.c"
#include "Btaktik.c"
#include "Ataktik.c"
#include "Taktik.h"

int main() {
    char input[100];
    printf("Boşluklu verileri girin: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // Satır sonu karakterini kaldır

    int koloniCount = 0;
    Koloni* koloniler = newKoloniler(input, &koloniCount);

    for (int i = 0; i < koloniCount; i++) {
        for (int j = i + 1; j < koloniCount; j++) {
            Ataktik* yeniAtaktik = newAtaktik();
            Btaktik* yeniBtaktik = newBtaktik();
            Taktik* yeniTaktik = newTaktik();

            koloniler[i].guc = yeniAtaktik->AtaktikGucGetir();
            koloniler[j].guc = yeniBtaktik->BtaktikGucGetir();

            yeniTaktik->Savas(&koloniler[i], &koloniler[j]);
        }
    }

    printf("Koloniler:\n");
    for (int i = 0; i < koloniCount; i++) {
        printf("Koloni %c - Populasyon: %d, Yemek Stoğu: %d\n", koloniler[i].sembol, koloniler[i].populasyon, koloniler[i].yemekStogu);
    }

    free(koloniler);

    return 0;
}
