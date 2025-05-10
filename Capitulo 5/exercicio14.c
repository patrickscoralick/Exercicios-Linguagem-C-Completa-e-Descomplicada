/*14) Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima
o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero,
e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns
termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/

#include<stdio.h> 
#include<stdlib.h>

int main(){
    int i, num;
    unsigned long int termoAtual, termoProx, termoAuxiliar; //Separei as variáveis para visualizar melhor o fibonacci
    i = 0;
    while(i != 1){
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
        if(num < 0){
            printf("ERRO: Digite um numero POSITIVO!\n");
            continue;
        }
        i++;
    }
    termoAtual = 0, termoProx = 1;
    for(; num > 0; num--){
        termoAuxiliar= termoAtual + termoProx;
        termoAtual = termoProx;
        termoProx = termoAuxiliar;
    }
    //No printf se atentar ao '%lu', onde: l = long, u = unsigned. Assim irá imprimir dentro do range desejado.
    printf("O valor digitado como termo na sequencia de Fibonacci: %lu\n", termoAtual);
    system("pause");
    return 0;
}