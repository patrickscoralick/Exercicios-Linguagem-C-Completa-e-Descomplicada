/*15) Escreva um programa que leia três variáves: char, int e float. Em seguida, imprima-as de três
maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha.
Use um único comando printf() para cada operação de escrita das três variáveis.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    char c;
    int x;
    float y;
    scanf("%c%d%f", &c, &x, &y);
    printf("%c %d %f\n", c, x, y);
    printf("%c  %d  %f\n", c, x, y);
    printf("%c\n%d\n%f\n", c, x, y);
    system("pause");
    return 0;
}