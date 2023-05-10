#include <stdio.h>
 
int main(){
    
    int a, v[8], i, temp;
    
    scanf("%d", &a);
 
    if(!(a>=0 && a<=255)){
        printf("Numero invalido!");
    }    
    else{
        for(i=0; i<8; i++){
            v[i] = a%2;
            a = a/2;
        }
        for(i=7; i>=0; i--){
            printf("%d", v[i]);
        }
    }
    
    
return 0;
}