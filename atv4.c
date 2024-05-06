#include <stdio.h>

int Digitoveri2, DigitoVeri1, Inve1, Inve2, Inve3, verif, N, InveReal;
int Nconta, soma, s1, s2, s3;

int main(void)
{
        do 
        {
        do
        {
            printf("Escreva o seu número da conta, de 4 dígitos: \n");
            scanf("%d", &Nconta);
        } while (Nconta < 1000);
    
        } while (Nconta > 9999);
    
    N = Nconta / 10;
    verif = Nconta % 10;

    printf("\nO número da conta é: %d\n\n", Nconta);

    Inve1 = N % 10;
    Inve2 = (N / 10) % 10;
    Inve3 = (N / 100) % 10;

    InveReal = Inve1 * 100 + Inve2 * 10 + Inve3;

    printf ("===============================\n");

    printf("O Inverso real é: %d\n", InveReal);
    
soma = N + InveReal;
    
    s1 = soma / 100;
    s2 = (soma / 10) % 10;
    s3 = soma % 10;

    // Cálculo do dígito verificador
    DigitoVeri1 = s1 * 1 + s2 * 2 + s3 * 3;
    Digitoveri2 = DigitoVeri1 % 10;

    printf ("==========================================\n");
    
    printf("O dígito verificador é: %d\n", Digitoveri2);

    if (verif == Digitoveri2) {
        printf("%d é o verificador.\n", verif);
    } else {
        printf("%d não é o verificador.\n", verif);
    }

    printf ("==============================================\n");
    
    return 0;
} 