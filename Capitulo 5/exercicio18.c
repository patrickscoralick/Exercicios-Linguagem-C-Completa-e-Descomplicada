/*18) Faça um programa que receba um número inteiro maior do que 1 e verifique se o número
fornecido é primo ou não.*/

#include<stdio.h> 
#include<stdlib.h>

int main(){
    int num;
    do{
        printf("Digite um valor inteiro positivo qualquer: ");
        scanf("%d", &num);
        if(num <= 1)
            printf("ERRO: Digite um valor inteiro maior que 1.\n");
    }while(num <= 1);
    for(int i = 2; i <= num; i++){
        if(i != num && num%i == 0){
            printf("%d = NAO primo\n", num);
            break;
        }
        if(i == num)
            printf("%d = numero PRIMO\n", num);
    }
    system("pause");
    return 0;
}