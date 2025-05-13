/*9) Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    double x, menor, maior, i;
    for (int i = 1; i <= 10; i++){
        printf("Digite o valor n.%d: ", i);
        scanf("%lf", &x);
        //Garantir que a passagem de valor na primeira leitura.
        if(i == 1) {
            menor = x;
            maior = x;
        }
        if(x < menor)
            menor = x;
        if(x > maior)
            maior = x;
    }
    printf("\nMenor valor lido: %.2f\n", menor);
    printf("\nMaior valor lido: %.2f\n", maior);
    system("pause");
    return 0;
}