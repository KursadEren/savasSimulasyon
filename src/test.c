#include "Koloni.h"
#include <stdio.h>

int main() {
    char input[100];
    printf("Boşluklu verileri girin: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // Satır sonu karakterini kaldır

    Koloni* koloniler = newKoloniler(input, &koloniCount);

    printf("Koloniler:\n");
    for (int i = 0; i < koloniCount; i++) {
        printf("Koloni %c - Populasyon: %d, Yemek Stoğu: %d\n", koloniler[i].sembol, koloniler[i].populasyon, koloniler[i].yemekStogu);
    }

    free(koloniler);

    return 0;
}