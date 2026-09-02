# include <stdio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int contador, i = 0;
    float numeros[30];

    while (i < 30){
        contador++;
        printf("Entre com o %iº numero: ", i+1);
        scanf("%f", &numeros[i]);
        if (numeros[i] == 0){
            break;
        }
        i++;
    }

    printf("\n");

    for (i = 0; i < contador-1; i++){
        printf("%iº valor - %f \n", i+1 , numeros[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}
