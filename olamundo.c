#include <stdio.h>

int main(){

    char nome[20];

    printf("Digite o seu Nome: \n");
    scanf("%[^\n]", &nome);

    printf("Seu nome é %s", nome)

    return 0;

}
