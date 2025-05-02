/*15) Faça um programa que leia os coeficientes de uma equação do segundo grau. Em seguida, calcule
e mostre as raízes dessa equação, lembrando que as raízes são calculadas como:

                                [EXPRESSÃO NO READ-ME DO GITHUB]

em que ∆ = b² - 4 * a * c e ax² + bx + c = 0 representa uma equação do segundo grau. A variável
'a' tem de ser diferente de zero. Caso seja igual, imprima a mensagem "Não é equação de segundo
grau". Do contrário, imprima:
    ◻ Se ∆ < 0, não existe real. Imprima a mensagem "Não existe raiz".
    ◻ Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem "Raiz única".
    ◻ Se ∆ > 0, existem duas raízes reais. Imprima as raízes.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float a,b,c, delta, x1, x2;
    printf("---Achando as raizes---\n");
    printf("Equacao do segundo grau.\n");
    printf("Digite o valor do coeficiente 'a': ");
    scanf("%f", &a);
    printf("Digite o valor do coeficiente 'b': ");
    scanf("%f", &b);
    printf("Digite o valor do coeficiente 'c': ");
    scanf("%f", &c);
    delta = (b*b) - 4 * a * c;
    x1 = (-b + sqrt(delta))/(2 * a);
    x2 = (-b - sqrt(delta))/(2 * a);
    if (a == 0)
        printf("Nao fica equacao de segundo grau.\n");
    else {
        if (delta < 0)
            printf("Nao existe raiz.\n");
        else {
            if (delta == 0){
                printf("A raiz da equacao '%.2f*(x^2) + (%.2f)*b + %.2f = 0' fica %.2f\n", a, b, c, x1);
                printf("Raiz unica.\n");
            } else {
                if (delta > 0)
                    printf("As raizes da equacao '%.2f*(x^2) + (%.2f)*b + %.2f = 0' sao %.2f e %.2f\n", a, b, c, x1, x2);
            }
        }
    }
    system("pause");
    return 0;
}