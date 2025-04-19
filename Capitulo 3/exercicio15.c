 /*15) Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e
 mostre o número formado pelos dígitos invertidos do número lido. Exemplo: Número lido = 123
 Número gerado = 321*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    unsigned short int num;
    scanf("%d",&num);
    printf("%d%d%d", num % 10, (num / 10) % 10, num / 100);
    system("pause");
    return 0;
}