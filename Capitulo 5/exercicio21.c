/*21) Escreva um programa que leia certa quantidade de números, imprima o maior deles e quantas
vezes o maior número for lido. A quantidade de números a serem lidos deve ser fornecida pelo
usuário.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int qtd, qtdMaiorValor = 0;
    double valor, maiorValor;

    do{
    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &qtd);
    if(qtd <= 0)
        printf("ERRO: Digite um valor inteiro maior que 0.\n");
    }while(qtd <= 0);

    for(int i = 1; qtd >= i; i++){
        printf("[%d] Digite um numero qualquer: ", i);
        scanf("%lf", &valor);
        if (i == 1)
            maiorValor = valor;
        if(valor > maiorValor){
            maiorValor = valor;
            qtdMaiorValor = 0;
        }
        if (valor == maiorValor)
            qtdMaiorValor++;
    }
    printf("O maior valor digitado foi %.2f.\nEsse valor foi digitado %d vez(es)!\n", maiorValor, qtdMaiorValor);
    system("pause");
    return 0;
}