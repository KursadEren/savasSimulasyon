#include "Btaktik.h"

Btaktik* newBtaktik(){
    
    Taktik * tactic = newTaktik();
   Btaktik*  this  = (Btaktik*)malloc(sizeof(struct Btaktik));
   int yuzde = BTaktik();
   this->BTaktik=&BTaktik;
   this->BtaktikGuc =(tactic->value+(((tactic->value)*BTaktik())/100));
   this->BtaktikGucGetir = &BtaktikGucGetir;

   return this;

}

int BTaktik (){
    int slsayi = rand() % 15 + 1;
    int svsayi = rand() % 10 + 1;
   return ((slsayi+svsayi)+(slsayi-svsayi));
}
int BtaktikGucGetir(Btaktik*taktik){
    return taktik->BtaktikGuc;
}   

