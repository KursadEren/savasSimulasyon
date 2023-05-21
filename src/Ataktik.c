#include "Ataktik.h"


Ataktik* newAtaktik(Taktik* taktik) {
    int yuzde = Ataktikguc();
    Ataktik* ataktik = malloc(sizeof(Ataktik));
    ataktik->taktik->value = ataktik->taktik->value + ((ataktik->taktik->value * yuzde) / 100);
    return ataktik;
}


int Ataktikguc() {
    int slsayi = rand() % 10 + 1;
    int svsayi = rand() % 5 + 1;
    int gonder = ((slsayi + svsayi) * 2);
    return gonder;
}
