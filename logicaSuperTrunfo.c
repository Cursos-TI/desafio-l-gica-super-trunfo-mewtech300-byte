#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Nível Novato - Comparação Simples

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Carta 1
    char estado1;
    char codigo1[5];
    char nome1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[5];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1); // Espaço antes de %c para limpar o buffer do teclado
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome1); // Lê a string incluindo espaços
    printf("Digite a População: ");
    scanf("%lu", &populacao1);
    printf("Digite a Área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a População: ");
    scanf("%lu", &populacao2);
    printf("Digite a Área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Exemplo usando População como critério:
    
    printf("\n--- Resultado da Comparação (Critério: População) ---\n");
    
    if (populacao1 > populacao2) {
        // Exibição dos Resultados:
        printf("Carta 1 - %s: %lu\n", nome1, populacao1);
        printf("Carta 2 - %s: %lu\n", nome2, populacao2);
        printf("Resultado: A Cidade 1 (%s) Venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Carta 1 - %s: %lu\n", nome1, populacao1);
        printf("Carta 2 - %s: %lu\n", nome2, populacao2);
        printf("Resultado: A Cidade 2 (%s) Venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
