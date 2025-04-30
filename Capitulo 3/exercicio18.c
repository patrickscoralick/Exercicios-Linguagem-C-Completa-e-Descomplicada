/*18) Elabore um programa que leia dois números inteiros e exiba o deslocamento, à esquerda e à 
direita, do primeiro número pelo segundo.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, y;
    printf("Digite o primeiro numero:");
    scanf("%d", &x);
    printf("Digite o segundo numero:");
    scanf("%d", &y);
    printf("Deslocamento a esquerda: %d\n", x << y);
    printf("Deslocamento a direita: %d\n", x >> y);
    system("pause");
    return 0;
}