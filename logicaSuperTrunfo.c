#include <stdio.h>
#include <string.h>

int main() {
    char pais1[50];
    int populacao1;
    float area1;
    double pib1;
    int pontosTuristicos1;
    float densidade1;

    strcpy(pais1, "Brasil");
    populacao1 = 215300000;
    area1 = 8516000.0;
    pib1 = 1609000000000.0;
    pontosTuristicos1 = 85;

    char pais2[50];
    int populacao2;
    float area2;
    double pib2;
    int pontosTuristicos2;
    float densidade2;

    strcpy(pais2, "Argentina");
    populacao2 = 45810000;
    area2 = 2780000.0;
    pib2 = 491500000000.0;
    pontosTuristicos2 = 60;

    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    int escolha;
    
    printf("--- Super Trunfo: Batalha de Países ---\n\n");
    printf("DADOS DAS CARTAS:\n");
    printf("Carta 1: %s (Pop: %d, Area: %.0f km2, Pontos Turisticos: %d, Densidade: %.2f hab/km2)\n", pais1, populacao1, area1, pontosTuristicos1, densidade1);
    printf("Carta 2: %s (Pop: %d, Area: %.0f km2, Pontos Turisticos: %d, Densidade: %.2f hab/km2)\n", pais2, populacao2, area2, pontosTuristicos2, densidade2);

    printf("\nEscolha o atributo para a batalha:\n");
    printf("(1) Populacao\n");
    printf("(2) Area\n");
    printf("(3) PIB\n");
    printf("(4) Pontos Turisticos\n");
    printf("(5) Densidade Demografica (menor vence)\n");
    
    printf("\nSua escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("\n--- Comparando: Populacao ---\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("\n--- Comparando: Area ---\n");
            printf("%s: %.0f km2\n", pais1, area1);
            printf("%s: %.0f km2\n", pais2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s!\n", pais1);
            } else if (area2 > area1) {
                printf("Vencedor: %s!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("\n--- Comparando: PIB ---\n");
            printf("%s: US$ %.2f\n", pais1, pib1);
            printf("%s: US$ %.2f\n", pais2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s!\n", pais1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("\n--- Comparando: Pontos Turisticos ---\n");
            printf("%s: %d\n", pais1, pontosTuristicos1);
            printf("%s: %d\n", pais2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s!\n", pais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("\n--- Comparando: Densidade Demografica (Menor valor vence!) ---\n");
            printf("%s: %.2f hab/km2\n", pais1, densidade1);
            printf("%s: %.2f hab/km2\n", pais2, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor: %s!\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        default:
            printf("\nOpcao invalida! Por favor, reinicie e escolha um numero de 1 a 5.\n");
            break;
    }

    return 0;
}