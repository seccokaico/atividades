#include <stdio.h>

int main(void) {
    int ano;
    double valor_bem, taxadeDepre , depre, valorbem_depreciado, 
 totaldepreci, acumulada;
    int i;

    printf("Escreva o valor do bem para ser depreciado: ");
    scanf("%lf", &valor_bem);

    printf("Informe o período da depreciação (em anos): ");
    scanf("%d", &ano);
  
    printf("=================================================================");
    printf ("\n\n ano\t\tvalor do bem\t\tdepreciação\t\t valor depreciado\n");
  
  for ( int i = 1; i <=ano ; i++){

  taxadeDepre = 1.5;
  depre = valor_bem * (taxadeDepre / 100);
  valorbem_depreciado = valor_bem - depre;
  acumulada+= depre;

    printf ("%d\t\t %0.2lf \t\t\t %g \t\t\t %0.1lf\n", i, valor_bem, depre,
   valorbem_depreciado);
    valor_bem = valorbem_depreciado;

  }
  printf ("=================================================================");
    printf ("O valor acumulado das depreciações foi: %lf", acumulada);
  
  return 0;
}
  
