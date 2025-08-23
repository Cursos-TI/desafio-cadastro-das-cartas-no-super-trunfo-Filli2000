#include <stdio.h>

/* Essa build é apenas para testar novos comandos e ajustar o código conforme necessario*/

int main(){

 //incio do jogo - introdução
 printf ("  Bem-vindo ao Super Trunfo 2000!\n Insira as informações solicitadas no prompt com a cidade Brasileira de sua escolha abaixo:\n");

     //Variaveis da Carta 01 - para armazenar as informações das cartas, sera usado posteriormente.
    char Estado1, Nome1, Codigo1;
    int Populacao1, Turisticos1;
    float Area1, PIB1;

 //Primeira carta - comando "&" para mudar as informações contidas nas variaveis mencionadas.
  printf ("Qual o Estado da cidade escolhida? (Sem espaços)\n");
  scanf ("%s", &Estado1);

  printf ("Crie um código para a carta:\n");
  scanf ("%s", &Codigo1);

  printf ("Nome da cidade:\n");
  scanf ("%s", &Nome1);

  printf ("População:\n");
  scanf ("%d", &Populacao1);

  printf ("Número de atrações turísticas:\n");
  scanf ("%d", &Turisticos1);

  printf ("Área em KM²:\n");
  scanf ("%f", &Area1);

  printf ("PIB:\n");
  scanf ("%f", &PIB1);

 //Primeira carta - resultado - referencia as informações das variaveis da carta, definida pela sessão a cima
 printf ("\n Certo! Aqui estão as informações de sua primeira carta:\n");
 
 printf ("Estado: %s\n", Estado1);
 printf ("Cidade: %s\n", Nome1);
 printf ("Código: %s\n", Codigo1);
 printf ("População: %d\n", Populacao1);
 printf ("Atrações Turísticas: %d\n", Turisticos1);
 printf ("Área: %f\n", Area1);
 printf ("Produto Interno Bruto (PIB): %f\n", PIB1);

    //Variaveis da Carta 02 - para armazenar as informações das cartas, sera usado posteriormente.
    char Estado2, Nome2, Codigo2;
    int Populacao2, Turisticos2;
    float Area2, PIB2;


 //Segunda carta - comando "&" para mudar as informações contidas nas variaveis mencionadas.
 printf ("\n Agora vamos repetir o processo para a Segunda Carta!\n");

  printf ("Qual o Estado da cidade escolhida? (Sem espaços)\n");
  scanf ("%s", &Estado2);

  printf ("Crie um código para a carta:\n");
  scanf ("%s", &Codigo2);

  printf ("Nome da cidade:\n");
  scanf ("%s", &Nome2);

  printf ("População:\n");
  scanf ("%d", &Populacao2);

  printf ("Número de atrações turísticas:\n");
  scanf ("%d", &Turisticos2);

  printf ("Área em KM²:\n");
  scanf ("%f", &Area2);
  
  printf ("PIB:\n");
  scanf ("%f", &PIB2);

  //Segunda carta - resultado - referencia as informações das variaveis da carta, definida pela sessão a cima
 printf ("\n Certo! Aqui estão as informações de sua segunda carta:\n");
 
 printf ("Estado: %s\n", Estado2);
 printf ("Cidade: %s\n", Nome2);
 printf ("Código: %s\n", Codigo2);
 printf ("População: %d\n", Populacao2);
 printf ("Atrações Turísticas: %d\n", Turisticos2);
 printf ("Área: %f\n", Area2);
 printf ("Produto Interno Bruto (PIB): %f\n", PIB2);

 //Fim de jogo
 printf ("Obrigado por jogar!");

 return 0;



}