#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char pais1[50], pais2[50];
    int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;

    strcpy(pais1, "Brasil");
    populacao1 = 215300000;
    area1 = 8516000.0;
    pib1 = 1609000000000.0;
    pontosTuristicos1 = 85;

    strcpy(pais2, "Argentina");
    populacao2 = 45810000;
    area2 = 2780000.0;
    pib2 = 491500000000.0;
    pontosTuristicos2 = 60;
    
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    int escolha1, escolha2;
    float valorAttr1_Carta1, valorAttr1_Carta2;
    float valorAttr2_Carta1, valorAttr2_Carta2;
    char nomeAttr1[50], nomeAttr2[50];
    float somaCarta1, somaCarta2;

    printf("--- Super Trunfo: Batalha Final ---\n\n");
    printf("Jogador 1, escolha o PRIMEIRO atributo para a batalha:\n");
    printf("(1) Populacao\n(2) Area\n(3) PIB\n(4) Pontos Turisticos\n(5) Densidade Demografica (menor vence na comparacao individual)\n");
    printf("\nSua escolha: ");
    scanf("%d", &escolha1);

    switch (escolha1) {
        case 1:
            valorAttr1_Carta1 = (float)populacao1 / 1000000;
            valorAttr1_Carta2 = (float)populacao2 / 1000000;
            strcpy(nomeAttr1, "Populacao (em milhoes)");
            break;
        case 2:
            valorAttr1_Carta1 = area1 / 1000000;
            valorAttr1_Carta2 = area2 / 1000000;
            strcpy(nomeAttr1, "Area (em milhoes de km2)");
            break;
        case 3:
            valorAttr1_Carta1 = pib1 / 1000000000;
            valorAttr1_Carta2 = pib2 / 1000000000;
            strcpy(nomeAttr1, "PIB (em bilhoes)");
            break;
        case 4:
            valorAttr1_Carta1 = (float)pontosTuristicos1;
            valorAttr1_Carta2 = (float)pontosTuristicos2;
            strcpy(nomeAttr1, "Pontos Turisticos");
            break;
        case 5:
            valorAttr1_Carta1 = 1000 / densidade1;
            valorAttr1_Carta2 = 1000 / densidade2;
            strcpy(nomeAttr1, "Inverso da Densidade");
            break;
        default:
            printf("Erro: Escolha invalida!\n");
            return 1;
    }

    printf("\nExcelente! Agora escolha o SEGUNDO atributo (diferente do primeiro):\n");
    if (escolha1 != 1) printf("(1) Populacao\n");
    if (escolha1 != 2) printf("(2) Area\n");
    if (escolha1 != 3) printf("(3) PIB\n");
    if (escolha1 != 4) printf("(4) Pontos Turisticos\n");
    if (escolha1 != 5) printf("(5) Densidade Demografica\n");
    
    printf("\nSua escolha: ");
    scanf("%d", &escolha2);

    if (escolha2 == escolha1) {
        printf("Erro: Voce nao pode escolher o mesmo atributo duas vezes!\n");
        return 1;
    }

    switch (escolha2) {
        case 1:
            valorAttr2_Carta1 = (float)populacao1 / 1000000;
            valorAttr2_Carta2 = (float)populacao2 / 1000000;
            strcpy(nomeAttr2, "Populacao (em milhoes)");
            break;
        case 2:
            valorAttr2_Carta1 = area1 / 1000000;
            valorAttr2_Carta2 = area2 / 1000000;
            strcpy(nomeAttr2, "Area (em milhoes de km2)");
            break;
        case 3:
            valorAttr2_Carta1 = pib1 / 1000000000;
            valorAttr2_Carta2 = pib2 / 1000000000;
            strcpy(nomeAttr2, "PIB (em bilhoes)");
            break;
        case 4:
            valorAttr2_Carta1 = (float)pontosTuristicos1;
            valorAttr2_Carta2 = (float)pontosTuristicos2;
            strcpy(nomeAttr2, "Pontos Turisticos");
            break;
        case 5:
            valorAttr2_Carta1 = 1000 / densidade1;
            valorAttr2_Carta2 = 1000 / densidade2;
            strcpy(nomeAttr2, "Inverso da Densidade");
            break;
        default:
            printf("Erro: Escolha invalida!\n");
            return 1;
    }

    somaCarta1 = valorAttr1_Carta1 + valorAttr2_Carta1;
    somaCarta2 = valorAttr1_Carta2 + valorAttr2_Carta2;

    printf("\n------------------------------------\n");
    printf("        RESULTADO DO DUELO\n");
    printf("------------------------------------\n");
    printf("Países: %s vs %s\n", pais1, pais2);
    printf("Atributos Escolhidos: %s e %s\n\n", nomeAttr1, nomeAttr2);

    printf("--- %s ---\n", pais1);
    printf("%s: %.2f\n", nomeAttr1, valorAttr1_Carta1);
    printf("%s: %.2f\n", nomeAttr2, valorAttr2_Carta1);
    printf("SOMA TOTAL: %.2f\n\n", somaCarta1);

    printf("--- %s ---\n", pais2);
    printf("%s: %.2f\n", nomeAttr1, valorAttr1_Carta2);
    printf("%s: %.2f\n", nomeAttr2, valorAttr2_Carta2);
    printf("SOMA TOTAL: %.2f\n\n", somaCarta2);

    printf("------------------------------------\n");
    
    if (somaCarta1 > somaCarta2) {
        printf("VENCEDOR FINAL: %s!\n", pais1);
    } else if (somaCarta2 > somaCarta1) {
        printf("VENCEDOR FINAL: %s!\n", pais2);
    } else {
        printf("RESULTADO FINAL: EMPATE!\n");
    }
    printf("------------------------------------\n");

    return 0;
}