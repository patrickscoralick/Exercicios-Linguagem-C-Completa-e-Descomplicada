/*14) Faça um programa que leia três caracteres do tipo char e depois impria um em cada linha.
Use um único comando printf() para isso.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    char a, b, c;
    a = getchar();
    b = getchar();
    c = getchar();
    //scanf("%c%c%c", &a, &b, &c); /*Nesse exercicio, a partir dos meus testes, produziu o mesmo efeito do 'Getchar'*/
    printf("%c\n%c\n%c", a, b, c);
    system("pause");
    return 0;
}