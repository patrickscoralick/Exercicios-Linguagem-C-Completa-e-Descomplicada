/*13) Faça um  programa que mostre ao usuário um menu com quatro opções de operações matemáticas
(as operações básicas, por exemplo). O usuário escolhe uma das opções, e o seu programa pede
dois valores numéricos e realiza as operação, mostrando o resultado.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
   unsigned short int entrada;
   float x,y;
   printf("---OPERACOES MATEMATICAS---\n");
   printf("1 - Soma(+)\n");
   printf("2 - Subtracao(-)\n");
   printf("3 - Multiplicacao(*)\n");
   printf("4 - Divisao(/)\n");
   printf("Escolha uma operacao acima (1 a 4): ");
   scanf("%d", &entrada);
   printf("Digite o primeiro valor numerico: ");
   scanf("%f", &x);
   printf("Digite o segundo valor numerico: ");
   scanf("%f", &y);
   switch(entrada){
      case 1:
         printf("Soma de %.2f e %.2f: %.2f\n", x, y, x+y);
         break;
      case 2:
         printf("Subtracao de %.2f e %.2f: %.2f\n", x, y, x-y);
         break;
      case 3:
         printf("Multiplicacao de %.2f e %.2f: %.2f\n", x, y, x*y);
         break;
      case 4:
         printf("Divisao de %.2f e %.2f: %.2f\n", x, y, x/y);
         break;
      default:
         printf("Entradas invalidas! Tente novamente!\n");
   }
   system("pause");
   return 0;
}