/*10) A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo
 que:
 i. O primeiro ganhador receberá 46% do total.
 ii. O segundo receberá 32% do total.
 iii. O terceiro receberá o restante.
 
 Calcule e imprima a quantia recebida por cada um dos ganhadores.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    const int premio = 780000;
    int primeiro, segundo, terceiro;
    primeiro = (780000 * 0.46);
    printf("Quantia do Primeiro Ganhador: %d\n", primeiro);
    segundo = (780000 * 0.32);
    printf("Quantia do Segundo Ganhador: %d\n", segundo);
    terceiro = premio - primeiro - segundo;
    printf("Quantia do Terceiro Ganhador: %d\n", terceiro);
    system("pause");
    return 0;
}