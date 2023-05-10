#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, qnt_par = 0, qnt_impar = 0;
    float m_par = 0, m_impar = 0;


    do
    {   
        scanf("%d", &n);
        if (n % 2 == 0 && n !=0)
        {
            qnt_par++;
            m_par += n;
        }
        else if (n==0)
        {
        }
        else
        {
            qnt_impar++;
            m_impar += n;
        }
    } while (n>0);
    
    m_par = (float)m_par / qnt_par;
    m_impar = (float)m_impar / qnt_impar;

    printf("MEDIA PAR: %f\nMEDIA IMPAR: %f\n", m_par, m_impar);

    return 0;
}
