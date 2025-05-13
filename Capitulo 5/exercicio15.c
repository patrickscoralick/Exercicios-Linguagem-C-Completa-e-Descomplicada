/*15) Elabore um programa que faça a leitura de vários números inteiros até que se digite um número
negativo. O programa tem que retornar o maior e o menor número lido.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    /*Criei essa variável 'i' para a primeira passagem de valor, e verificação dele ser negativo.
    Com ela fiz algumas condicionais extras para que o resultado se encaixe com o enunciado.*/
    int num, i = 0;
    unsigned int maior, menor;
    do{
        printf("Digite valor(es) inteiros quaisquer: ");
        scanf("%d", &num);
        if(num < 0 && i == 0){
            printf("ERRO: Primeiro valor digitado negativo!\n");
            break;
        }
        if(i == 0){
            menor = num;
            maior = num;
            i++;
        }
        if(num > maior && num >= 0)
            maior = num;
        if(num<menor && num >= 0)
            menor = num;
    }while(num>=0);
    if(i != 0){
        printf("Maior numero digitado: %u\n", maior);
        printf("Menor numero digitado: %u\n", menor);
    }
    system("pause");
    return 0;
}