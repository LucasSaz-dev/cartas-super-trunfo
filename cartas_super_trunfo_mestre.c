#include      <stdio.h>

int main()
{
//dados carta 1
 char estado_carta1 ='a';
 char codgo_da_carta1[20] ="";
 char nome_da_cidade_carta1[20] = "";
 long int populacao_carta1= 0;
 float area_carta1 = (0.0);
 float pib_carta1 = (0.0);
 int pontos_turisticos_carta1 = 0;
 float densidade_populacional1 = (0.0);
 float pib_percapta1 = (0.0);
 float super_poder_carta1 = (0.0);

//dados carta 2
 char estado_carta2 ='b';
 char codgo_da_carta2[20] ="";
 char nome_da_cidade_carta2[20] = "";
 long int populacao_carta2= 0;
 float area_carta2 = (0.0);
 float pib_carta2 = (0.0);
 int pontos_turisticos_carta2 = 0;
 float densidade_populacional2 = (0.0);
 float pib_percapta2 = (0.0);
 float super_poder_carta2 = (0.0);
 
 //entrada de dados:
 
 //entrada de dados da carta 1
 
 printf("carta 1\n");
 printf("escolha uma letra de 'A' a 'H':");
 scanf(" %c", &estado_carta1);
 
 printf("escolha um numero de 1 a 4:");
 scanf("%s", codgo_da_carta1);
 
 printf("escolha o nome da cidade:");
 scanf("%s", nome_da_cidade_carta1);
 
 printf("indique a populacao:");
 scanf("%ld", &populacao_carta1);

 printf("indique a area em km:");
 scanf ("%f", &area_carta1);

 printf("indique o pib:");
 scanf ("%f", &pib_carta1);
 
 printf("indique os pontos turisticos: ");
 scanf("%d", &pontos_turisticos_carta1);
 
 

// entrada de dados da carta 2
 printf("carta 2 \n");
 printf("escolha uma letra de 'A' a 'H':");
 scanf(" %c", &estado_carta2);
 
 printf("escolha um numero de 1 a 4:");
 scanf("%s", codgo_da_carta2);
 
 printf("escolha o nome da cidade:");
 scanf("%s", nome_da_cidade_carta2);
 
 printf("indique a populacao:");
 scanf("%ld", &populacao_carta2);
 
 printf("indique area em km:");
 scanf ("%f", &area_carta2);

 printf("indique o pib:");
 scanf (" %f", &pib_carta2);
 
 printf("indique os pontos turisticos: ");
 scanf("%d", &pontos_turisticos_carta2);
 
 //processamento de dados
 
 densidade_populacional1 = populacao_carta1 / area_carta1;
 densidade_populacional2 = populacao_carta2 / area_carta2;
 pib_percapta1 = pib_carta1 / populacao_carta1;
 pib_percapta2 = pib_carta2 / populacao_carta2;
 super_poder_carta1 = populacao_carta1 + area_carta1 + pib_carta1 + pontos_turisticos_carta1 + pib_percapta1 + (1 / densidade_populacional1);
 super_poder_carta2 = populacao_carta2 + area_carta2 + pib_carta2 + pontos_turisticos_carta2 + pib_percapta2 + (1 / densidade_populacional2);

 //saida de dados.
 
 //exibe os dados da carta 1
 printf("carta1\n");
 printf("estado: %c \n", estado_carta1);
 printf("codgo da carta: %s \n", codgo_da_carta1);
 printf("nome da cidade: %s \n", nome_da_cidade_carta1);
 printf("populacao: %ld \n", populacao_carta1);
 printf("area em km: %.2f \n", area_carta1);
 printf("pib: %.2f \n", pib_carta1);
 printf("pontos turisticos: %d \n", pontos_turisticos_carta1);
 printf("densidade populacional: %.2f \n", densidade_populacional1);//divide a população pela area
 printf("pib percapta: %.2f\n", pib_percapta1); //divide o pib pela população
 printf("super poder:%.2f\n" , super_poder_carta1);//soma todos os atributos numericos
 
 //exibe os dados da carta 2
 printf("carta2\n");
 printf("estado: %c\n", estado_carta2);
 printf("codgo da carta: %s \n", codgo_da_carta2);
 printf("nome da cidade: %s \n", nome_da_cidade_carta2);
 printf("populacao: %ld \n", populacao_carta2);
 printf("area em km: %.2f \n", area_carta2);
 printf("pib: %.2f \n", pib_carta2);
 printf("pontos turisticos: %d \n", pontos_turisticos_carta2);
 printf("densidade populacional: %.2f \n", densidade_populacional2);//divide a população pela area
 printf("pib percapta: %.2f\n", pib_percapta2);//divide o pib pela população


 //comparação de cartas


 printf("populacao: Carta %d venceu (%d)\n",
       (populacao_carta1 > populacao_carta2) ? 1 : 2, // aqui definimos um numero para populaçãp 1 e 2
       (populacao_carta1 > populacao_carta2) ? 1 : 0); // aqui comparamos e pontuamos a população vencedora

  printf("area: Carta %d venceu (%d)\n",
       (area_carta1 > area_carta2) ? 1 : 2,
       (area_carta1 > area_carta2) ? 1 : 0);

printf("PIB: Carta %d venceu (%d)\n",
       (pib_carta1 > pib_carta2) ? 1 : 2,
       (pib_carta1 > pib_carta2) ? 1 : 0);

printf("pontos Turisticos: Carta %d venceu (%d)\n",
       (pontos_turisticos_carta1 > pontos_turisticos_carta2) ? 1 : 2,
       (pontos_turisticos_carta1 > pontos_turisticos_carta2) ? 1 : 0);

printf("densidade Populacional: Carta %d venceu (%d)\n",
       (densidade_populacional1 < densidade_populacional2) ? 1 : 2,
       (densidade_populacional1 < densidade_populacional2) ? 1 : 0);

printf("pib per Capita: Carta %d venceu (%d)\n",
       (pib_percapta1 > pib_percapta2) ? 1 : 2,
       (pib_percapta1 > pib_percapta2) ? 1 : 0);

printf("super Poder: Carta %d venceu (%d)\n",
       (super_poder_carta1 > super_poder_carta2) ? 1 : 2,
       (super_poder_carta1 > super_poder_carta2) ? 1 : 0);


 return 0;
}