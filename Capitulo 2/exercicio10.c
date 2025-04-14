/*10) Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros).
Em seguida, imprima os valores lidos separados por uma barra (/).*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int dia, mes, ano;
    printf("Digite uma data (DD/MM/AAAA): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("Data: %d/%d/%d", dia, mes, ano);
    system("pause");
    return 0;
}