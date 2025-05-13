/*16) Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da
série harmônica. Ou seja:

                            [EXPRESSÃO NO READ-ME DO GITHUB]

Apresente um programa que calcule o valor de qualquer Hn.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    double numHarmonico = 0.0f;
    //Garantir que o número digitado seja positivo e maior que zero!
    do{
        printf("Digite um valor inteiro positivo qualquer para Hn :");
        scanf("%d", &num);
        if(num <= 0)
            printf("ERRO: Digite um valor inteiro maior que zero!\n");
    }while(num <= 0);
    for(int i = 1; i <= num; i++){
        numHarmonico += 1.0 / i; //Atenção ao dividir float com inteiro! Numerador precisa ter '.0'
    }
    printf("Hn = %.2f\n", numHarmonico);
    system("pause");
    return 0;
}