#include <stdio.h>

int main() {

    //variáveis
    char estado1;
    char codCarta1[4];
    char nomeCidade1[50];
    int Populacao1;
    float area1;
    float pib1;
    int pontosTur1;
    

    //entrada de dados da CARTA 1
    printf("Digite o Estado: ");
    scanf("%c", &estado1);

    printf("Digite o código da carta: ");
    getchar(); // limpa o buffer antes do fgets
    fgets(codCarta1, sizeof(codCarta1), stdin);
    
    printf("Digite a cidade: ");
    getchar(); // limpa o buffer antes do fgets
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    
    printf("Digite a populaçao: ");
    scanf("%d", &Populacao1);
    
    printf("Informe a área (em km2): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turísticos nesta cidade: ");
    scanf("%d", &pontosTur1);

    printf("\n");

    //variáveis
    char estado2;
    char codCarta2[4];
    char nomeCidade2[50];
    int Populacao2;
    float area2;
    float pib2;
    int pontosTur2;
    

    getchar(); // limpa o buffer antes do fgets
    //entrada de dados da CARTA 2
    printf("Digite o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    getchar(); // limpa o buffer antes do fgets
    fgets(codCarta2, sizeof(codCarta2), stdin);
    
    printf("Digite a cidade: ");
    getchar(); // limpa o buffer antes do fgets
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    
    printf("Digite a populaçao: ");
    scanf("%d", &Populacao2);
    
    printf("Informe a área (em km2): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos nesta cidade: ");
    scanf("%d", &pontosTur2);

    printf("\n");


    //imprimir os dados da CARTA 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1); 
    printf("Código: %s\n", codCarta1);
    printf("Nome da Cidade: %s", nomeCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %f %s\n", area1, "Km2");
    printf("PIB: %f %s\n", pib1, "bilhões de reais");
    printf("Número de Pontos Turísticos: %d\n", pontosTur1);

    float densidadepop1 = (float) Populacao1 / area1;
    
    printf("Densidade Populacional: %.2f %s\n", densidadepop1, "hab/km2");

    float pibpercapita1 = (pib1 * 1000000000) / Populacao1;

    printf("PIB per Capita: %.2f %s\n", pibpercapita1, "Reais");
    printf("\n");

      

    //imprimir os dados da CARTA 2
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2); 
    printf("Código: %s\n", codCarta2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %f %s\n", area2, "Km2");
    printf("PIB: %f %s\n", pib2, "bilhões de reais");
    printf("Número de Pontos Turísticos: %d\n", pontosTur2);

    float densidadepop2 = (float) Populacao2 / area2;
    
    printf("Densidade Populacional: %.2f %s\n", densidadepop2, "hab/km2");

    float pibpercapita2 = (pib2 * 1000000000) / Populacao2;

    printf("PIB per Capita: %.2f %s\n", pibpercapita2, "Reais");

}
