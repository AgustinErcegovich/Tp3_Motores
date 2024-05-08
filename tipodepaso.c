#include "ctype.h"
#include "MKL25Z4.h"
#include "TIPODEPASO.h"

int pines [4] = {0, 1, 2, 3};
int completo [4] [4] =  {0, 0, 0, 1}, 
                        {0, 0, 1, 0},
                        {0, 1, 0, 0},
                        {1, 0, 0, 0};

int medio [4] [8] =     {0, 0, 0, 1}, 
                        {0, 0, 1, 1},
                        {0, 0, 1, 0},
                        {0, 1, 1, 0},
                        {0, 1, 0, 0},
                        {1, 1, 0, 0},
                        {1, 0, 0, 0},
                        {1, 0, 0, 1};

int normal [4] [4] =    {0, 0, 1, 1},
                        {0, 1, 1, 0},
                        {1, 1, 0, 0},
                        {1, 0, 0, 1};

void TPaso(char tipo, int cantidad) {
    char tipodepaso = tolower(tipo);
    if (tipodepaso == 'c') {
        for (int i=0; i<cantidad; i++) {
            int paso = i%4;
        for (int j=0; j<4; j++) {
            PTA -> PSOR |= (completo[j][paso] << pines[j]);
        }
        }
    } else if (tipodepaso == 'm') {
        for (int i=0; i<cantidad; i++) {
           int paso = i%8;
        for (int j=0; j<4; j++) {
            PTA -> PSOR |= (medio[j][paso] << pines[j]);
        }
        }
    } else if (tipodepaso == 'n') {
        for (int i=0; i<cantidad; i++) {
            int paso = i%4;
        for (int j=0; j<4; j++) {
            PTA -> PSOR |= (normal[j][paso] << pines[j]);
        }
        }
    }
}
