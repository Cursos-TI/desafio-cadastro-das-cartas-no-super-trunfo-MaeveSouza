#include <stdio.h>

int main(){

       char state1, state2;
       char card1[10], card2[10];
       char city1[20], city2[20];

       int population1, population2; 
       float areakm1, areakm2, GDP1, GDP2;
       int touristattractions1, touristattractions2;

       /*
       Carta 1.
       Estado: A
       Cidade: Distrito Federal
       População: 2.817 milhões (2022)
       Área: 5.760.784 km²
       PIB: R$328,8 bilhões (2024)
       Número de Pontos Turísticos: 32(segundo o querido Google em algumas fontes)

       
       
       */
       
    //Informações da Primeira Carta: - 

    printf("Primeira Carta: \n");

    printf("Estado: \n");
    scanf(" %c", &state1);

    printf("Código da Carta: \n");
    scanf("%s", card1);

    printf("Nome da Cidade: \n");
    scanf("%s", city1);

    printf("População da cidade: \n");
    scanf("%d", &population1);       

    printf("Área da cidade: \n");
    scanf("%f", &areakm1);

    printf("PIB da cidade: \n");
    scanf("%f", &GDP1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &touristattractions1);


       //Informações da Segunda Carta: -

       /*
       Carta 2.
       Estado: B
       Cidade: Bahia
       População: 14,14 milhões (2022)
       Área: 567 295 km²
       PIB:  R$ 349 bilhões
       Número de Pontos Turísticos: 15(segundo o querido Google em algumas fontes)

       
       
       */


    printf("Informações da Segunda Carta: \n");

    printf("Estado: \n");
    scanf(" %c", &state2);

    printf("Código da Carta: \n");
    scanf("%s", card2);

    printf("Nome da Cidade: \n");
    scanf("%s", city2);

    printf("População da cidade: \n");
    scanf("%d", &population2);       

    printf("Área da cidade: \n");
    scanf("%f", &areakm2);

    printf("PIB da cidade: \n");
    scanf("%f", &GDP2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &touristattractions2);

    // Apresentação das Cartas: - 

    printf("\nCarta número 1: \n");
    printf("Estado: %c \nCódigo da Carta: %s \nNome da cidade: %s \nPopulação da Cidade: %d \nÁrea: %.2f km²\nPIB: %.2f bilhões\nNúmero de Pontos Turísticos: %d \n\n",
           state1, card1, city1, population1, areakm1, GDP1, touristattractions1);

    printf("Carta número 2: \n");
    printf("Estado: %c \nCódigo da Carta: %s \nNome da cidade: %s \nPopulação da Cidade: %d \nÁrea: %.2f km²\nPIB: %.2f bilhões\nNúmero de Pontos Turísticos: %d \n",
           state2, card2, city2, population2, areakm2, GDP2, touristattractions2);


    return 0;


}