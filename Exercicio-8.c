# include <stdio.h>
# include <locale.h>

typedef struct
{
    char nome[255], cidade[255];
    int RA;
    float media;
} lista_alunos;


int main(){
    setlocale(LC_ALL, "portuguese");

    lista_alunos alunos[2];
    int contador = 0;

    while(contador < 2){
        printf("\n\nDigite o nome do %iº aluno: ", contador+1);
        gets(&alunos[contador].nome);
        printf("Digite a cidade do %iº aluno: ", contador+1);
        gets(alunos[contador].cidade);
        printf("Digite o RA do %iº aluno: ", contador+1);
        scanf("%i", &alunos[contador].RA);
        printf("Digite a media do %iº aluno: ", contador+1);
        scanf("%f", &alunos[contador].media);
        getchar();
        contador = contador + 1;
    }

    float maior = alunos[0].media;
    float menor = alunos[0].media;
    
    // for(int i = 10; i > 0; i--){
    //     if (alunos[i].media >  alunos[i-1].media){
    //         maior = alunos[i];
    //     }
    //     if (alunos[i].media <  alunos[i-1].media){
    //         maior = alunos[i];
    //     }
            
    //     printf("%i", alunos[0].RA);
    // }

    scanf("");
    return 0;
}
