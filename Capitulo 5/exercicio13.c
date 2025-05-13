/*13) Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que são
múltiplos de 3 ou 5.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    unsigned long int somaNum = 0, i = 0;
    while(i<1000){
        if(i%3 == 0 || i%5 == 0)
            somaNum += i;
        i++;
    }
    printf("Resultado final: %d\n", somaNum);
    system("pause");
    return 0;
}