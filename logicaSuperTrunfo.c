#include <stdio.h>
#include <string.h>

int main() {
    char estado1[3];
    char codigoCarta1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    char estado2[3];
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    strcpy(estado1, "SP");
    strcpy(codigoCarta1, "A01");
    strcpy(nomeCidade1, "São Paulo");
    populacao1 = 12396372;
    area1 = 1521.11;
    pib1 = 763897000000.0;
    pontosTuristicos1 = 150;

    strcpy(estado2, "RJ");
    strcpy(codigoCarta2, "B01");
    strcpy(nomeCidade2, "Rio de Janeiro");
    populacao2 = 6775561;
    area2 = 1200.329;
    pib2 = 356874000000.0;
    pontosTuristicos2 = 200;

    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;

    printf("Comparacao de cartas (Atributo: Populacao):\n\n");

    printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}