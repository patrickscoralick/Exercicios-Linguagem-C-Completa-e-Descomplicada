/*20) Faça um programa que leia um valor inteiro e positivo N, calcule e mostre o valor E, conforme
a fórmula a seguir:
                                        [EXPRESSÃO NO READ-ME DO GITHUB]*/

#include<stdio.h>
#include<stdlib.h>

/*Tive dificuldades em testar números maiores! Decidi não estudar mais a fundo a questão
de uso de memória e bibliotecas externas, pois entendi que passaria do objetivo central do capítulo.
Apesar da frustração de não conseguir visualizar o resultado preciso e mais amplo, acredito que tenha
conseguido imprimir valores exatos para escolhas entre 1 e 17.

Se alguém mais experiente quiser dar um 'PR' ou contribuir de alguma forma, ficaria super feliz!!!*/

#define LIMITE_MAX 16

int main(){
    int num;
    double resultado = 0.0;
    do{
        printf("Digite um valor inteiro positivo qualquer (maximo %d): ", LIMITE_MAX);
        scanf("%d", &num);
        if(num <= 1)
            printf("ERRO: Digite um valor inteiro maior que 1 e menor que 17.\n");
    }while(num <= 1);

    for(int i = 1; i <= num; i++){
        int j = i;
        /*Usei a linha 20 até 26, o laço While, para fazer a lógica de
        calcular a fatorial. Apesar de entender que existem outros meios por acréscimo,
        permaneci na lógica de decréscimo de j para encontrar o resultado desejado.*/
        double n = 1.0; 
        while(j > 1){
            n *= j;
            j--;
        }
        resultado += (1.00 / n);
        // printf("[%d] %.12f\n", i, resultado); //Teste Valores
    }

    printf("E = %.12f\n", resultado);
    system("pause");
    return 0;
}