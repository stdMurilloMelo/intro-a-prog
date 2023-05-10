#include <stdio.h>
 
int main(){
    
    int a, rev=0, r, ori;
    
    scanf("%d", &a);
    
    ori = a;
    
    if(a<99999){
        while(a!=0){
            r = a%10;
            a = a/10;
            rev = rev*10 + r;
        }
        if(rev == ori){printf("PALINDROMO\n");}
        else{printf("NAO PALINDROMO\n");}
    }
      else{printf("NUMERO INVALIDO\n");}
    
    
    
    
return 0;
}