/*12) Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse
número, com exceção dele próprio. Exemplo: A soma dos divisores do número 66 é 1 + 2 +
3 + 6 + 11 + 22 + 33 = 78.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero, somaDivisores = 0;
    printf("Digite qualquer numero inteiro: ");
    scanf("%d", &numero);
    for(int i = 1; i < numero; i++){
        if((numero%i) == 0)
            somaDivisores+= i;
    }
    printf("Soma dos divisores de %d: %d\n", numero, somaDivisores);
    system("pause");
    return 0;
}