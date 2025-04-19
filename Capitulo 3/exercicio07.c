 /*7) Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor
correspondente em dólares.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float valor, dolar;
    printf("Valor em reais (R$): ");
    scanf("%f", &valor);
    printf("Valor atual do Dolar: ");
    scanf("%f", &dolar);
    printf("O valor correspondente em dolar vale $%f", valor/dolar);
    system("pause");
    return 0;
}