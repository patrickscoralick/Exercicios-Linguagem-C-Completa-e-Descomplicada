/*1) Faça um programa que leia um número inteiro e retorne se antecessor e seu sucessor.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int x;
    scanf("%d", &x);
    printf("%d | %d \n", x - 1, x + 1);
    system("pause");
    return 0;
}