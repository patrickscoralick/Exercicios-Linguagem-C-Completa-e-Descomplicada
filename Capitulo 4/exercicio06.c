/*6) Faça um programa que receba a altura e o sexo biológico de uma pessoa e calcule e mostre seu peso ideal,
 utilizando as seguintes fórmulas (em que "h" corresponde à altura):
      ◻ Homens: (72,7 * h) - 58
      ◻ Mulheres: (62,1 * h) - 44,7*/

#include<stdio.h>
#include<stdlib.h>

int main(){
   float h;
   char bio;
   printf("Digite sua altura (em metros): ");
   scanf("%f", &h);
   printf("Digite 'M' para Mulher ou 'H' para Homem: ");
   /*Por questão do 'buffer de entrada' ao apertar a tecla ENTER no scanf de altura, 
   foi preciso adicionar um espaço antes do %c. Uma outra possibilidade seria utilizar a expressão 'bio = getchar();'
   adicionando-a antes da estrutura de pergunta e resposta da altura (Juntamente com a sua estrutura de printf) */
   scanf(" %c", &bio);
   if (bio == 'M')
      printf("Peso ideal (Kg): %.2f\n", (62.1 * h) - 44.7); //'%.2f' Exibe o valor com duas casa decimais
   else {
      if  (bio == 'H')
         printf("Peso ideal (Kg): %.2f\n", (72.7 * h) - 58);
      else
         printf("Dados nao digitados corretamente! Tente novamente.\n");
   }
   system("pause");
   return 0;
}