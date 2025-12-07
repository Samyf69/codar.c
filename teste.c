#include <stdio.h>

int main() {
    // 1. Definição de Variáveis
    // Usamos 'float' para preços e 'int' para quantidades inteiras
    float precoSkol = 5.00;
    float precoHeineken = 10.00;

    int estoqueSkol = 50;
    int estoqueHeineken = 50;

    int opcao;
    int quantidade;
    float total;

    // 2. Menu de Escolha
    printf("--- SISTEMA DE CERVEJA ---\n");
    printf("1. Skol (R$ %.2f) - Estoque: %d\n", precoSkol, estoqueSkol);
    printf("2. Heineken (R$ %.2f) - Estoque: %d\n", precoHeineken, estoqueHeineken);
    printf("Escolha sua cerveja (1 ou 2): ");
    scanf("%d", &opcao);

    // 3. Lógica de Venda
    if (opcao == 1) {
        printf("Voce escolheu Skol. Quantas unidades? ");
        scanf("%d", &quantidade);

        if (quantidade <= estoqueSkol) {
            total = quantidade * precoSkol;
            estoqueSkol = estoqueSkol - quantidade; // Atualiza o estoque
            printf("Compra realizada! Valor Total: R$ %.2f\n", total);
            printf("Estoque restante de Skol: %d\n", estoqueSkol);
        } else {
            printf("Erro: Estoque insuficiente! Temos apenas %d.\n", estoqueSkol);
        }

    } else if (opcao == 2) {
        printf("Voce escolheu Heineken. Quantas unidades? ");
        scanf("%d", &quantidade);

        if (quantidade <= estoqueHeineken) {
            total = quantidade * precoHeineken;
            estoqueHeineken = estoqueHeineken - quantidade; // Atualiza o estoque
            printf("Compra realizada! Valor Total: R$ %.2f\n", total);
            printf("Estoque restante de Heineken: %d\n", estoqueHeineken);
        } else {
            printf("Erro: Estoque insuficiente! Temos apenas %d.\n", estoqueHeineken);
        }

    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}
