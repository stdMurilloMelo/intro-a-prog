#include <stdio.h>
 
int main(){
    
    int a, v[3];
    
    scanf("%d", &a);
    v[0] = a%10;
    v[1] = (a/10)%10;
    v[2] = (a/100)%10;
    a = v[0]*100 + v[1]*10 + v[2];
    printf("%d", a);
    
return 0;
}