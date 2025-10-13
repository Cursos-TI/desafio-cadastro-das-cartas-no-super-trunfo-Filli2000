#include <stdio.h>

int main(){

 //incio do jogo - introdução
 printf ("  Bem-vindo ao Super Trunfo 2000!\n Insira as informações solicitadas no prompt com a cidade Brasileira de sua escolha abaixo:\n");

     //Variaveis da Carta 01 - para armazenar as informações das cartas, sera usado posteriormente.
    char Estado1;
    char Nome1 [20], Codigo1 [4];
    int Populacao1, Turisticos1;
    float Area1, PIB1;

    //Variaveis da Carta 02 - para armazenar as informações das cartas, sera usado posteriormente.
    char Estado2;
    char Nome2 [20], Codigo2 [4];
    int Populacao2, Turisticos2;
    float Area2, PIB2;

//Variaveis da Carta 01 - para armazenar as informações das cartas, sera usado posteriormente.
  printf ("Qual o Estado da cidade escolhida? (Apenas uma letra de A até H)\n");
  scanf ("%c", &Estado1);

  printf ("Crie um código para a carta: (Letra do estado e um numero)\n");
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
 
 printf ("Estado: %c\n", Estado1);
 printf ("Cidade: %s\n", Nome1);
 printf ("Código: %s\n", Codigo1);
 printf ("População: %d\n", Populacao1);
 printf ("Atrações Turísticas: %d\n", Turisticos1);
 printf ("Área: %0.2f\n", Area1);
 printf ("Produto Interno Bruto (PIB): %0.2f\n", PIB1);
 printf ("Densidade Populacional: %0.2f\n", Populacao1/Area1);
 printf ("PIB per Capita: %0.2f\n", PIB1/Populacao1);

 //Segunda carta - comando "&" para mudar as informações contidas nas variaveis mencionadas.
 printf ("\n Agora vamos repetir o processo para a Segunda Carta!\n \n");

  printf ("Qual o Estado da cidade escolhida? (Apenas uma letra de A até H)\n");
  scanf ("%c", &Estado2);

  printf ("Crie um código para a carta: (Letra do estado e um numero)\n");
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
 
 printf ("Estado: %c\n", Estado2);
 printf ("Cidade: %s\n", Nome2);
 printf ("Código: %s\n", Codigo2);
 printf ("População: %d\n", Populacao2);
 printf ("Atrações Turísticas: %d\n", Turisticos2);
 printf ("Área: %0.2f\n", Area2);
 printf ("Produto Interno Bruto (PIB): %0.2f\n", PIB2);
 printf ("Densidade Populacional: %0.2f\n", Populacao2/Area2);
 printf ("PIB per Capita: %0.2f\n", PIB2/Populacao2);

  //Comparação entre as cartas
 printf ("\n Agora vamos comparar as cartas!\n");
    if (Populacao1 > Populacao2){
        printf ("A cidade %s tem uma população maior que a cidade %s\n", Nome1, Nome2);
    } else {
        printf ("A cidade %s tem uma população maior que a cidade %s\n", Nome2, Nome1);
    }
    if (Turisticos1 > Turisticos2){
        printf ("A cidade %s tem mais atrações turísticas que a cidade %s\n", Nome1, Nome2);
    } else {
        printf ("A cidade %s tem mais atrações turísticas que a cidade %s\n", Nome2, Nome1);
    }
    if (Area1 > Area2){
        printf ("A cidade %s tem uma área maior que a cidade %s\n", Nome1, Nome2);
    } else {
        printf ("A cidade %s tem uma área maior que a cidade %s\n", Nome2, Nome1);
    }
    if (PIB1 > PIB2){
        printf ("A cidade %s tem um PIB maior que a cidade %s\n", Nome1, Nome2);
    } else {
        printf ("A cidade %s tem um PIB maior que a cidade %s\n", Nome2, Nome1);
    }
    if ((Populacao1/Area1) > (Populacao2/Area2)){
        printf ("A cidade %s tem uma densidade populacional maior que a cidade %s\n", Nome1, Nome2);
    } else {
        printf ("A cidade %s tem uma densidade populacional maior que a cidade %s\n", Nome2, Nome1);
    }
    if ((PIB1/Populacao1) > (PIB2/Populacao2)){
        printf ("A cidade %s tem um PIB per capita maior que a cidade %s\n", Nome1, Nome2);
    } else {
        printf ("A cidade %s tem um PIB per capita maior que a cidade %s\n", Nome2, Nome1);
    }

 //Fim de jogo
 printf ("Obrigado por jogar!");



 return 0;
}