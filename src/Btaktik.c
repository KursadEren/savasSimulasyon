#include "Btaktik.h"

Btaktik* newBtaktik(Taktik* taktik){
    
    Btaktik* tactic = (Btaktik*)malloc(sizeof(Btaktik));
    
   int yuzde = BTaktik();
   tactic->BTaktik=&BTaktik;
   tactic->BtaktikGuc = taktik->value + ((taktik->value * yuzde)/100);
   return tactic;

}

int BTaktik (){
    int slsayi = rand() % 15 + 1;
    int svsayi = rand() % 10 + 1;
   return ((slsayi+svsayi)+(slsayi-svsayi));
}

