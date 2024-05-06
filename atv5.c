#include <stdio.h>
 float valorMedio = 0;
int totalprodutos = 0;
void calcularTroco(float totalCompra) {
    int valoresCedulasMoedas[] = {100, 50, 20, 10, 5, 2, 1};
    char *descricoes[] = {"nota(s) de 100", "nota(s) de 50", "nota(s) de 20", 
                          "nota(s) de 10", "nota(s) de 5", "nota(s) de 2", 
                          "moeda(s) de 1"};
    int trocoReais = (int)totalCompra;
    int trocoCentavos = (int)((totalCompra - trocoReais) * 100);

    printf("\nTROCO:\n");
    for (int i = 0; i < 7; i++) {
        int qtdCedulas = trocoReais / valoresCedulasMoedas[i];
        if (qtdCedulas > 0) {
            printf("%d %s\n", qtdCedulas, descricoes[i]);
            trocoReais %= valoresCedulasMoedas[i];
        }
    }
    printf("%d moeda(s) de 1 real\n", trocoCentavos);
}

int main() {
    float totalCompra = 0;
    int qtdProdutos = 0;
    float valorProduto;

    while (1) {
        printf("Informe a quantidade do produto (ou 0 para finalizar): ");
        scanf("%d", &qtdProdutos);

        if (qtdProdutos <= 0)
            break;

        printf("Informe o valor unitário do produto: R$ ");
        scanf("%f", &valorProduto);

        if (valorProduto <= 0) {
            printf("Valor inválido. O valor deve ser positivo.\n");
            continue;
        }
    

    totalCompra += qtdProdutos * valorProduto;
    totalprodutos += qtdProdutos;
    }
    if (totalCompra > 0) {
         valorMedio = totalCompra / totalprodutos;
        printf("\nVALOR TOTAL DA COMPRA: R$ %.2f\n", totalCompra);
        printf("VALOR MÉDIO DA COMPRA: R$ %.2f\n", valorMedio);
        calcularTroco(totalCompra);
    } else {
        printf("\nNenhum produto foi inserido.\n");
    }

    return 0;
}
