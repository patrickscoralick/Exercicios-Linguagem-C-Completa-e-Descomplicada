/*9) Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para
isso. Em seguida, imprima os valores na ordem inversa em que eles foram lidos.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float x, y;
    scanf("%f%f", &x, &y);
    printf("%f%f", y, x);
    system("pause");
    return 0;
}