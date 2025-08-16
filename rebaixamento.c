#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    double vencer;
    double empate;
    double derrota;
    int rebaixado; 
} times;

int main() {
    
    times bragantino = {0.703002, 0.186999, 0.109999, 0};
    times fluminense = {0.135201, 0.225335, 0.639464, 0};
    times cap = {0.264403, 0.292877, 0.442721, 0};

    int galo = 0; 

    
    srand(time(NULL));

    
    for (int i = 0; i < 10000; i++) {
        double r1 = (double)rand() / RAND_MAX; 
        double r2 = (double)rand() / RAND_MAX; 
        double r3 = (double)rand() / RAND_MAX; 

        
        int bragantino_resultado = (r1 < bragantino.vencer) ? 1 : ((r1 < bragantino.vencer + bragantino.empate) ? 0 : -1);

        
        int cap_resultado = (r2 < cap.vencer) ? 1 : ((r2 < cap.vencer + cap.empate) ? 0 : -1);

        
        int fluminense_resultado = (r3 < fluminense.vencer) ? 1 : ((r3 < fluminense.vencer + fluminense.empate) ? 0 : -1);

        
        if (bragantino_resultado != 1) {
            bragantino.rebaixado++;
        } else if (cap_resultado == 1 && fluminense_resultado == 1) {
            galo++;
        } else if (cap_resultado == 1 && fluminense_resultado == 0) {
            galo++;
        } else if (cap_resultado == 1 && fluminense_resultado == -1) {
            fluminense.rebaixado++;
        } else if (cap_resultado == 0 && fluminense_resultado == 1) {
            cap.rebaixado++;
        } else if (cap_resultado == 0 && fluminense_resultado == 0) {
            cap.rebaixado++;
        } else if (cap_resultado == 0 && fluminense_resultado == -1) {
            fluminense.rebaixado++;
        } else if (cap_resultado == -1 && fluminense_resultado == 1) {
            cap.rebaixado++;
        } else if (cap_resultado == -1 && fluminense_resultado == 0) {
            cap.rebaixado++;
        } else if (cap_resultado == -1 && fluminense_resultado == -1) {
            cap.rebaixado++;
        }
    }

    
    printf("Resultados após 10000 simulações:\n");
    printf("Bragantino rebaixado: %d vezes\n", bragantino.rebaixado);
    printf("Fluminense rebaixado: %d vezes\n", fluminense.rebaixado);
    printf("Athletico-PR rebaixado: %d vezes\n", cap.rebaixado);
    printf("Atletico Mineiro rebaixado: %d vezes\n", galo);

    return 0;
}
