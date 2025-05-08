/*3) Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
naturais ímpares.*/

#include<stdio.h> 
#include<stdlib.h>

int main(){
    int n, ini;
    do{
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &n);
        if (n < 0)
            printf("ERRO: Entrada invalida!\n");
    } while(n < 0);
    ini = 0;
    while(ini <= n){
        if(ini%2 != 0)
            printf("%u ", ini);
        ini++;
    }
    system("pause");
    return 0;
}