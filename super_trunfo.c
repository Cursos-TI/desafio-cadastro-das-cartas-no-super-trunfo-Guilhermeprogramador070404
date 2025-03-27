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
    int soma = populacao + area + pib + npt + densidade + percapita;
    float superpoder;
    int a;
    int b;


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

    printf("Super Poder: %f\n",superpoder);
    
    printf("Soma: %d\n", soma);

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

    printf("Super Poder: %f\n",superpoder);

    printf("Soma: %d\n", soma);

    printf("A > B: %d\n", a > b);
    printf("População Carta A > População Carta B: %d\n", a > b); 
    printf("Area Carta A > Area Carta B: %f\n", a > b);
    printf("PIB Carta A > PIB Carta B: %f\n", a > b);
    printf("Números de Pontos Turisticos Carta A > Número de Pontos Turisticos Carta: %d\n", a > b);
    printf("Densidade Populacional Carta A > Densidade Ppopulacional Carta B: %.2f\n", a > b);
    printf("PIB per capita Carta A > PIB per capita Carta B: %.2f\n", a > b); 
    printf("Super Poder Carta A > Super Poder Carta B: %f\n", a > b);

    if (populacao  > populacao) 
    {
        printf("Carta A venceu!\n");
    } else if(populacao < populacao) {
        printf("Carta B venceu!\n");
    } else {
        printf("Houve um empate!\n");
    }
    if (area > area)
    {
        printf("Carta A venceu!\n");
    } else if(area < area) {
        printf("Carta B venceu!\n");
    } else {
        printf("Houve um empate!\n");
    }
    if (pib > pib)
    {
        printf("Carta A venceu!\n");
    } else if(pib < pib) {
        printf("Carta B venceu!\n");
    } else {
        printf("Houve um empate!\n");
    }
    if (npt > npt)
    {
        printf("Carta A venceu!\n");
    } else if(npt < npt) {
        printf("Carta B venceu!\n");
    } else {
        printf("Houve um empate!\n");
    }
    if (densidade > densidade)
    {
        printf("Carta A venceu!\n");
    } else if (densidade < densidade) {
        printf("Carta B venceu!\n");
    } else {
        printf("Houve um empate!\n");
    }
    if(percapita > percapita)
    {
        printf("Carta A venceu!\n");
    } else if(percapita < percapita) {
        printf("Carta B venceu!\n");
    } else {
        printf("Houve um empate!\n");
    }
    if (superpoder > superpoder)
    {
        printf("Carta A venceu!\n");
    } else if(superpoder < superpoder) {
        printf("Carta B venceu!\n");
    } else {
        printf("Houve um empate!\n");
    }
    return 0;

}

    