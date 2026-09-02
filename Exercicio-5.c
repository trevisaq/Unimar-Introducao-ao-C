# include <stdio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i;
    float numeros[5];

    for (i = 0; i < 5; i++){
        printf("Entre com o %iº numero: ", i+1);
        scanf("%f", &numeros[i]);
    }

    printf("\n");

    for (i = 4; i > -1; i--){
        printf("%iº valor - %f \n", i , numeros[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}
