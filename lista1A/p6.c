#include <stdio.h>
#include <math.h>
 
int main(){
    
    float a, b, c, d, x1, x2;
    
    scanf("%f %f %f", &a,&b,&c);
    
    d = b*b - 4*a*c;
    
    if(a!=0){
        if(d>0){
            
            printf("RAIZES DISTINTAS\n");
            x1 = (-b-sqrt(d))/(2*a);
            x2 = (-b+sqrt(d))/(2*a);
            if(x1<x2){
            printf("X1 = %.2f\n", x1);
            printf("X2 = %.2f\n", x2);
            }
            else{
            printf("X1 = %.2f\n", x2);
            printf("X2 = %.2f\n", x1);
            }
        }
        
        else if(d<0){
            printf("RAIZES IMAGINARIAS\n");
            }
            
        else{
            printf("RAIZ UNICA\n");
            x1 = -b/(2*a);
            printf("X1 = %.2f\n", x1);
            }
    }
    
    
return 0;
}