/*14) Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou 5, mas
não simultaneamente pelos dois.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
   int num;
   printf("Digite um numero inteiro: ");
   scanf("%d", &num);
   /*Fiquei na dúvida se era para especificar quando fosse exclusivamente divisivel por 3 e quando 
   fosse exclusivamente divisivel por 5. Deixei generico pois acredito que o cerne do enunciado foi cumprido.*/
   if (num%3 == 0 || num%5 == 0){
      if (num%3 == 0 && num%5 == 0)
         return 0; //Quase como um 'break' do switch-case.
      else
         printf("Esse numero e divisivel por 3 ou 5, mas nao simultaneamente pelos dois.\n");
   } else
      printf("!!! Esse numero nao e divisivel nem por 3 e nem por 5 !!!\n");
   system("pause");
   return 0;
}