 /*4) Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float x,y,z,w;
    scanf("%f %f %f %f", &x, &y, &z, &w);
    printf("%f", (x+y+z+w)/4);
    system("pause");
    return 0;
}