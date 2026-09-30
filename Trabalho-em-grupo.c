# include <stdio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int i, j, mX = 0, contador = 1;
    int k = 0, l = 0, m = 0, n = 0;

    do{
        printf("\n");
        printf("Defina X (numero de linhas e colunas que a matriz tera): ");
        scanf("%i", &mX);
        if (mX > 5 || mX < 1){
            printf("\nErro no cadastro do tamanho da matriz!");
            printf("\nO tamanho das linhas e colunas da matriz devem estar entre 1 e 5\n");
            system("pause");
            system("cls");
        }
    } while(mX > 5 || mX < 1);

    int mY = mX;
    int matriz[mX][mY];
    printf("\n");

    // FOR FEITO PARA LEITURA DOS VALORES ->
    for (i = 0; i < mY; i++){
        for (j = 0; j < mX; j++){
            printf("[%i] Valor: ", contador);
            scanf("%i", &matriz[i][j]);
            contador++;
        }
        printf("\n");
    }


    printf("\n---------------- Cheque as respostas ------------------\n");
    // FOR FEITO PARA PRINTAR AS RESPOSTAS ->
    int linhacontador = 1;
    int indicecontador = 0;
    int posicaomenor;
    int menor = matriz[0][0];

    for (m = 0; m < mY; m++){
        int somalinha = 0;
        int maior = matriz[m][0];

        for (n = 0; n < mX; n++){

            if(maior < matriz[m][n]){
                maior = matriz[m][n];
            }

            if(menor > matriz[m][n]){
                menor = matriz[m][n];
                posicaomenor = indicecontador;

            }
            somalinha += matriz[m][n];
            indicecontador++;
        }
        printf("\n");
        printf("\n[%i] linha - O maior é o............. %i", linhacontador, maior);
        printf("\n[%i] linha - A soma da............... %i", linhacontador, somalinha);
        linhacontador++;
    }
    printf("\n");
    printf("\nA posição do menor numero da matriz é....... %i", posicaomenor+1);
    printf("\nO indice do menor numero da matriz é........ %i", posicaomenor);
    printf("\n");
    printf("\n\n");
    printf("\n-------------------------------------------------------\n\n");



    printf("\n-------------- Cheque sua matriz abaixo! --------------\n\n");

    //  FOR FEITO PARA PRINTAR A MATRIZ DOS VALORES ->
    for (k = 0; k < mY; k++){
        for (l = 0; l < mX; l++){
            printf("%i ", matriz[k][l]);
        }
        printf("\n");
    }

    printf("\n-------------------------------------------------------\n\n");

    system("exit");
}
