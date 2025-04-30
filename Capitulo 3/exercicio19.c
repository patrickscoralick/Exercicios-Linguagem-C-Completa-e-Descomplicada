/*19) Elabore um programa que leia dois números inteiros e exiba o resultado das operações de "ou
exclusivo", "ou bit a bit" e "e bit a bit" entre eles.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, y;
    printf("Digite o primeiro numero:");
    scanf("%d", &x);
    printf("Digite o segundo numero:");
    scanf("%d", &y);
    printf("\nOU EXCLUSIVO bit a bit: %d\n", x ^ y);
    printf("OU bit a bit: %d\n", x | y);
    printf("E bit a bit: %d\n", x & y);
    system("pause");
    return 0;
}