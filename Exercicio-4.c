# include <stdio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i;
    float soma = 0;
    float notas[10];

    for (i = 0; i < 10; i++){
        printf("Entre com o %iº valor: ", i+1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }
    printf("\n");
    printf("Resultado da soma: %f", soma);
    printf("\n");

    system("pause");

    return 0;
}
