/*3) Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if(num%2 == 0)
        printf("Numero Par\n");
    if(num%2 != 0)
        printf("Numero Impar\n");
        system("pause");
    return 0;
}