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

    // Entrada de dados da primeira carta

    printf("Qual o seu Estado:\n");
    scanf("%c", &estado1);
    printf("o estado é: %c\n", estado1);

    printf("Qual o codigo da carta:\n");
    scanf("%s", codigo_da_carta1);
    printf("o codigo é: %s\n", codigo_da_carta1);

    printf("Qual o nome da cidade:\n");
    scanf("%s", nome_da_cidade1);
    printf("o nome da cidade é:%s\n", nome_da_cidade1);

    printf("Qual a populacao da sua cidade:\n");
    scanf(" %d", &populacao1);
    printf("a populacao é: %d\n", populacao1);

    printf("qual o tamanho da area da sua cidade:\n");
    scanf(" %f", &area1);
    printf("o tamanho da area é: %f\n", area1);

    printf("qual o pib da sua cidade:\n");
    scanf(" %f", &pib1);
    printf("o pib é: %f\n", pib1);

    printf("qual o numero de pontos turisticos da sua cidade:\n");
    scanf(" %d", &numero_de_pontos_turisticos1);
    printf("a quantidade de ponto turisticos é: %d\n", numero_de_pontos_turisticos1);

    // sainda de dados da primeira carta:

    // atributos da segunda carta:
    char estado2;
    char codigo_da_carta2[5];
    char nome_da_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;

    // entrada de dados da segunda carta:

    printf("Qual o seu Estado:\n");
    scanf("%c", &estado2);
    printf("o estado é: %c\n", estado2);

    printf("Qual o codigo da carta:\n");
    scanf("%s", codigo_da_carta2);
    printf("o codigo é: %s\n", codigo_da_carta2);

    printf("Qual o nome da cidade:\n");
    scanf("%s", nome_da_cidade2);
    printf("o nome da cidade é:%s\n", nome_da_cidade2);

    printf("Qual a populacao da sua cidade:\n");
    scanf(" %d", &populacao2);
    printf("a populacao é: %d\n", populacao2);

    printf("qual o tamanho da area da sua cidade:\n");
    scanf(" %f", &area2);
    printf("o tamanho da area é: %f\n", area2);

    printf("qual o pib da sua cidade:\n");
    scanf(" %f", &pib2);
    printf("o pib é: %f\n", pib2);

    printf("qual o numero de pontos turisticos da sua cidade:\n");
    scanf(" %d", &numero_de_pontos_turisticos2);
    printf("a quantidade de ponto turisticos é: %d\n", numero_de_pontos_turisticos2);


    
    // saida de dados da segunda carta:

    return 0;
}
