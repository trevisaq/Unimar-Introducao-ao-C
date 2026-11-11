# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
#include <stdbool.h> // Biblioteca necessária para bool, true e false
# include <locale.h>

typedef struct no{
    int info;
    struct no *esq;
    struct no *dir;
} no;

no* inicializa(){
    return NULL;
}

no* insere(no *raiz, int valor) {
    if (raiz == NULL) {
        raiz = malloc(sizeof(no));
        raiz->info = valor;
        raiz->esq = NULL;
        raiz->dir = NULL;
    }
    else if (valor <= raiz->info)
        raiz->esq = insere(raiz->esq, valor);
    else
        raiz->dir = insere(raiz->dir, valor);

    return raiz;
}

void percorre_pre_ordem(no *raiz) {
    if (raiz != NULL) {
        printf(" %d ", raiz->info);
        percorre_pre_ordem(raiz->esq);
        percorre_pre_ordem(raiz->dir);
    }
}

void percorre_em_ordem(no *raiz) {
    if (raiz != NULL) {
        percorre_pre_ordem(raiz->esq);
        printf(" %d ", raiz->info);
        percorre_pre_ordem(raiz->dir);
    }
}

void percorre_pos_ordem(no *raiz) {
    if (raiz != NULL) {
        percorre_pre_ordem(raiz->esq);
        percorre_pre_ordem(raiz->dir);
        printf(" %d ", raiz->info);
    }
}

int encontra_menor(no* raiz){
    no* aux;
    aux = raiz;
    while (aux->esq!= NULL)
        aux = aux->esq;
    return aux->info;
}

int encontra_maior(no* raiz){
    no* aux;
    aux = raiz;
    while (aux->dir != NULL)
        aux = aux->dir;
    return aux->info;
}

bool buscar_valor(no *raiz, int valor) {
    if (raiz == NULL)
        return false;

    if (raiz->info == valor)
        return true;

    if (valor < raiz->info)
        return buscar_valor(raiz->esq, valor);
    else
        return buscar_valor(raiz->dir, valor);
}

int main (){
    no *raiz;
    raiz = inicializa();
    raiz = insere(raiz, 5);
    raiz = insere(raiz, 3);
    raiz = insere(raiz, 1);
    raiz = insere(raiz, 4);
    raiz = insere(raiz, 7);

    printf("\n");
    printf("Pre-ordem... ");
    percorre_pre_ordem(raiz);
    printf("\nEm-ordem.... ");
    percorre_em_ordem(raiz);
    printf("\nPos-ordem... ");
    percorre_em_ordem(raiz);

    printf("\n");
    printf("\nMaior valor: %d",encontra_maior(raiz));
    printf("\nMenor valor: %d",encontra_menor(raiz));
    printf("\n\n--------------------------------------------\n\n");

    int valorBuscado;
    printf("Digite um valor para buscar na arvore: ");
    scanf("%d", &valorBuscado);

    printf("\nBuscando o numero %i na arvore...", valorBuscado);
    const char *resultado;

    if (buscar_valor(raiz, valorBuscado)){
        resultado = "foi encontrado!";
    } else {
        resultado = "nao foi encontrado!";
    }

    printf("\nO valor %i %s",valorBuscado,  resultado);

    return 0;
}
