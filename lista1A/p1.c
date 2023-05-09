#include <stdio.h>
 
int main(){
    int n1, n2, n3, k, k_2;
    scanf("%d %d %d", &n1,&n2,&n3);
    if((n1/10==0) && (n2/10==0) && (n3/10==0)){
        k = n1*100 + n2*10 + n3;
        k_2 = k*k;
        printf("%d, %d", k, k_2); 
    }
    else{
    printf("DIGITO INVALIDO");
        }
return 0;
}