#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

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
    int resultado1, resultado2;
    char primeiroAtributo, segundoAtributo;
    int populacao1, populacao2, area1, area2, pib1, pib2;

    printf("Bem-Vindo ao Super Trunfo\n");


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
    if (densidade < densidade)
    {
        printf("Carta A venceu!\n");
    } else if (densidade > densidade) {
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

    srand(time(0));
    populacao1 = 1; //rand() % 100 + 1; Número entre 1 e 100;
    populacao2 = 0; //rand() % 100 + 1; Número entre 1 e 100;
    area1 = 1; //rand() % 100 + 1; Número entre 1 e 100;
    area2 = 0; //rand() % 100 + 1; Número entre 1 e 100;
    pib1 = 1; //rand() % 100 + 1; Número entre 1 e 100;
    pib2 = 0; //rand() % 100 + 1; Número entre 1 e 100;

    printf("Escolha o primeiro atributo\n");
    printf("P. população\n");
    printf("A. area\n");
    printf("I. pib\n");

    printf("Escolha a comparação:\n");
    scanf("%c", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 'P':
    case 'p':
        printf("Você escolheu a opção população\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 'A':
    case 'a':
        printf("Você escolheu a opção area\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção pib\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;    
    default:
        printf("Opção de jogo inválida\n");
        break;
    }
    
    printf("Escolha o segundo atributo\n");
    printf("P. população\n");
    printf("A. area\n");
    printf("I. pib\n");

    printf("Escolha a comparação:\n");
    scanf("%c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo\n");
    } else {
        switch (segundoAtributo)
    {
    case 'P':
    case 'p':
        printf("Você escolheu a opção população\n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 'A':
    case 'a':
        printf("Você escolheu a opção area\n");
        resultado2 = area1 > area2 ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção pib\n");
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;    
    default:
        printf("Opção de jogo inválida\n");
        break;
    }
    }
    if (resultado1 && resultado2)
    {
        printf("Parabéns você venceu!\n");
    } else if (resultado1 != resultado2)
    {
        printf("Empatou!\n");
    } else {
        printf("Infelizmente, você perdeu!\n");
    }
    
    


    return 0;

}
