#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
   /*
nivel novato apenas duas cartas.sem utilizacao de struct
*/
    char estado_1,estado_2;
    char codigo_1[4], codigo_2[4];
    char nomeCidade_1[50], nomeCidade_2[50];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pontosTuristicos_1, pontosTuristicos_2;

  // Área para entrada de dados
  

  /* inicio leitura da primeira carta */
    printf("Insira os dados da Carta n1:\n");
   
    printf("Estado (A-H): ");
    scanf(" %c", &estado_1);
  
    printf("Código da Carta (ex: A01 max3): ");
    scanf("%s", codigo_1);
  
    printf("Nome da Cidade: ");  
    scanf(" %[^\n]", nomeCidade_1); //regex ler espaco
  
    printf("População: ");
    scanf("%d", &populacao_1);
  
    printf("Área (em km²): ");
    scanf("%f", &area_1);
  
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib_1);
  
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos_1);
  /* fim leitura da primeira carta */

    /* inicio leitura da segunda carta */

     printf("Insira os dados da Carta n2:\n");
  
  printf("Estado (A-H): ");
    scanf(" %c", &estado_2);
  
    printf("Código da Carta (ex: A02 max3): ");
    scanf("%s", codigo_2);
  
    printf("Nome da Cidade: ");  
    scanf(" %[^\n]", nomeCidade_2); //regex ler espaco
  
    printf("População: ");
    scanf("%d", &populacao_2);
  
    printf("Área (em km²): ");
    scanf("%f", &area_2);
  
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib_2);
  
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos_2);
   /* fim leitura da segunda carta */

  
  // Área para exibição dos dados da cidade

     /* apresentacao primeira carta */

    printf("\nCarta nro1:\n");
  
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", nomeCidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_1);

       /* fim primeira carta */

     /* apresentacao segunda carta */
    printf("\nCarta nro2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", nomeCidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_2);
        /* fim segunda carta */

 
   

return 0;
} 
