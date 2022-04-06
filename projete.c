#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

#define ACABADO 100;
#define MINIMO 50;
#define MAXIMA 150;
#define PRIMA (100);



int main(void){

setlocale(LC_ALL, "Portuguese");

 printf("\n\t\t\t\t\t\t  Engenharia de Computação \n\n\t\t\t\t\tPROJETO INTEGRADOR PARA ENG. DE COMPUTACAO IV\n\n\n");
sleep (4);
system ("cls");

printf("\n\n\t\t\t\t\t\t Protótipo MRP \n\t\t\t\t\t Suporte a tomada de decisões\n\n\n");

sleep (4);
system ("cls");

float x=0, y=0, resultado=0;
int vendas = 0;
int op;

do {

     printf("\t\t\tMENU MRP\n\n\t1 - CONSULTA MATERIAL ACABADO\n\t2 - PARÂMETROS DE ESTOQUE MÁXIMO\n\t3 - PARÂMETROS DE ESTOQUE MINIMO\n\t4 - SALDO MATÉRIA PRIMA\n\t5 - INPUT VENDAS");
     printf("\n\n\tEscolha a sua opção?\n\t\t");
     scanf("%i", & op);

     switch(op){
          case 1:
                resultado = ACABADO;
                break;
          case 2:
               resultado = MAXIMA
             break;
          case 3:
                resultado = MINIMO;
                break;
          case 4:
                resultado = PRIMA;
                break;
          case 5:
                printf("\nENTRE COM UM VALOR PARA VENDA:\n\t\t");
                scanf("%i", & vendas);
                int x = PRIMA;
                int y = vendas;
                resultado = x-y;
                if (resultado < 50){
                  printf("\nvenda supera carga minima de estoque, geradas ordens de compra e produção");
     }else {
        printf("\nestoque supre venda, sem necessidades de novas ordens de compras e novas ordens de produção.");
      }
                break;

          default:
                printf("\n Digite uma opção valida");
                break;
            }

         printf("\n\n\t O estoque projetado é: %0.2f ", resultado);
         sleep (15);
         system ("cls");
        printf("\n\n\t Para voltar ao menu principal digite 1, Encerrar 2: ");
        scanf("%i", &op);
system ("cls");
}
while(op==1);
}
