/*8) Faça um programa que leia 10 inteiros e imprima sua média.*/

#include<stdio.h> 
#include<stdlib.h>

int main(){
    int x, y, i;
    i = 0, y = 0;
    while (i < 10){
        printf("Digite o valor n.%d: ", i+1);
        scanf("%d", &x);
        /*Queria criar uma validação para aceitar apenas valor inteiro,
        mas acabou precisando de mais código e técnica do que visto no livro até aqui.*/
        y += x;
        i++;
    }
    printf("\nA media dos valores digitados: %d\n", y/i);
    system("pause");
    return 0;
}