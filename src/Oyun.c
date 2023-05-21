#include "Oyun.h"

Oyun* NewOyun() {
    Oyun* this = (Oyun*)malloc(sizeof(Oyun));
    this->OyunBaslat = &OyunBaslat;
    this->koloni = NULL;
    this->YenidenUret = NULL;
    this->TurSonuDeger = &TurSonuDeger;
    return this;
}

void OyunBaslat() {
    char input[100];
    printf("Boşluklu verileri girin: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // Satır sonu karakterini kaldır
    
    int koloniCount = 0;
    Koloni* koloniler = newKoloniler(input, &koloniCount);
  
    int n = 1;
   
    while (1) {
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
        
        int activeColonies = 0;  // Aktif koloni sayısını takip etmek için değişken tanımlandı
        for (int i = 0; i < koloniCount; i++) {
            if (koloniler[i].populasyon > 0 && koloniler[i].yemekStogu > 0) {
                activeColonies++;  // Aktif kolonileri say
            }
        }

        if (activeColonies <= 1) {
            break;  // Eğer sadece 1 veya daha az aktif koloni kaldıysa döngüyü sonlandır
        }
        
        for (int i = 0; i < koloniCount; i++) {
            if (koloniler[i].populasyon > 0 && koloniler[i].yemekStogu > 0) {
                Auret* yeniAUret = AyeniUretim();
                Buret* yeniBuret = ByeniUretim();
                Uret* YenidenUret = newUret();
                YenidenUret->EkleUret(&koloniler[i]);
                TurSonuDeger(&koloniler[i]);
                free(yeniAUret);
                free(yeniBuret);
                free(YenidenUret);
            }
        }
        
        for (int i = 0; i < koloniCount; i++) {
            if (koloniler[i].populasyon > 0 && koloniler[i].yemekStogu > 0) {
                printf("%-8c  %-11d  %-11d  %-8d  %-8d\n\n",
                       koloniler[i].sembol, koloniler[i].populasyon, koloniler[i].yemekStogu,
                       koloniler[i].kazanma, koloniler[i].kaybetme);
            } else {
                printf("%-8c   --          --         --          -- \n\n",
                       koloniler[i].sembol);
            }
        }
        
        n++;
    }
    
    free(koloniler);
}

void TurSonuDeger(struct Koloni* koloni1) {
    koloni1->populasyon = koloni1->populasyon + (koloni1->populasyon * 20 / 100);
    koloni1->yemekStogu -= koloni1->populasyon * 2;
}
