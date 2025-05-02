/*11) Faça um programa que informe o mês de acordo com o número digitado pelo usuário.Exemplo:
Entrada = 4. Saída = Abril.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
   unsigned short int entrada;
   printf("---MES---\n");
   printf("1 - Janeiro\n2 - Fevereiro\n3 - Marco\n");
   printf("4 - Abril\n5 - Maio\n6 - Junho\n");
   printf("7 - Julho\n8 - Agosto\n9 - Setembro\n");
   printf("10 - Outubro\n11 - Novembro\n12 - Dezembro\n");
   printf("Digite um numero (1 a 12): ");
   scanf("%d", &entrada);
   switch(entrada){
      case 1:
         printf("Janeiro\n");
         break;
      case 2:
         printf("Fevereiro\n");
         break;
      case 3:
         printf("Marco\n");
         break;
      case 4:
         printf("Abril\n");
         break;
      case 5:
         printf("Maio\n");
         break;
      case 6:
         printf("Junho\n");
         break;
      case 7:
         printf("Julho\n");
         break;
      case 8:
         printf("Agosto\n");
         break;
      case 9:
         printf("Setembro\n");
         break;
      case 10:
         printf("Outubro\n");
         break;
      case 11:
         printf("Novembro\n");
         break;
      case 12:
         printf("Dezembro\n");
         break;
      default:
         printf("Entrada invalida! Tente novamente!\n");
   }
   system("pause");
   return 0;
}