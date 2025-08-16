#include      <stdio.h>

int main()
{
//dados carta 1
 char estado_carta1 ='a';
 char codgo_da_carta1[20] ="";
 char nome_da_cidade_carta1[20] = "";
 int populacao_carta1= 0;
 float area_carta1 = (0.0);
 float pib_carta1 = (0.0);
 int pontos_turisticos_carta1 = 0;
 
 //dados carta 2
 char estado_carta2 ='b';
 char codgo_da_carta2[20] ="";
 char nome_da_cidade_carta2[20] = "";
 int populacao_carta2= 0;
 float area_carta2 = (0.0);
 float pib_carta2 = (0.0);
 int pontos_turisticos_carta2 = 0;

 
 //entrada de dados:
 
 //entrada de dados da carta 1
 
 printf("carta 1\n");
 printf("escolha uma letra de 'A' a 'H':");
 scanf(" %c", &estado_carta1);
 
 printf("escolha um numero de 01 a 04:");
 scanf("%s", codgo_da_carta1);
 
 printf("escolha o nome da cidade:");
 scanf("%s", nome_da_cidade_carta1);
 
 printf("indique a populacao:");
 scanf("%d", &populacao_carta1);
 
 printf("indique a area em km:");
 scanf ("%f", &area_carta1);

 printf("indique o pib:");
 scanf ("%f", &pib_carta1);
 
 printf("indique os pontos turisticos: ");
 scanf("%d", &pontos_turisticos_carta1);
 
 

//entrada de dados da carta 2
 
 printf("carta 2 \n");
 
 printf("escolha uma letra de 'A' a 'H':");
 scanf(" %c", &estado_carta2);
 
 printf("escolha um numero de 01 a 04:");
 scanf("%s", codgo_da_carta2);
 
 printf("escolha o nome da cidade:");
 scanf("%s", nome_da_cidade_carta2);
 
 printf("indique a populacao:");
 scanf("%d", &populacao_carta2);
 
 printf("indique area em km:");
 scanf ("%f", &area_carta2);

 printf("indique o pib:");
 scanf (" %f", &pib_carta2);
 
 printf("indique os pontos turisticos: ");
 scanf("%d", &pontos_turisticos_carta2);
 
 
 //saida de dados.
 
 //exibe os dados da carta 1
 printf("carta1\n");
 printf("estado: %c \n", estado_carta1);
 printf("codgo da carta: %s \n", codgo_da_carta1);
 printf("nome da cidade: %s \n", nome_da_cidade_carta1);
 printf("populacao: %d \n", populacao_carta1);
 printf("area em km: %.2f \n", area_carta1);
 printf("pib: %.2f \n", pib_carta1);
 printf("pontos turisticos: %d \n", pontos_turisticos_carta1);
 
 //exibe os dados da carta 2
 printf("carta2\n");
 printf("estado: %c\n", estado_carta2);
 printf("codgo da carta: %s \n", codgo_da_carta2);
 printf("nome da cidade: %s \n", nome_da_cidade_carta2);
 printf("populacao: %d \n", populacao_carta2);
 printf("area em km: %.2f \n", area_carta2);
 printf("pib: %.2f \n", pib_carta2);
 printf("pontos turisticos: %d \n", pontos_turisticos_carta2);
 return 0;

}
