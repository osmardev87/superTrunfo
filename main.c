#include <stdio.h>

int main()
{
    // ===== carta01 =======
    char EstadoA;
    char codigoA[4];
    char nomeA[50];
    int populacaoA, nPontosTuristicosA;
    float areaA, pibA, densidadePopulacionalA,pibCapita;

    printf("Inform o estado: \n");
    scanf("%c", &EstadoA);

    printf("Informe o codigo: \n");
    scanf(" %s", codigoA);

    printf("Informe o nome: \n");
    scanf(" %s", nomeA);

    printf("Informe o numero populacional: \n");
    scanf(" %d", &populacaoA);

    printf("Informe o numero de pontos turisticos: \n");
    scanf(" %d", &nPontosTuristicosA);

    printf("Informe qua a area quatrada da região \n");
    scanf(" %f", &areaA);

    printf("Informe o PIB da região: \n");
    scanf(" %f", &pibA);

    densidadePopulacionalA = populacaoA / areaA;
    pibCapita = pibA / populacaoA;

    
    printf("========== Informacao da carta 01 ================");

    // facça a impresão das infomações
    printf("\nEstado: %c\n", EstadoA);
    printf("Codigo: %s\n", codigoA);
    printf("Nome: %s\n", nomeA);
    printf("Populacao: %d\n", populacaoA);
    printf("Pontos Turisticos: %d\n", nPontosTuristicosA);
    printf("Area: %.2f\n", areaA);
    printf("PIB: %.2f\n", pibA);
    printf("Densidade Populacional: %.2f\n", densidadePopulacionalA);
    printf("PIB per Capita: %.2f\n\n\n", pibCapita);


    // ===== carta02 =======
    char EstadoB;
    char codigoB[4];
    char nomeB[50];
    int populacaoB, nPontosTuristicosB;
    float areaB, pibB, densidadePopulacionalB,pibCapitaB;

    printf("Inform o estado: \n");
    scanf(" %c", &EstadoB);

    printf("Informe o codigo: \n");
    scanf(" %s", codigoB);

    printf("Informe o nome: \n");
    scanf(" %s", nomeB);

    printf("Informe o numero populacional: \n");
    scanf(" %d", &populacaoB);

    printf("Informe o numero de pontos turisticos: \n");
    scanf(" %d", &nPontosTuristicosB);

    printf("Informe qua a area quatrada da região \n");
    scanf(" %f", &areaB);

    printf("Informe o PIB da região: \n");
    scanf(" %f", &pibB);

    densidadePopulacionalB = populacaoB / areaB;
    pibCapitaB = pibB / populacaoB;

    
    printf("========== Informacao da carta 02 ================ \n");

    // facça a impresão das infomações
    printf("\nEstado: %c\n", EstadoB);
    printf("Codigo: %s\n", codigoB);
    printf("Nome: %s\n", nomeB);
    printf("Populacao: %d\n", populacaoB);
    printf("Pontos Turisticos: %d\n", nPontosTuristicosB);
    printf("Area: %.2f\n", areaB);
    printf("PIB: %.2f\n", pibB);
    printf("Densidade Populacional: %.2f\n", densidadePopulacionalB);
    printf("PIB per Capita: %.2f\n\n\n", pibCapitaB);


    printf("Batalha de poder: \n");

    printf("Area: Carta 1: %d, Carta 2: %d   \n", areaA > areaB, areaB > areaA);
   

    return 0;
}
