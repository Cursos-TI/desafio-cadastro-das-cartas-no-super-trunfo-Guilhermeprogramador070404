#include <stdio.h>

int main(){
    printf("Cartas Super Trunfo!\n");
    printf(" Carta 1\n");
    
    char estado[3];
    char codigo[5];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int npt;
    float densidade = populacao / area;
    float percapita = pib / populacao;


    printf("Nome do Estado: \n");
    scanf("%s", &estado);
    printf("Nome do Estado é: %s\n", estado);


    printf("Código da Carta: \n");
    scanf("%s", &codigo);
    printf("Código da Carta é: %s\n", codigo);

    printf("Nome da Cidade: \n");
    scanf("%s", &nome);
   printf("Nome da Cidade é: %s\n", nome);

    printf("População: \n");
    scanf("%d", &populacao);
    printf("População é: %d\n", populacao);

    printf("Área: \n");
    scanf("%f", &area);
    printf("Área(Km²) é: %f\n", area);

    printf("PIB: \n");
    scanf("%f", &pib);
    printf("PIB é: %f\n", pib);

    printf("NPT: \n");
    scanf("%d", &npt);
    printf("Número de Pontos Turísticos é: %d\n", npt);

    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", percapita);

    printf("Carta 2\n");

    printf("Nome do Estado: \n");
    scanf("%s", &estado);
    printf("Nome do Estado é: %s\n", estado);

    printf("Codigo da Carta: \n");
    scanf("%s", &codigo);
    printf("Codigo da Cartra é: %s\n", codigo);

    printf("Nome da Cidade:  \n");
    scanf("%s", &nome);
    printf("Nome da Cidade é: %s\n", nome);

    printf("Polupação: \n");
    scanf("%d", &populacao);
    printf("População é: %d\n", populacao);

    printf("Área: \n");
    scanf("%f", &area);
    printf("Área(Km²) é: %f\n", area);

    printf("PIB: \n");
    scanf("%f", &pib);
    printf("PIB é: %f\n", pib);

    printf("NPT: \n");
    scanf("%d", &npt);
    printf("Número de Pontos Turísticos é: %d\n", npt);

    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", percapita);

    return 0;
    
}