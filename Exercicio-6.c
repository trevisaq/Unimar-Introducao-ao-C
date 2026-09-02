# include <stdio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int posicao, i = 0;
    float numeros[30];

    do {
        printf("Entre com o %iº numero: ", i+1);
        scanf("%f", &numeros[i]);
        posicao = i;
        i++;
    } while(numeros[posicao] != 0 && i < 30);

    printf("\n------------------------------------------------\n\n");
    for (i = 0; i <= posicao; i++){
        printf("%iº valor - %f \n", i+1 , numeros[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}
