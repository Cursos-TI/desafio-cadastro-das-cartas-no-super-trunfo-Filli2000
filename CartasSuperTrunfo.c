#include <stdio.h>

int main(){

    //Variaveis da Carta 01
    char Estado1[20];
    char Código1[3];
    char Nome1[20];
    int População1;
    int Turisticos1;
    float Area1;
    float PIB1;
    
    //Variaveis da Carta 02
    char Estado2[20];
    char Código2[3];
    char Nome2[20];
    int População2;
    int Turisticos2;
    float Area2;
    float PIB2;

//incio do jogo - introdução
 printf ("  Bem-vindo ao Super Trunfo 2000!\n Insira as informações solicitadas no prompt com a cidade Brasileira de sua escolha abaixo:\n");

 //Primeira carta
  printf ("Qual o Estado da cidade escolhida? (Use _ em vez de Espaços)\n");
  scanf ("%s", &Estado1);

  printf ("Crie um código para a carta:\n");
  scanf ("%s", &Código1);

  printf ("Nome da cidade:\n");
  scanf ("%s", &Nome1);
 
  printf ("População:\n");
  scanf ("%d", &População1);

  printf ("Número de atrações turísticas:\n");
  scanf ("%d", &Turisticos1);

  printf ("Área em KM²:\n");
  scanf ("%f", &Area1);

  printf ("PIB:\n");
  scanf ("%f", &PIB1);

 //Primeira carta - resultado
 printf ("\n Certo! Aqui estão as informações de sua primeira carta:\n");
 
 printf ("Estado: %s\n", Estado1);  //falha
 printf ("Cidade: %s\n", Nome1);
 printf ("Código: %s\n", Código1);  //falha
 printf ("População: %d\n", População1);
 printf ("Atrações Turísticas: %d\n", Turisticos1);
 printf ("Área: %0.4f\n", Area1);
 printf ("Produto Interno Bruto (PIB): %f\n", PIB1);


 return 0;

}
