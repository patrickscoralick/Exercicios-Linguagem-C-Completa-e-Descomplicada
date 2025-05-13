/*10) Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
média.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, y, i;
    i = 0, y = 0;
    while (i < 10){
        printf("Digite o valor positivo n.%d: ", i+1);
        scanf("%d", &x);
        if(x < 0){
            printf("Digite apenas valores POSITIVOS!\n");
            x = 0;
            continue;
        }
        y += x;
        i++;
    }
    printf("\nA media dos valores positivos digitados: %d\n", y/i);
    system("pause");
    return 0;
}