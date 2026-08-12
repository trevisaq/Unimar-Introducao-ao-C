#include <stdio.h>
#include <locale.h>
// Exercicio 1: Calcular a media de 4 valores inteiros
int main() {
    setlocale(LC_ALL, "portuguese");

    float valor1, valor2, valor3, valor4;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &valor3);

    printf("Digite o quarto valor: ");
    scanf("%f", &valor4);

    printf("A media aritimetica entre esses quatros valores sao %f", (valor1 + valor2 + valor3 + valor4) / 4);

    return 0;
}
