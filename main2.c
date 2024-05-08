#include "MKL25Z4.h"
#include "tipodepaso.h"

int pines [4] = {0, 1, 2, 3};
int n1 = 0, n2 = 0, mult = 0;
char paso;

int main {
    SIM -> SCGC5 |= SIM_SCGC5_PORTA_MASK;
    for (int e=0;i<4;i++) {
        PORTA -> PCR[pines[i]] |= PORT_PCR_MUX(1);
    }
    while(1) {
        do {
            printf("Ingrese un numero entero positivo para una multriplicacion: ");
            scanf("%d", n1);
        } while (n1 < 0);
        do {
            printf("Ingrese otro numero entero positivo para multriplicar con el anterior: ");
            scanf("%d", n2);
        } while (n2 < 0);
        printf("Ingrese que tipo de paso quiere, Completo 'c', Medio 'm' o Normal 'n': ")
        scanf("%c", paso);
        mult = n1 * n2;
        TPaso(paso, mult);
    }
}
