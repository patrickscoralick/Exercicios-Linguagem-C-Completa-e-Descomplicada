/*11) Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os
divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/

#include<stdio.h>
#include<stdlib.h>

/*Esse exercicio deu um trabalho de interpretação e execução! Acredito que o autor queria 'ler
um número inteiro positivo', ignorando os de casa decimais. Eu até busquei implementações com divisores 
decimais, tratando de valores positivos decimais, mas caiu em vários temas utilizando a biblioteca math.h, como
fabs e fmod. Mesmo com a ajuda do Copilot para compreender a execução, achei mais justo manter a leitura
e funcionamento apenas para números inteiros positivos. 

Obs.: Se você achar uma solução bacana para esse exercício, não esquece der dar um PR :)*/

int main(){
    int x, i = 0;
    while(i != 1){
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &x);
        if(x < 0){
            printf("ERRO: Digite um numero POSITIVO!\n");
            continue;
        }
        i++;
    }
    printf("Seus divisores sao: \n");
    for(int y = 1; y <= x; y++){
        if((x%y) == 0)
            printf("%d\n", y);
    }
    system("pause");
    return 0;
}