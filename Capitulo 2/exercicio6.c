/*6) Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação
científica.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    double x;
    scanf("%lf", &x); //%lf para leitura de double, mas para impressão se usa o %f. 
    printf("%e", x);
    system("pause");
    return 0;
}