/*2) Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais
de 0 até N em ordem decrescente.*/

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
    ini = n; //Poderia retirar essa linha e mudar o loop repondo onde está 'ini' para 'n'.
    while(ini >= 0){
        printf("%u ", ini);
        ini--;
    }
    system("pause");
    return 0;
}