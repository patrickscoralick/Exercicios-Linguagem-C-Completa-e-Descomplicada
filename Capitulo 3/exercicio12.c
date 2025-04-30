/*12) Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O volume de
 um cilindro circular é calculado por meio da seguinte fórmula:
                                    V = π * raio² * altura,
em que π = 3.141592.*/

#include<stdio.h>
#include<stdlib.h>

#define PI 3.141592

int main(){
    float altura, raio, V;
    printf("Digite a altura de um cilindro circular: ");
    scanf("%f", &altura);
    printf("Digite o raio de um cilindro circular: ");
    scanf("%f", &raio);
    V = PI*(raio*raio)*altura;
    printf("Volume do cilindro: %f", V);
    system("pause");
    return 0;
}