/*7) Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e apresente
o resultado na tela.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    double x, y;
    y = 0;
    for (int i = 1; i <= 10; i++){
        printf("Digite o valor n.%d: ", i);
        scanf("%lf", &x);
        y = y + x;
    }
    printf("\nA soma dos valores digitados: %.2f\n", y);
    system("pause");
    return 0;
}