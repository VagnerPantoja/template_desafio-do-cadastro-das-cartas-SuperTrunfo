#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    // Variaveis para a carta 01 
    char estado_1, codigocarta_1[3], nomedacidade_1[50];
    int populacao_1, pontoturistico_1;
    float area_1, pib_1;

    // Variaveis para a carta 02
    char estado_2, codigocarta_2[3], nomedacidade_2[50];
    int populacao_2, pontoturistico_2;
    float area_2, pib_2;
  // Área para entrada de dados
    // Código pro usuário colocar os dados desejados da carta 01
    printf("Digite os dados da carta 01 \n");
    printf("Digite o Estado desejado de 'A' a 'H': ");
    scanf(" %c", &estado_1);
    printf("Digite o codigo da carta entre 01 e 04: ");
    scanf("%s", codigocarta_1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidade_1);
    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao_1);
    printf("Digite a area: ");
    scanf("%f", &area_1);
    printf("Digite o PIB: ");
    scanf("%f", &pib_1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontoturistico_1);

    // Código pro usuário colocar os dados desejados da carta 02
    printf("digite os dados da carta 02 \n");
    printf("Digite o Estado desejado de 'A' a 'H': ");
    scanf(" %c", &estado_2);
    printf("Digite o codigo da carta entre 01 e 04: ");
    scanf("%s", codigocarta_2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidade_2);
    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao_2);
    printf("Digite a area: ");
    scanf("%f", &area_2);
    printf("Digite o PIB: ");
    scanf("%f", &pib_2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontoturistico_2);
  // Área para exibição dos dados da cidade
    // Ambiente em que o usuario ira se deparar com os dados adicionados da carta 01
    printf("Carta 01: \n");
    printf("Estado: %c \n", estado_1);
    printf("Codigo: %c%s \n", estado_1, codigocarta_1);
    printf("Nome da Cidade: %s \n", nomedacidade_1);
    printf("Populacao: %d \n", populacao_1);
    printf("Area: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhoes de reais \n", pib_1);
    printf("Numero de Pontos Turisticos: %d \n", pontoturistico_1);

    // Ambiente em que o usuario ira se deparar com os dados adicionados da carta 02
    printf("Carta 02: \n");
    printf("Estado: %c \n", estado_2);
    printf("Codigo: %c%s \n", estado_2, codigocarta_2);
    printf("Nome da Cidade: %s \n", nomedacidade_2);
    printf("Populacao: %d \n", populacao_2);
    printf("Area: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhoes de reais \n", pib_2);
    printf("Numero de Pontos Turisticos: %d \n", pontoturistico_2);
return 0;
} 
