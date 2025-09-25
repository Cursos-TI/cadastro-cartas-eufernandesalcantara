#include <stdio.h>
#include <locale.h> // biblioteca para poder usar acentos do português

// Desafio Super Trunfo - Países
// Tema 3 - desafio final
// Objetivo: Desafio: nível mestre

int main() {
  // cada carta tem seu próprio conjunto de variáveis 
  // carta 1

  // Área para definição das variáveis para armazenar as propriedades das cidades

char estado_letra1; 
char codigo_carta1[4];
char nome_cidade1[100];
unsigned long int populacao1;
float area1;
float pib1;
int pontos_turisticos1;
float super_poder1; //nova variavel para super poder

// novas variaveis para calculo nivel aventureiro carta 1

float densidade_populacional1;
float pib_per_capita1;

// carta2

// Área para definição das variáveis para armazenar as propriedades das cidades

char estado_letra2;
char codigo_carta2[4];
char nome_cidade2[100];
unsigned long int populacao2;
float area2;
float pib2;
int pontos_turisticos2;

// novas variaveis para calculo nivel aventureiro carta 2

float densidade_populacional2;
float pib_per_capita2;
float super_poder2; //nova variavel para super poder


// Área para entrada de dados
printf("---- Desafio Super Trunfo ----\n");
printf("----       Bem vindo      ----\n");
printf("----  Nível Mestre   ----\n");
printf("---- Cadastro da Carta 1  ----\n");

// pede para digitar uma letra
printf("Digite uma Letra de 'A' a 'H': ");
// o espaço antes do %c é importante para consumir o 'enter' de leituras anteriores
scanf(" %c", &estado_letra1);

// pede para digitar um número
printf("Digite um número de 01 a 04 (ex: A01, H04): ");
scanf("%s", codigo_carta1);

// pede para digitar o nome da cidade
printf("Digite o nome da Cidade: ");
scanf(" %[^\n]", nome_cidade1);

// pede para digitar o número de habitantes
printf("Digite o número de habitantes da cidade: ");
scanf("%lu", &populacao1);

// pede para digitar a área em km²
printf("Digite a Área da cidade (em KM²): ");
scanf("%f", &area1);

// pede para digitar o PIB da cidade
printf("Digite o PIB da cidade (em bilhões): ");
scanf("%f" , &pib1);

// pede para digitar o número de pontos turisticos
printf("Digite o número de pontos turisticos: ");
scanf("%d", &pontos_turisticos1);

// sequência de entrada para Carta 2

printf("---- Cadastro da Carta 2  ----\n");

// pede para digitar uma letra
printf("Digite uma Letra de 'A' a 'H': ");
// o espaço antes do %c é importante para consumir o 'enter' de leituras anteriores
scanf(" %c", &estado_letra2);

// pede para digitar um número
printf("Digite um número de 01 a 04 (ex: A01, H04): "); 
scanf("%s", codigo_carta2);

// pede para digitar o nome da cidade
printf("Digite o nome da Cidade: ");
scanf(" %[^\n]", nome_cidade2);

// pede para digitar o número de habitantes
printf("Digite o número de habitantes da cidade: ");
scanf("%lu", &populacao2);

// pede para digitar a área em km²
printf("Digite a Área da cidade (em KM²): ");
scanf("%f", &area2);

// pede para digitar o PIB da cidade
printf("Digite o PIB da cidade (em bilhões): ");
scanf("%f" , &pib2);

// pede para digitar o número de pontos turisticos
printf("Digite o número de pontos turisticos: ");
scanf("%d", &pontos_turisticos2);

// Área de cálculos --- //

// calculo para carta 1
densidade_populacional1 = (float) populacao1 / area1;
// multiplica o PIB por 1 bilhão para ter o valor real antes de vidivir pela população
pib_per_capita1 = (pib1 * 1000000000) / populacao1;
// calculo do super poder (convertendo tipos para float para a soma)
super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + (float)pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);


