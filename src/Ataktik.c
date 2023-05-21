#include "Ataktik.h"



Ataktik* newAtaktik() {
    int guckatsayi = Ataktikguc();
    Ataktik* this = (Ataktik*)malloc(sizeof(Ataktik));
     Taktik * tactic = newTaktik();
    this->taktikguc = (tactic->value+(((tactic->value)*guckatsayi)/100));;
    this->AtaktikGucGetir = &AtaktikGucGetir;
    return this;
}


int AtaktikGucGetir(Ataktik*taktik){
    return taktik->taktikguc;
}   

int Ataktikguc() {
    int slsayi = rand() % 10 + 1;
    int svsayi = rand() % 5 + 1;
    int gonder = ((slsayi + svsayi) * 2);
    return gonder;
}
