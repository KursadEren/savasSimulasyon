#include "Koloni.h"
#include <stdio.h>

int main() {
    char input[100];
    printf("Boşluklu verileri girin: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // Satır sonu karakterini kaldır

    int KoloniCount=0;
    Koloni* koloniler = newKoloniler(input,&KoloniCount);
    
    
    printf("Koloniler:\n");
    for (int i = 0; i < KoloniCount ; i++) {
        printf("Koloni %c - Populasyon: %d, Yemek Stoğu: %d\n", koloniler[i].sembol, koloniler[i].populasyon, koloniler[i].yemekStogu);
    }
    

    free(koloniler);

    return 0;
}