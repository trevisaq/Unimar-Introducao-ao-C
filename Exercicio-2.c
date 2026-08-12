#include <stdio.h>
#include <locale.h>
// Exercicio 2: Calcular a area de um triangulo
int main() {
    setlocale(LC_ALL, "portuguese");

    float base, altura;

    printf("Digite o valor da base: ");
    scanf("%f", &base);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    printf("O valor da area do triangulo e de %f", base * altura / 2);

    return 0;
}
