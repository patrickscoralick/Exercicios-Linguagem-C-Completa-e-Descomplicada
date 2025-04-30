/*17) Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int x;
    scanf("%d", &x);
    /*Lembrete: O complemento bit a bit inverte todos os bits do número. O resultado, usando um número inteiro, se distoa do exemplo 
    mostrado no livro (unsigned char), pois inverte não só os bits de valor como também os bits de sinal. Nesse exercício precisei ler 
    e até fazer uns testes com a ajuda do 'Copilot' para ter certeza de que não era um erro de interpretação. Buscando ter uma saída 
    mais próxima com a do livro, precisaria adicionar questões mais complexas no código. Entendendo que era um capítulo inicial, busquei 
    apenas aplicar o que era pedido e refletir sobre o assunto!*/
    printf("Complemento bit a bit: %d\n", ~x);
    system("pause");
    return 0;
}