// calculo para carta 2
densidade_populacional2 = (float) populacao2 / area2;
// multiplica o PIB por 2 bilhão para ter o valor real antes de vidivir pela população
pib_per_capita2 = (pib2 * 1000000000) / populacao2;
super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + (float)pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);

//Confronto das cartas

int venceu_populacao = populacao1 > populacao2;
int venceu_area = area1 > area2;
int venceu_pib = pib1 > pib2;
int venceu_pontos = pontos_turisticos1 > pontos_turisticos2;
int venceu_densidade = densidade_populacional1 < densidade_populacional2;
int venceu_pib_per_capita = pib_per_capita1 > pib_per_capita2;
int venceu_super_poder = super_poder1 > super_poder2;

  // Área para exibição dos dados da cidade

  // dados da carta 1
  printf("\nCarta 1: \n"); // exibe a carta 1
  printf("Código do estado: %c\n", estado_letra1);// mostra a letra da carta 1
  printf("Número da carta: %s\n", codigo_carta1);// mostra o código da carta 1
  printf("Nome da cidade: %s\n", nome_cidade1);// mostra o nome da cidade 1
  printf("População: %lu\n", populacao1);// mostra a quantidade da população 1
  printf("Área: %.2f Km²\n ", area1); // mostra a área 1  em km² e %.2f formata para exibir 2 casas decimais
  printf("PIB: %.2f bilhões de reais\n", pib1); // mostra o PIB 1
  printf("Número de Pontos Turísticos: %d\n ", pontos_turisticos1); // mostra a quantidade de pontos turisticos 1

  // exibição dos novos dados calculados nivel aventureiro
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

  // super poder
  printf("Super Poder:%.2f\n", super_poder1);

  // dados da carta 2
  printf("\nCarta 2: \n"); // exibe a carta 2
  printf("Código do estado: %c\n", estado_letra2);// mostra a letra da carta 2
  printf("Número da carta: %s\n", codigo_carta2);// mostra o código da carta 2
  printf("Nome da cidade: %s\n", nome_cidade2);// mostra o nome da cidade 2
  printf("População: %lu\n", populacao2);// mostra a quantidade da população 2
  printf("Área: %.2f Km²\n ", area2); // mostra a área em km² 2 e %.2f formata para exibir 2 casas decimais
  printf("PIB: %.2f bilhões de reais\n", pib2); // mostra o PIB 2 
  printf("Número de Pontos Turísticos: %d\n ", pontos_turisticos2); // mostra a quantidade de pontos turisticos 2
   // exibição dos novos dados calculados nivel aventureiro
  printf("Densidade Populaciona2: %.2f hab/km²\n", densidade_populacional1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
  printf("Super Poder:%.2f\n", super_poder2);

// Confronto final

printf("---- BATALHA DO SÉCULO ----");
printf(" ---- final----");
// Exibe o resultado das comparações
printf("População: Carta %d venceu (%d)\n", (venceu_populacao ? 1 : 2), venceu_populacao);
printf("Área: Carta %d venceu (%d)\n", (venceu_area ? 1 : 2), venceu_area);
printf("PIB: Carta %d venceu (%d)\n", (venceu_pib ? 1 : 2), venceu_pib);
printf("Pontos Turísticos: Carta %d venceu (%d)\n", (venceu_pontos ? 1 : 2), venceu_pontos);
printf("Densidade Populacional: Carta %d venceu (%d)\n", (venceu_densidade ? 1 : 2), venceu_densidade);
printf("PIB per Capita: Carta %d venceu (%d)\n", (venceu_pib_per_capita ? 1 : 2), venceu_pib_per_capita);
printf("Super Poder: Carta %d venceu (%d)\n", (venceu_super_poder ? 1 : 2), venceu_super_poder);

return 0; // Indica que o progama terminou com sucesso
} 
