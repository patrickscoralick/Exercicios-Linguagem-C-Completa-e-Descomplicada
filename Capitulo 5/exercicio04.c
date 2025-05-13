/*4) Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando
números maiores que 0.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    unsigned int i, num;
    i = 0;
    num = 1;
    while(i<5){
        if(num%3==0){
            printf("%u ", num);
            i++;
        }
        num++;
    }
    system("pause");
    return 0;
}