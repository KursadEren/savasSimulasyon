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


int main() {
    srand(time(NULL));
    char input[100];
    printf("Boşluklu verileri girin: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // Satır sonu karakterini kaldır
    
    int koloniCount = 0;
    Koloni* koloniler = newKoloniler(input, &koloniCount);
  
    int n = 1;
    char tire = '-';
    while (n >= 1) {
        printf("Tur Sayisi %d \n", n);
        printf("-------------------------------------------------\n");
        printf("Koloni  Populasyon   Yemek Stogu  kazanma   kaybetme\n\n");
        
        for (int i = 0; i < koloniCount; i++) {
            for (int j = i + 1; j < koloniCount; j++) {
                if (i != j) {
                    if (koloniler[i].populasyon > 0 && koloniler[i].yemekStogu > 0 && koloniler[j].populasyon > 0 && koloniler[j].yemekStogu > 0) {
                        Ataktik* yeniAtaktik = newAtaktik();
                        Btaktik* yeniBtaktik = newBtaktik();
                        Taktik* yeniTaktik = newTaktik();
                        
                        koloniler[i].guc = yeniAtaktik->AtaktikGucGetir(yeniAtaktik);
                        koloniler[j].guc = yeniBtaktik->BtaktikGucGetir(yeniBtaktik);
                        yeniTaktik->Savas(&koloniler[i], &koloniler[j]);
                        
                        free(yeniAtaktik);
                        free(yeniBtaktik);
                        free(yeniTaktik);
                    }
                }
            }
        }
    
        for (int i = 0; i < koloniCount; i++) {
           if(koloniler[i].populasyon > 0 && koloniler[i].yemekStogu > 0)
           {
             printf("%-8c  %-11d  %-11d  %-8d  %-8d\n\n",
                    koloniler[i].sembol, koloniler[i].populasyon, koloniler[i].yemekStogu,
                    koloniler[i].kazanma, koloniler[i].kaybetme);
           }else{
                     printf("%-8c   --          --         --          -- \n\n",
                    koloniler[i].sembol);
           }
        }
    
        n++;
    }
    
    free(koloniler);
    
    return 0;
}
