#include "MKL25Z4.h"
#include "PASOS.h"

int pines [4] = {0, 1, 2, 3};
int mov [3] = {4, 5, 6};

int main {
    SIM -> SCGC5 |= SIM_SCGC5_PORTA_MASK;
    for (int e=0;i<4;i++) {
        PORTA -> PCR[pines[i]] |= PORT_PCR_MUX(1);
    }
    for (int k=0;k<3;k++) {
        PORTA -> PCR[mov[k]] |= PORT_PCR_MUX(0);
    }
    while(1){
        int mov0 = PTA -> PDIR & (1 << mov[0]);
        int mov1 = PTA -> PDIR & (1 << mov[1]);
        int mov2 = PTA -> PDIR & (1 << mov[2]);
        if (mov2 == 1) {
            Completo(20);
        } else if (mov1 == 1) {
            Medio(23);
        } else if (mov0 == 1) {
            Normal(26);
        }
    }
}
