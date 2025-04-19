 /*5) Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do 
 ano atual.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int idade, anoAtual; //Não é possível ter uma exatidão apenas com essas informações de entrada! Mas gera uma estimativa.
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    printf("Nasceu no ano de %d .", anoAtual - idade); 
    system("pause");
    return 0;
}