 /*14) Faça um programa que converta uma letra maiúscula em letra minúscula. Use a tabela ASCII
 para isso.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    char maiuscula;
    printf("Digite uma letra maiuscula: ");
    scanf("%c", &maiuscula);
    printf("Letra convertida (p/ minuscula): %c \n", (maiuscula + 32));
    system("pause");
    return 0;
}