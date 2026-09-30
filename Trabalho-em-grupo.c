# include <stdio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int l, c, tamanhoM = 0, contador = 1;

    do{
        printf("\n");
        printf("Defina X (numero de linhas e colunas que a matriz tera): ");
        scanf("%i", &tamanhoM);
        if (tamanhoM > 5 || tamanhoM < 1){
            printf("\nErro no cadastro do tamanho da matriz!");
            printf("\nO tamanho das linhas e colunas da matriz devem estar entre 1 e 5\n");
            system("pause");
            system("cls");
        }
        printf("\n");
    } while(tamanhoM > 5 || tamanhoM < 1);

    
    int matriz[tamanhoM][tamanhoM]; // matriz é criada com o tamanho descrito

    
    for (l = 0; l < tamanhoM; l++){
        for (c = 0; c < tamanhoM; c++){
            printf("[%i] Valor: ", contador);
            scanf("%i", &matriz[l][c]);
            contador++;
        }
        printf("\n"); 
    }


    printf("\n---------------- Cheque as respostas ------------------\n");

    int indice = 0;
    int posicaoMenor = 0;
    int menor = matriz[0][0];

    for (l = 0; l < tamanhoM; l++){

        int somaLinha = 0;
        int maior = matriz[l][0];

        for (c = 0; c < tamanhoM; c++){

            if(maior < matriz[l][c]){
                maior = matriz[l][c];
            }

            if(menor > matriz[l][c]){
                menor = matriz[l][c];
                posicaoMenor = indice;

            }
            somaLinha += matriz[l][c];
            indice++;
        }
        printf("\n");
        printf("\n[%i] linha - O maior é o............. %i", l+1, maior);
        printf("\n[%i] linha - A soma da............... %i", l+1, somaLinha);
    }
    printf("\n\nA posição do menor numero da matriz é....... %i", posicaoMenor+1);
    printf("\nO indice do menor numero da matriz é........ %i", posicaoMenor);


    printf("\n");
    printf("\n");


    printf("\n-------------- Cheque sua matriz abaixo! --------------\n\n");

    for (l = 0; l < tamanhoM; l++){
        for (c = 0; c < tamanhoM; c++){
            printf("%i ", matriz[l][c]);
        }
        printf("\n"); // Quebro a linha pra ler no formato correto
    }

    printf("\n-------------------------------------------------------\n\n");
    system("exit");
}
