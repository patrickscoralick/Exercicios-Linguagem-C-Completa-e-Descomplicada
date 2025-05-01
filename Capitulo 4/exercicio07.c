/*7) Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma
taxa diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o
valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido
do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará
uma mensagem de erro.
                              [TABELA NO READ-ME DO GITHUB]                                  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h> //Utilizando essa biblioteca para o strcmp (Comparar strings)

int main(){
   float valorProd;
   char destinoProd[3]; //String de tamanho 3 para restringir a sigla + terminador nulo \0!
   printf("Digite o valor do produto (R$): ");
   scanf("%f", &valorProd);
   printf("Digite a sigla do estado de destino do Produto (MG, SP, RJ ou MS):");
   scanf("%s", destinoProd); //Não é necessário utilizar o '&' para armazenar strings
   if (strcmp(destinoProd, "MG") == 0) // '== 0' serve para validar que o 'destinoProd' (uma string) é idêntica a 'MG'.
      printf("Preco final do Produto (c/ impostos): R$%.2f\n", valorProd + (valorProd * 0.07));
   else {
      if (strcmp(destinoProd, "SP") == 0)
         printf("Preco final do Produto (c/ impostos): R$%.2f\n", valorProd + (valorProd * 0.12));
      else {
         if (strcmp(destinoProd, "RJ") == 0)
            printf("Preco final do Produto (c/ impostos): R$%.2f\n", valorProd + (valorProd * 0.15));
         else {
            if (strcmp(destinoProd, "MS") == 0)
               printf("Preco final do Produto (c/ impostos): R$%.2f\n", valorProd + (valorProd * 0.08));
            else
               printf("ERRO: Destino invalido ou digitado incorretamente!\n");
         }
      }
   }
   system("pause");
   return 0;
}