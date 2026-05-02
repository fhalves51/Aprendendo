#include <stdio.h>

int main() {

    // -------- CARTA 1 --------
    char estado1[10];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // -------- CARTA 2 --------
    char estado2[10];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // === Entrada de dados - Carta 1 ===
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-Z): \n");
    scanf("%s", estado1);

    printf("Codigo da carta(ex: A01): \n");
    scanf("%s", codigo1);

    printf("Nome da cidade: \n");
    scanf(" %99[^\n]", nomeCidade1);

    printf("Populacao: \n");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): \n");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

     // Cálculo da densidade populacional e PIB per capita para a Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;


    // === Entrada de dados - Carta 2 ===
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-Z): \n");
    scanf("%s", estado2);

    printf("Codigo da carta (ex: B02): \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    scanf(" %99[^\n]", nomeCidade2);

    printf("Populacao: \n");
    scanf("%d", &populacao2);

    printf("Area (km2): \n");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): \n");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);

     // Cálculo da densidade populacional e PIB per capita para a Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // === Exibição ===
    printf("\n\n===== CARTAS CADASTRADAS =====\n");

    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais/habitante\n", pibPerCapita1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais/habitante\n", pibPerCapita2);


    return 0;
}
