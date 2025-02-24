#include <stdio.h>

int main(){
    printf("Cartas Super Trunfo!\n");
    printf(" Carta 1\n");
    
    char estado[1];
    char codigo[3];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int npt;
    
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

    
}