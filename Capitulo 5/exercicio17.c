/*17) Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas
do chamado triângulo de Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/

#include<stdio.h> 
#include<stdlib.h>

int main(){
    int num;
    unsigned long int numAux = 1;
    do{
        printf("Digite um valor inteiro positivo qualquer: ");
        scanf("%d", &num);
        if(num == 0){
            printf("Sem linhas impressas! Valor minimo = 1 para visualizar o triangulo de Floyd.\n");
            break;
        }
        if(num < 0)
            printf("ERRO: Digite um valor positivo!\n");
    }while(num <= 0);
    //Estrutura do triângulo! i = linha e j = coluna.
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            printf("%lu ", numAux);
            numAux++;
        }
        printf("\n");
    }
    system("pause");
    return 0;
}