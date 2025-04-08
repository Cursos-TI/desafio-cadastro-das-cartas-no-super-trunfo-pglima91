#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    char estado1, codigo1[4], nome1[100];
    int pontos1, populacao1;
    float area1, pib1;

    char estado2, codigo2[4], nome2[100];
    int pontos2, populacao2;
    float area2, pib2;

    // DADOS DA CARTA 1
    printf("CARTA 1\n");
    printf("ESTADO (A-H): ");
    scanf("%s", &estado1);
    printf("CODIGO: ");
    scanf("%s", &codigo1);
    printf("NOME DA CIDADE: ");
    scanf("%s", &nome1);
    printf("POPULAÇÃO: ");
    scanf("%d", &populacao1);
    printf("QUANTIDADE DE PONTOS TURISTICOS: ");
    scanf("%d", &pontos2);
    printf("ÁREA EM KM²: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);

    // DADOS DA CARTA 2
    printf("CARTA 2\n");
    printf("ESTADO (A-H): ");
    scanf("%s", &estado2);
    printf("CODIGO: ");
    scanf("%s", &codigo2);
    printf("NOME DA CIDADE: ");
    scanf("%s", &nome2);
    printf("POPULAÇÃO: ");
    scanf("%d", &populacao2);
    printf("QUANTIDADE DE PONTOS TURISTICOS: ");
    scanf("%d", &pontos2);
    printf("ÁREA EM KM²: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);



    return 0;
}
