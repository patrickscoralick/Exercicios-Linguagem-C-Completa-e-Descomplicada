 /*16) Escreva um programa que leia um número inteiro e mostre a multiplicação e a divisão 
 desse número por dois (utilize os operadores de deslocamento de bits).*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int x;
    scanf("%d", &x);
    printf("Multiplicacao por 2: %d \n", x << 1);
    printf("Divisao  por 2: %d \n", x >> 1);
    system("pause");
    return 0; 
}