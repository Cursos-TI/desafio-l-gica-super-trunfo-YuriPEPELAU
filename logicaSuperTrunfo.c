#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
     // bloco de declaração de variáveis
  int populacao, populacao2, turisticos, turisticos2, ch, opcao, opcao1, opcao2, opcao3;
  float area, area2, pib, pib2, densidade, densidade2, capita, capita2, resultado, resultado1, resultado2, resultado3;
  double superpoder, superpoder2;
  char estado[50], estado2[50], carta2[50], cidade2[50], carta[50], cidade[50];

  // bloco de entrada do usuário da primeira carta
  printf("Carta 1:\n");
  printf("Digite as iniciais do estado: ");
  scanf("%s", estado);
  printf("Digite o codigo da carta: ");
  scanf("%s", carta);
  printf("Digite o nome da cidade: ");
  fgets(cidade, 50, stdin);// file
  while ((getchar()) != '\n');
  ch = getchar();
  printf("Digite o numero de habitantes: ");
  scanf("%i", &populacao);
  printf("Digite a area em quilometros quadrados: ");
  scanf("%f", &area);
  printf("Digite o produto interno bruto (PIB): ");
  scanf("%f", &pib);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%i", &turisticos);

  //bloco de entrada do usuário da segunda carta
  printf("Carta 2:\n");
  printf("Digite as iniciais do estado: ");
  scanf("%s", estado2);
  printf("Digite o codigo da carta: ");
  scanf("%s", carta2);
  printf("Digite o nome da cidade: ");
  fgets(cidade, 50, stdin);// file
  while ((getchar()) != '\n');
  ch = getchar();
  printf("Digite o numero de habitantes: ");
  scanf("%i", &populacao2);
  printf("Digite a area em quilometros quadrados: ");
  scanf("%f", &area2);
  printf("Digite o produto interno bruto (PIB): ");
  scanf("%f", &pib2);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%i", &turisticos2);

  // cálculo da densidade populacional
  densidade = (float) populacao / area;
  densidade2 = (float) populacao2 / area2;

  // cálculo do PIB per capita
  capita = (float) pib / populacao;
  capita2 = (float) pib2 / populacao2;

  // cálculo de super poder 
  superpoder = (float) populacao + area + pib + turisticos + capita + 1 / densidade;
  superpoder2 = (float) populacao2 + area2 + pib2 + turisticos2 + capita2 + 1 / densidade2;

  // bloco de saída do usuário da primeira carta
  printf("Carta 1:\n");
  printf("Estado: %s\n", estado);
  printf("Codigo da carta: %s\n", carta);
  printf("Nome da Cidade: %s\n", cidade);
  printf("Populacao: %i\n", populacao);
  printf("Area: %.2fkm2\n", area);
  printf("PIB: R$%.2fbilhoes\n", pib);
  printf("Numero de pontos turisticos: %i\n", turisticos);
  printf("Densidade populacional: %.2fhab/km2\n", densidade);
  printf("PIB per capita: %.2freais\n", capita);
 
  // bloco de saída do usuário da segunda carta
  printf("Carta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo da carta: %s\n", carta2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %i\n", populacao2);
  printf("Area: %.2fkm2\n", area2);
  printf("PIB: R$%.2fbilhoes\n", pib2);
  printf("Numero de pontos turisticos: %i\n", turisticos2);
  printf("Densidade populacional: %.2fhab/km2\n", densidade2);
  printf("PIB per capita: %.2freais\n", capita2);

  // bloco de escolha de comparação das cartas
  printf("Comparacao das cartas:\n");
  printf("1. Populacao\n");
  printf("2. Area\n");
  printf("3. PIB\n");
  printf("4. Pontos Turisticos\n");
  printf("5. Densidade Populacional\n");
  printf("6. PIB per capita\n");
  printf("7. Super Poder\n");
  printf("Escolha o primeiro atributo para comparar: ");
  scanf("%i",&opcao);
  switch(opcao){
    case 1:
    resultado=populacao>populacao2?1:0;
  break;
  case 2:
    resultado=area>area2?1:0;
  break;
  case 3:
    resultado=pib>pib2?1:0;
  break;
  case 4:
    resultado=turisticos>turisticos2?1:0;
  break;
  case 5:
    resultado=densidade<densidade2?1:0;
  break;
  case 6:
    resultado=capita>capita2?1:0;
  break;
  case 7:
    resultado=superpoder>superpoder2?1:0;
  break;
  default:
    printf("Opcao Invalida!\n");
  break;
  }

    printf("Comparacao das cartas:\n");
  printf("1. Populacao\n");
  printf("2. Area\n");
  printf("3. PIB\n");
  printf("4. Pontos Turisticos\n");
  printf("5. Densidade Populacional\n");
  printf("6. PIB per capita\n");
  printf("7. Super Poder\n");
  printf("Escolha o segundo atributo para comparar: ");
  scanf("%i",&opcao1);
  switch(opcao1){
  case 1:
    resultado1=populacao>populacao2?1:0;
  break;
  case 2:
    resultado1=area>area2?1:0;
  break;
  case 3:
    resultado1=pib>pib2?1:0;
  break;
  case 4:
    resultado1=turisticos>turisticos2?1:0;
  break;
  case 5:
    resultado1=densidade<densidade2?1:0;
  break;
  case 6:
    resultado1=capita>capita2?1:0;
  break;
  case 7:
    resultado1=superpoder>superpoder2?1:0;
  break;
  default:
    printf("Opcao Invalida!\n");
  break;
  }

    printf("Comparacao das cartas:\n");
  printf("1. Populacao\n");
  printf("2. Area\n");
  printf("3. PIB\n");
  printf("4. Pontos Turisticos\n");
  printf("5. Densidade Populacional\n");
  printf("6. PIB per capita\n");
  printf("7. Super Poder\n");
  printf("Escolha o terceiro atributo para comparar: ");
  scanf("%i",&opcao2);
  switch(opcao2){
  case 1:
    resultado2=populacao>populacao2?1:0;
  break;
  case 2:
    resultado2=area>area2?1:0;
  break;
  case 3:
    resultado2=pib>pib2?1:0;
  break;
  case 4:
    resultado2=turisticos>turisticos2?1:0;
  break;
  case 5:
    resultado2=densidade<densidade2?1:0;
  break;
  case 6:
    resultado2=capita>capita2?1:0;
  break;
  case 7:
    resultado2=superpoder>superpoder2?1:0;
  break;
  default:
    printf("Opcao Invalida!\n");
  break;
  }

  printf("Comparacao das cartas:\n");
  printf("1. Populacao\n");
  printf("2. Area\n");
  printf("3. PIB\n");
  printf("4. Pontos Turisticos\n");
  printf("5. Densidade Populacional\n");
  printf("6. PIB per capita\n");
  printf("7. Super Poder\n");
  printf("Escolha um atributo para comparar: ");
  scanf("%i",&opcao3);
  switch(opcao3){
    case 1:
    resultado3=populacao>populacao2?1:0;
  break;
  case 2:
    resultado3=area>area2?1:0;
  break;
  case 3:
    resultado3=pib>pib2?1:0;
  break;
  case 4:
    resultado3=turisticos>turisticos2?1:0;
  break;
  case 5:
    resultado3=densidade<densidade2?1:0;
  break;
  case 6:
    resultado3=capita>capita2?1:0;
  break;
  case 7:
    resultado3=superpoder>superpoder2?1:0;
  break;
  default:
    printf("Opcao Invalida!\n");
  break;
  }

  // bloco de saída dos resultados de comparação das cartas
  if(resultado&&resultado1&&resultado2&&resultado3){
    printf("Carta 1: venceu!\n");
  }else if(resultado!=resultado1!=resultado2!=resultado3){
    printf("Empatou!\n");
  }else{
    printf("Carta2: perdeu!\n");
  }
 
    return 0;
}
