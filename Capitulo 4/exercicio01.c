/*1) Faça um programa que leia dois números e mostre qual deles é o maior.*/

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
    system("pause");
    return 0;
}