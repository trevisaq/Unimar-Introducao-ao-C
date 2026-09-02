# include <stdio.h>
# include <locale.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vogais = 0, consoantes = 0, i;
    char palavra[255];
    printf("Digite uma palavra: ");
    gets(palavra);

    for (i = 0 ; i < strlen(palavra) ; i++){
        if ( tolower(palavra[i]) == 'a' || tolower(palavra[i]) == 'e' || tolower(palavra[i]) == 'i' || tolower(palavra[i]) == 'o' || tolower(palavra[i]) == 'u'){
            vogais++;
        } else{
            consoantes++;
        }
    }

    printf("\nTotal de vogais: %i", vogais);
    printf("\nTotal de consoantes: %i", consoantes);
    printf("\n");
    system("pause");

    return 0;
}
