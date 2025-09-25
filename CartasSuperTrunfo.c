#include <stdio.h>
#include <locale.h> // biblioteca para poder usar acentos do português

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // cada carta tem seu próprio conjunto de variáveis 
  // carta 1

  // Área para definição das variáveis para armazenar as propriedades das cidades

char estadoLetra1;
char codigo1[5];
char nomeCidade1[100];
int populacao1;
float area1;
float pontosTuristicos1;

// carta2

// Área para definição das variáveis para armazenar as propriedades das cidades

char estadoLetra2;
char codigo2[5];
char nomeCidade2[100];
int populacao2;
float area2;
float pontosTuristicos2;

  // Área para entrada de dados

printf (" --- Cadastro da Carta 1 ---\n");

printf("Digite uma Letra de 'A' a 'H' ");
scanf(" %c", &estadoLetra1);

printf("Digite um número de 01 a 04 \n (ex: A01, H04) ");
scanf("%c", &codigo1);

printf("Digite o nome da Cidade: ");


printf("Digite a da cidade população");
scanf("%c", &populacao1);

printf("Digite a quantidade de pontos turisticos");
scanf("%c", &pontosTuristicos1);

printf("Digite a Área da cidade (em KM²): ");
scanf()




  // Área para exibição dos dados da cidade

return 0;
} 
