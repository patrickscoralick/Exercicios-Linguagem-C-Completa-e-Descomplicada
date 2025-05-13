/*5) Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    unsigned int i = 0, j = 0, num = 0;
    /*Fiquei na dúvida se o primeiro numero par era o '0' ou o '2'.
    Contei como zero sendo o primeiro*/
    while(i<50){
        if(num%2==0){
            j = j + num;
            printf("%u ord.: %u \n", i, num);
            i++;
        }
        num++;
    }
    printf("%u ", j);
    system("pause");
    return 0;
}