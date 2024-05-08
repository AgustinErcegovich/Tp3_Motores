#include "MKL25Z4.h"
#include "PASOS.h"

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
 
int Completo (int NPasos) {
    for (int i=0; i<NPasos; i++) {
        int paso = i%4;
        for (int j=0; j<4; j++) {
            PTA -> PSOR |= (completo[j][paso] << pines[j]);
        }
    }
}
int Medio (int NPasos) {
    for (int i=0; i<NPasos; i++) {
        int paso = i%8;
        for (int j=0; j<4; j++) {
            PTA -> PSOR |= (medio[j][paso] << pines[j]);
        }
    }
}
int Normal (int NPasos) {
    for (int i=0; i<NPasos; i++) {
        int paso = i%4;
        for (int j=0; j<4; j++) {
            PTA -> PSOR |= (normal[j][paso] << pines[j]);
        }
    }
}
