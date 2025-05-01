/*8) Escreva um programa que, dada a idade de um nadador, classifique-0 em uma das seguintes categorias:
                                      [TABELA NO READ-ME DO GITHUB]                                    */

#include<stdio.h>
#include<stdlib.h>

int main(){
   int idade;
   printf("Digite a idade da pessoa:");
   scanf("%d", &idade);
   if (idade >= 5 && idade <= 7)
      printf("Categoria Infantil A\n");
   else {
      if (idade >= 8 && idade <= 10)
         printf("Categoria Infantil B\n");
      else {
         if (idade >= 11 && idade <= 13)
            printf("Categoria Juvenil A\n");
         else {
            if (idade >= 14 && idade <= 17)
               printf("Categoria Juvenil B\n");
            else {
               if (idade >= 18)
                  printf("Categoria Senior\n");
               else
                  printf("A idade minina para ser nadador(a): 5 anos.\n");
            }
         }
      }
   }
   system("pause");
   return 0;
}