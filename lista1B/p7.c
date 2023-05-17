#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, qnt_par = 0, qnt_impar = 0;
    double m_par = 0, m_impar = 0;

    while (1)
    {
        scanf("%d", &n);
        if (n==0)
        {
            break;
        }
        
        if (n % 2 == 0)
        {
            qnt_par++;
            m_par += (float)n;
        }
        else
        {
            qnt_impar++;
            m_impar += (float)n;
        }
    }

    if (qnt_par)
    {
        m_par = m_par / qnt_par;
    }
    
    if (qnt_impar)
    {
        m_impar = m_impar / qnt_impar;
    }

    printf("MEDIA PAR: %lf\nMEDIA IMPAR: %lf\n", m_par, m_impar);

    return 0;
}
