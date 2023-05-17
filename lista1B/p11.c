#include <stdio.h>

int inverterNumero(int num) {
    int invertido = 0;
    while (num > 0) {
        int digito = num % 10;
        invertido = (invertido * 10) + digito;
        num /= 10;
    }
    return invertido;
}

int compararNumeros(int a, int b) {
    int invertidoA = inverterNumero(a);
    int invertidoB = inverterNumero(b);
    if (invertidoA > invertidoB) {
        return invertidoA;
    } else {
        return invertidoB;
    }
}

int main() {
    int T;
    scanf("%d", &T);

    int numeros[T][2];
    int i;
    for (i = 0; i < T; i++) {
        scanf("%d %d", &numeros[i][0], &numeros[i][1]);
    }

    int j;
    for (j = 0; j < T; j++) {
        int maiorNumero = compararNumeros(numeros[j][0], numeros[j][1]);
        printf("%d\n", maiorNumero);
    }

    return 0;
}
