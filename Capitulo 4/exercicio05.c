/*5) Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
      ◻ O número digitado ao quadrado.
      ◻ A raiz quadrada do número digitado.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float num;
    printf("Digite um numero real: ");
    scanf("%f", &num);
    if (num >= 0){
        printf("Numero ao quadrado: %f\n", num*num);
        printf("Raiz Quadrada: %f\n", sqrt(num));
    }
    system("pause");
    return 0;
}