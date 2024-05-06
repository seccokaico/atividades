#include <stdio.h>


// Função para calcular o tempo total
int calcular_tempo_total(int A1, int A2, int A3) {
    // Calcula o tempo total para a máquina de expresso no primeiro andar
    int tempo_primeiro_andar = (A2 + A3) * 2;

    // Calcula o tempo total para a máquina de expresso no segundo andar
    int tempo_segundo_andar = (A1 + A3) * 2;

    // Calcula o tempo total para a máquina de expresso no terceiro andar
    int tempo_terceiro_andar = (A1 + A2) * 2;

    // Retorna o menor tempo total entre as três opções
    return (tempo_primeiro_andar < tempo_segundo_andar) ? 
                ((tempo_primeiro_andar < tempo_terceiro_andar) ? tempo_primeiro_andar : tempo_terceiro_andar) :
                ((tempo_segundo_andar < tempo_terceiro_andar) ? tempo_segundo_andar : tempo_terceiro_andar);
}

int main() {
    int A1, A2, A3;

    // Lê os números de pessoas em cada andar
    printf ("Qual o número de pessoas no primeiro andar?\n");
    scanf("%d", &A1);

    printf ("Qual o número de pssoas no sedundo andar?\n");
    scanf("%d", &A2);

    printf ("Qual o número de pessoas no terceiro andar?\n");
    scanf("%d", &A3);

    // Calcula e imprime o tempo total mínimo
    printf("%d\n", calcular_tempo_total(A1, A2, A3));

    return 0;
}
