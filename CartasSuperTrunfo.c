#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Nível Mestre - Cadastro das Cartas com Comparação e Super Poder
// Este programa cadastra duas cartas de cidades, calcula atributos e compara as cartas.

int main() {
    // Variáveis para a primeira carta
    char codigo1[4], nome1[50];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area1, pib1;
    float densidade_populacional1, pib_per_capita1, super_poder1;
    
    // Variáveis para a segunda carta
    char codigo2[4], nome2[50];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib2;
    float densidade_populacional2, pib_per_capita2, super_poder2;
    
    // Variáveis para comparação
    int vence_populacao, vence_area, vence_pib, vence_pontos_turisticos;
    int vence_densidade, vence_pib_per_capita, vence_super_poder;
    
    printf("=== CADASTRO DE CARTAS - SUPER TRUNFO PAISES ===\n");
    printf("=== NIVEL MESTRE ===\n\n");
    
    // Cadastro da primeira carta
    printf("--- PRIMEIRA CARTA ---\n");
    printf("Digite o codigo da cidade (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);
    
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    
    printf("Digite a area (km2): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em milhoes): ");
    scanf("%f", &pib1);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cálculo dos atributos da primeira carta
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / (float)populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + (1.0 / densidade_populacional1) + pib_per_capita1;
    
    // Cadastro da segunda carta
    printf("\n--- SEGUNDA CARTA ---\n");
    printf("Digite o codigo da cidade (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);
    
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    
    printf("Digite a area (km2): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em milhoes): ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculo dos atributos da segunda carta
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / (float)populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + (1.0 / densidade_populacional2) + pib_per_capita2;
    
    // Comparação das cartas
    vence_populacao = (populacao1 > populacao2) ? 1 : 0;
    vence_area = (area1 > area2) ? 1 : 0;
    vence_pib = (pib1 > pib2) ? 1 : 0;
    vence_pontos_turisticos = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0;
    vence_densidade = (densidade_populacional1 < densidade_populacional2) ? 1 : 0; // Menor densidade vence
    vence_pib_per_capita = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
    vence_super_poder = (super_poder1 > super_poder2) ? 1 : 0;
    
    // Exibição dos dados das cartas
    printf("\n\n=== DADOS DAS CARTAS CADASTRADAS ===\n\n");
    
    // Exibição da primeira carta
    printf("--- PRIMEIRA CARTA ---\n");
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f milhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per capita: %.2f milhoes por habitante\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    
    // Exibição da segunda carta
    printf("\n--- SEGUNDA CARTA ---\n");
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f milhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per capita: %.2f milhoes por habitante\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    
    // Contagem de vitórias
    int vitorias_carta1 = vence_populacao + vence_area + vence_pib + vence_pontos_turisticos + vence_densidade + vence_pib_per_capita + vence_super_poder;
    int vitorias_carta2 = 7 - vitorias_carta1;
    
    // Exibição da comparação
    printf("\n\n=== COMPARACAO DAS CARTAS ===\n\n");
    printf("Populacao: Carta %d vence\n", vence_populacao ? 1 : 2);
    printf("Area: Carta %d vence\n", vence_area ? 1 : 2);
    printf("PIB: Carta %d vence\n", vence_pib ? 1 : 2);
    printf("Pontos turisticos: Carta %d vence\n", vence_pontos_turisticos ? 1 : 2);
    printf("Densidade populacional: Carta %d vence\n", vence_densidade ? 1 : 2);
    printf("PIB per capita: Carta %d vence\n", vence_pib_per_capita ? 1 : 2);
    printf("Super Poder: Carta %d vence\n", vence_super_poder ? 1 : 2);
    
    // Resultado final
    printf("\n=== RESULTADO FINAL ===\n");
    printf("Carta 1 (%s): %d vitorias\n", nome1, vitorias_carta1);
    printf("Carta 2 (%s): %d vitorias\n", nome2, vitorias_carta2);
    
    if (vitorias_carta1 > vitorias_carta2) {
        printf("\n CARTA VENCEDORA: Carta 1 (%s) com %d de 7 atributos!\n", nome1, vitorias_carta1);
    } else if (vitorias_carta2 > vitorias_carta1) {
        printf("\n CARTA VENCEDORA: Carta 2 (%s) com %d de 7 atributos!\n", nome2, vitorias_carta2);
    } else {
        printf("\n EMPATE! Ambas as cartas venceram em %d atributos cada!\n", vitorias_carta1);
    }
    
    printf("\nCadastro e comparacao concluidos com sucesso!\n");
    printf("Atributos calculados: Densidade Populacional, PIB per Capita e Super Poder\n");
    
    return 0;
}