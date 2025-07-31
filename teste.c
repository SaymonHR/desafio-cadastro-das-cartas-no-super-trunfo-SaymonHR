#include <stdio.h>

int main()
{
    printf("Desafio Super Trunfo - Países\n");
    printf("Novo commit\n");

    // atributos da primeira carta:
    char estado1;
    char codigo_da_carta1[5];
    char nome_da_cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int numero_de_pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    // Entrada de dados da primeira carta
    printf("Qual o seu Estado:\n");
    scanf("%c", &estado1);

    printf("Qual o codigo da carta:\n");
    scanf("%s", codigo_da_carta1);

    printf("Qual o nome da cidade:\n");
    scanf("%s", nome_da_cidade1);

    printf("Qual a populacao da sua cidade:\n");
    scanf(" %d", &populacao1);

    printf("qual o tamanho da area da sua cidade:\n");
    scanf(" %f", &area1);

    printf("qual o pib da sua cidade:\n");
    scanf(" %f", &pib1);

    printf("qual a quantidade de pontos turisticos da sua cidade:\n");
    scanf(" %d", &numero_de_pontos_turisticos1);

    // atributos da segunda carta:
    char estado2;
    char codigo_da_carta2[5];
    char nome_da_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capital2;

    // entrada de dados da segunda carta:

    printf("Qual o seu Estado:\n");
    scanf(" %c", &estado2);

    printf("Qual o codigo da carta:\n");
    scanf(" %s", codigo_da_carta2);

    printf("Qual o nome da cidade:\n");
    scanf(" %19[^\n]", nome_da_cidade2);

    printf("Qual a populacao da sua cidade:\n");
    scanf(" %d", &populacao2);

    printf("qual o tamanho da area da sua cidade:\n");
    scanf(" %f", &area2);

    printf("qual o pib da sua cidade:\n");
    scanf(" %f", &pib2);

    printf("qual a quantidade pontos turisticos da sua cidade:\n");
    scanf(" %d", &numero_de_pontos_turisticos2);

    // Saída de dados da primeira carta:
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("o codigo é: %s\n", codigo_da_carta1);
    printf("Cidade:%s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", numero_de_pontos_turisticos1);

    // calculo carta 1
    densidade_populacional1 = populacao1 / area1;
    Pib_per_capital1 = (pib1 * 1000000000) / populacao1;

    // resultado carta 1
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capital: %.2f reais\n", pib_per_capital1);

    // Saída de dados da segunda carta:
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("O codigo é: %s\n", codigo_da_carta2);
    printf("Cidade:%s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", numero_de_pontos_turisticos2);

    // calculo carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capital2 = (pib2 * 1000000000) / populacao2;

    // resultado carta 2
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capital: %.2f reais\n", pib_per_capital2);

    return 0;
}
