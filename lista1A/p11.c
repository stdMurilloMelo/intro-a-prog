#include <stdio.h>
 
int main(){
    
    float v[4], temp;
    
    scanf("%f", &v[0]);
    scanf("%f", &v[1]);
    scanf("%f", &v[2]);
    scanf("%f", &v[3]);
    int i,j;
    
    for(i=0; i<4; i++){
        for(j=i+1; j<4; j++){
            if(v[i]>v[j]){
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    
    printf("%.2f, %.2f, %.2f, %.2f", v[0],v[1],v[2],v[3]);
    
return 0;
}