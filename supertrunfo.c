    #include <stdio.h>
    int main(){

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
        printf("QUANTIDADE DE PONTOS TURISTICOS: \n");
        scanf("%d", &pontos2);
        printf("ÁREA EM KM²: ");
        scanf("%f", &area2);
        printf("PIB: ");
        scanf("%f", &pib2);
        
        float densidade1 = populacao1 / area1;
        float ppc1 = pib1 / populacao1;

        float densidade2 = populacao2 / area2;
        float ppc2 = pib2 / populacao2;

        //RESULTADOS
        printf("\n-----RESULTADOS-----\n");
        printf("CIDADE 1: %s\n", nome1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %2f\n", ppc1);

        printf("-----RESULTADOS-----\n");
        printf("CIDADE 2: %s\n", nome2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %2f\n", ppc2);

        printf("---COMPARAÇÃO DAS CARTAS (ATRIBUTO: POPULAÇÃO) \n");

        if(populacao1 > populacao2){
        printf("CARTA VENCEDORA: CIDADE 1 %s \n", nome1);

        }else {
            printf("CARTA VENCEDORA: CIDADE 2 %s \n", nome2);
        }

        return 0;

    }