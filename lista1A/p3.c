#include <stdio.h>
 
int main(){
    
    float a, b, c, d;
    scanf("%f %f %f", &a, &b, &c);
    
    d = b*b - 4*a*c;
    
    printf("O VALOR DE DELTA E = %.2f", d);
    
    
return 0;
}