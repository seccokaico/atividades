#include <stdio.h>
#include <stdlib.h>




// Função de comparação para ordenação em ordem decrescente
int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int N, K;
  printf("represente o numero de competidores\n");
    scanf("%d", &N); // número de competidores
  
  printf("represente o numero mínimo de vagas para a proxima fase\n");
    scanf("%d", &K); // número mínimo de vagas para próxima fase

    int pontuacoes[N];
    for (int i = 0; i < N; i++) {
    
        scanf("%d", &pontuacoes[i]); // lendo as pontuações
    }

    // Ordenando em ordem decrescente
    qsort(pontuacoes, N, sizeof(int), compare);

    // Verificando se há empate na última posição que garante a classificação
    int classificados = K;
    for (int i = K; i < N; i++) {
        if (pontuacoes[i] == pontuacoes[K - 1]) {
            classificados++;
        } else {
            break;
        }
    }

    printf("%d\n", classificados); // imprimindo o número de classificados
    return 0;




}