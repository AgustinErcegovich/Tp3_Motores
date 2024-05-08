#include "MKL25Z4.h"
#include "PASOS.h"

int Completo (int NPasos) {
    int j=0;
    for (int i=0;i<NPasos;i++) {
        j++;
        if (j <= 4) {
            PTA -> PSOR |= (1 U << j);
        } else {
            j=0;
        }
    }
}
int Medio (int NPasos) {

}
int Normal (int NPasos) {

}