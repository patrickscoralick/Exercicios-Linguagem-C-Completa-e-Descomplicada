/*19) Faça um programa que calcule e escreva o valor de S:
            [EXPRESSÃO NO READ-ME DO GITHUB]*/

#include<stdio.h> 
#include<stdlib.h>

int main(){
    float s = 0.0, x = 1.0, y = 1.0;
    // int i = 1; //Para ter certeza dos termos e divisões
    while(x <= 99.0 || y <= 50.0){
        // /*Conferir o resultado*/
        // printf("[%d] %.2f/%.2f = %.2f\n", i, x, y, x/y);
        // i++;
        s += x/y;
        x += 2.0;
        y += 1.0;
    }
    printf("S = %.2f\n", s);
    system("pause");
    return 0;
}