/*6) Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e terminando
em 0. Mostre uma mensagem "FIM!" após a contagem.*/

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
/*Biblioteca para sistemas Unix ou Linux*/
//#include<unistd.h>

int main(){
    short int i = 10;
    do{
        printf("%d\n", i);
        Sleep(1000); //Pausa de 1 seg (1000 ms)
        //sleep(1); //Para sistemas Unix ou Linux
        i--;
    } while(i >= 0);
    if(i <= 0)
        printf("FIM!\n");
    system("pause");
    return 0;
}