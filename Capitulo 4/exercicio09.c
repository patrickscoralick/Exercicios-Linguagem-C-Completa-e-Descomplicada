/*9) Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a seguir,
verifique e mostre qual a classificação dessa pessoa.
                                 [TABELA NO READ-ME DO GITHUB]                                  */

#include<stdio.h>
#include<stdlib.h>

int main(){
   float altura, peso;
   char classificacao;
   printf("Digite sua altura (m): ");
   scanf("%f", &altura);
   printf("Digite seu peso (Kg): ");
   scanf("%f", &peso);
   if (peso <= 60){
      if (altura < 1.20){classificacao = 'A';}
      if (altura >= 1.20 && altura <= 1.70){classificacao = 'B';}
      if (altura > 1.70){classificacao = 'C';}
   } else {
      if (peso > 60 && peso <= 90){
         if (altura < 1.20){classificacao = 'D';}
         if (altura >= 1.20 && altura <= 1.70){classificacao = 'E';}
         if (altura > 1.70){classificacao = 'F';}
      } else {
         if (peso > 90){
            if (altura < 1.20){classificacao = 'G';}
            if (altura >= 1.20 && altura <= 1.70){classificacao = 'H';}
            if (altura > 1.70){classificacao = 'I';}
         }
      }
   }
   printf("Classificacao: %c\n", classificacao);
   system("pause");
   return 0;
}