#include<stdio.h>
 
int main(){
    float renda, min=937;
    int qnt_p, tipo_scl, etnia;
 
    scanf("%f %d %d %d", &renda, &qnt_p, &tipo_scl, &etnia);
 
    if(renda/qnt_p<=1.5*min && tipo_scl==2){
        
        if(etnia!=4)
        {
            printf("ALUNO COTISTA (L2)");        
        }
        
        else
        {
            printf("ALUNO COTISTA (L1)");
        }
    }
    
    else if (tipo_scl==2)
    {
        
        if (etnia!=4)
        {
            printf("ALUNO COTISTA (L4)");        
        }
        
        else
        {
            printf("ALUNO COTISTA (L3)");
        }
        
    }
 
    else
    {
        printf("ALUNO NAO COTISTA");
    }
 
 
    return 0;
}