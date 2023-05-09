#include <stdio.h>
#include <math.h>
 
int main(){
    
    float temp;
    float chuva;
    
    scanf("%f", &temp);
    scanf("%f", &chuva);
    
    temp = 5*(temp-32)/9;
    chuva = chuva*25.4;
    
    printf("O VALOR EM CELSIUS = %.2f\n", temp);
    
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", chuva);
 
 
 
 
 
return 0;
}