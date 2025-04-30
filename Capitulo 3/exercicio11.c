/*11) Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente. A área 
 do círculo é A = π * raio², sendo π = 3.141592.*/

#include<stdio.h>
#include<stdlib.h>

#define PI 3.141592

int main(){
    float raio, A;
    printf("Digite o valor do raio de um circulo: ");
    scanf("%f", &raio);
    A = PI*(raio*raio);
    printf("Area do circulo: %f\n", A);
    system("pause");
    return 0;
}