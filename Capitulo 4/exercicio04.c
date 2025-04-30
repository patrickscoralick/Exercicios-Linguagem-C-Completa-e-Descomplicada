/*4) Faça um programa que leia o salário de um trabalhador e o valor da prestação de um emprés-
timo. Se a prestação:
      ◻ For maior que 20% do salário, imprima: "Empréstimo não concedido."
      ◻ Caso contrário, imprima: "Empréstimo concedido."*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float salario, prestacao;
    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%f", &prestacao);
    if (prestacao > (salario * 0.20))
        printf("Emprestimo NAO concedido.\n");
    else
        printf("Emprestimo concedido.\n");
    system("pause");
    return 0;
}