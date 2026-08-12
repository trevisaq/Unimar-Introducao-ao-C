#include <stdio.h>
#include <locale.h>
// Exercicio 3: Calcular o valor de uma mercadoria com um desconto a ser aplicado
int main() {
    setlocale(LC_ALL, "portuguese");

    float mercadoria, desconto;

    printf("Digite o valor da mercadoria: ");
    scanf("%f", &mercadoria);

    printf("Digite o valor do desconto: ");
    scanf("%f", &desconto);

    printf("O valor da mercadoria com o desconto aplicado e de: %f", mercadoria - mercadoria * desconto / 100);

    return 0;
}
