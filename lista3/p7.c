#include <stdio.h>
 
#define N_max 10001
 
int main() {
    int vetor[N_max];
    int caso, i, j, maior_elemento, contador;
 
    while (1) {
        scanf("%d", &caso);
 
        if (caso == 0) {
            break; 
        }
 
        for (i = 0; i < caso; i++) {
            scanf("%d", &vetor[i]);
        }
 
        maior_elemento = vetor[0];
        for (i = 1; i < caso; i++) {
            if (vetor[i] > maior_elemento) {
                maior_elemento = vetor[i];
            }
        }
 
        int frequencia[maior_elemento + 1];
        for (i = 0; i <= maior_elemento; i++) {
            frequencia[i] = 0; 
        }
 
        for (i = 0; i < caso; i++) {
            frequencia[vetor[i]]++;
        }
 
        for (i = 0; i <= maior_elemento; i++) {
            contador = 0;
            for (j = 0; j < caso; j++) {
                if (vetor[j] <= i) {
                    contador++;
                }
            }
            printf("(%d) %d\n", i, contador);
        }
    }
 
    return 0;
}
