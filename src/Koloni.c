#include <stdio.h>
#include <stdlib.h>

#include "Koloni.h"

Koloni* newKoloniler(char* str , int *koloniCount) {
    int count = koloniCount(str);
    Koloni* koloniler = (Koloni*)malloc(count * sizeof(Koloni));
    char sembol = 'A';

    char* token = strtok(str, " ");
    for (int i = 0; i < count; i++) {
        koloniler[i].populasyon = atoi(token);
        koloniler[i].yemekStogu = koloniler[i].populasyon * koloniler[i].populasyon;
        koloniler[i].sembol = sembol++;
        koloniler[i].guc = 0;
        koloniler[i].koloniCount = &koloniCount;
        koloniler[i].destroyColony = &destroyColony;
        token = strtok(NULL, " ");
    }
    *koloniCount = count;
    return koloniler;
}
int koloniCount(char* str) {
    int count = 0;
    int isDigit = 0;
    char* p = str;

    while (*p != '\0') {
        if (*p >= '0' && *p <= '9' && !isDigit) {
            count++;
            isDigit = 1;
        } else if (*p == ' ') {
            isDigit = 0;
        }
        p++;
    }

    return count;
}

void destroyColony(Koloni* koloni){
    if(koloni=NULL) return ;
    free(koloni);
    return;
}