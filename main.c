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

    return 0;
}
