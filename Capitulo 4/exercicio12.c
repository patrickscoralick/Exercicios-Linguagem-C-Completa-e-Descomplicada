/*12) Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o
dia da semana correspondente a esse número. Isto é, domingo, se 1, segunda-feira, se 2, e assim
por diante.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
   unsigned short int entrada;
   printf("---DIA DA SEMANA---\n");
   printf("1 - Domingo\n");
   printf("2 - Segunda-feira\n");
   printf("3 - Terca-feira\n");
   printf("4 - Quarta-feira\n");
   printf("5 - Quinta-feira\n");
   printf("6 - Sexta-feira\n");
   printf("7 - Sabado\n");
   printf("Digite um numero (1 a 7): ");
   scanf("%d", &entrada);
   switch(entrada){
      case 1:
         printf("Domingo\n");
         break;
      case 2:
         printf("Segunda-feira\n");
         break;
      case 3:
         printf("Terca-feira\n");
         break;
      case 4:
         printf("Quarta-feira\n");
         break;
      case 5:
         printf("Quinta-feira\n");
         break;
      case 6:
         printf("Sexta-feira\n");
         break;
      case 7:
         printf("Sabado\n");
         break;
      default:
         printf("Entrada invalida! Tente novamente!\n");
   }
   system("pause");
   return 0;
}