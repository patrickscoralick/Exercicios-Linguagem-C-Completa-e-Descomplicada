/*7) Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    char c;
    c = getchar();
    putchar(c);
    //printf("%d", c); /*Imprime o valor inteiro referente a 'posição' do caractere na tabela ASCII.*/
    system("pause");
    return 0;
}