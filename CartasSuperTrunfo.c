#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Nível Novato - Cadastro das Cartas
// Este programa cadastra duas cartas de cidades com seus atributos básicos.

int main() {
    // Variáveis para a primeira carta
    char codigo1[4], nome1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    
    // Variáveis para a segunda carta
    char codigo2[4], nome2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    
    printf("=== CADASTRO DE CARTAS - SUPER TRUNFO PAISES ===\n\n");
    
    // Cadastro da primeira carta
    printf("--- PRIMEIRA CARTA ---\n");
    printf("Digite o codigo da cidade (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);
    
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    
    printf("Digite a area (km2): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em Milhoes): ");
    scanf("%f", &pib1);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cadastro da segunda carta
    printf("\n--- SEGUNDA CARTA ---\n");
    printf("Digite o codigo da cidade (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);
    
    printf("Digite a populacao ");
    scanf("%d", &populacao2);
    
    printf("Digite a area (km2): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em Milhoes): ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Exibição dos dados das cartas
    printf("\n\n=== DADOS DAS CARTAS CADASTRADAS ===\n\n");
    
    // Exibição da primeira carta
    printf("--- PRIMEIRA CARTA ---\n");
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f Milhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    
    // Exibição da segunda carta
    printf("\n--- SEGUNDA CARTA ---\n");
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f Milhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    
    printf("\nCadastro concluido com sucesso!\n");
    
    return 0;
}