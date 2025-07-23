#include <stdio.h>

int main()
{
    printf("Desafio Super Trunfo - Países\n");
    printf("Novo commit\n");

    // atributos da primeira carta:
    char estado1 = 'A';
    char codigo_da_carta1[5] = "a01";
    char nome_da_cidade1[20] = "belem";
    int populacao1;
    float area1;
    float pib1;
    int numero_de_pontos_turisticos1;

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

    printf("qual o numero de pontos turisticos da sua cidade:\n");
    scanf(" %d", &numero_de_pontos_turisticos1);

    // atributos da segunda carta:
    char estado2 = 'B';
    char codigo_da_carta2[5] = "bo2";
    char nome_da_cidade2[20] = "manaus";
    int populacao2 = 1000;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;

    // entrada de dados da segunda carta:

    printf("Qual o seu Estado:\n");
    scanf("%c", &estado2);

    printf("Qual o codigo da carta:\n");
    scanf("%s", codigo_da_carta2);

    printf("Qual o nome da cidade:\n");
    scanf("%s", nome_da_cidade2);

    printf("Qual a populacao da sua cidade:\n");
    scanf(" %d", &populacao2);

    printf("qual o tamanho da area da sua cidade:\n");
    scanf(" %f", &area2);

    printf("qual o pib da sua cidade:\n");
    scanf(" %f", &pib2);

    printf("qual o numero de pontos turisticos da sua cidade:\n");
    scanf(" %d", &numero_de_pontos_turisticos2);

    return 0;
}
