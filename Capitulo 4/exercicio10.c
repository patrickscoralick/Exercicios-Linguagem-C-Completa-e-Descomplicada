/*10) Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na
tabela a seguir:
                            [TABELA NO READ-ME DO GITHUB]                                    */

#include<stdio.h>
#include<stdlib.h>
#include<math.h> //Radiciação, potenciação. etc

int main(){
   unsigned int x, y, z, num;
   float media;
   printf("---PROGRAMA ACHE A MEDIA---\n");
   printf("A partir da entrada de 3 numeros inteiros e positivos, \nache suas medias (Geometrica, Ponderada, Harmonica e Aritmetica).\n");
   printf("Digite o primeiro numero: ");
   scanf("%d", &x);
   printf("Digite o segundo numero: ");
   scanf("%d", &y);
   printf("Digite o terceiro numero: ");
   scanf("%d", &z);
   printf("---MEDIAS---\n");
   printf("1 - Media Geometrica\n");
   printf("2 - Media Ponderada\n");
   printf("3 - Media Harmonica\n");
   printf("4 - Media Aritmetica\n");
   printf("Digite a sua escolha: ");
   scanf("%d", &num);
   switch(num){
      case 1:
         media = cbrt((float)(x*y*z)); //'typecast' para float antes de converter p/ raiz cúbica 'cbrt();'.
         printf("A media geometrica de %d, %d e %d = %.2f\n", x, y, z, media);
         break;
      case 2:
         media = (x+(2* y)+(3*z))/6.0;
         printf("A media Ponderada de %d, %d e %d = %.2f\n", x, y, z, media);
         break;
      case 3:
         media = 3.0/((1.0/x)+(1.0/y)+(1.0/z));
         printf("A media Harmonica de %d, %d e %d = %.2f\n", x, y, z, media);
         break;
      case 4:
         media = (x + y + z)/3.0;
         printf("A media Aritmetica de %d, %d e %d = %.2f\n", x, y, z, media);
         break;
      default:
         printf("ERRO: Escolha ou valores foram digitados incorretamente!\n");
   }
   system("pause");
   return 0;
}