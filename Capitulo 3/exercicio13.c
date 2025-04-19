 /*13) Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
                                                h = √a² + b²
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa através da fórmula
dada. Imprima o resultado.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    double a,b,h;
    printf("Digite os valores dos catetos de um triangulo: ");
    scanf("%lf %lf", &a, &b);
    h = sqrt((a*a)+(b*b));
    printf("Resultado da hipotenusa: %f", h);
    system("pause");
    return 0;
}