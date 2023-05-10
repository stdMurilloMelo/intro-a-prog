#include <stdio.h>
 
int main(){
    
    int a,b,c,tempn;
    char x,y,z, tempc;
    
    scanf("%d %d %d\n", &a, &b, &c); 
    scanf("%c %c %c", &x, &y, &z);
    
    int v[3] = {a,b,c};
    char ord[3] = {x-65,y-65,z-65};
    
    int i,j;
    
    for(i=0; i<3; i++){
        for(j=i+1; j<3; j++){
            if(v[i]>v[j]){
                tempn = v[i];
                v[i] = v[j];
                v[j] = tempn;
            }
        }
    }
    
   printf("%d %d %d\n", v[ord[0]],v[ord[1]],v[ord[2]]);
    
    
return 0;
}