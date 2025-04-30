/*2) Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números 
forem iguais, imprima a mensagem "Números Iguais".*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    long int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    if (num1 > num2)
        printf("Maior valor: %d (Primeiro digitado).\n", num1);
    if (num2 > num1)
        printf("Maior valor: %d (Segundo digitado).\n", num2);
    else
        printf("Numeros Iguais\n");
    system("pause");
    return 0;
}