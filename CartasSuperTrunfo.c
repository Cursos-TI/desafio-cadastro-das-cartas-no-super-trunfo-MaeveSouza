#include <stdio.h>
//Tentei utilizar a biblioteca #include <locale.h.> e   setlocale(LC_NUMERIC, ""); como formatador de milhar, porém sem exito no meu computador.
//Eu aprimorei meu código desde a primeira vez que utilizei ele.

int main() {

    //Variáveis utilizadas.
    char state1, state2;
    char card1[10], card2[10];
    char city1[20], city2[20];

    int population1, population2; 
    float areakm1, areakm2, GDP1, GDP2;
    int touristattractions1, touristattractions2;

    

       /*
       Carta 1.
       Código: A
       Estado: D
       Cidade: Brasília
       População: 2.982.818
       Área: 5,761 km²
       PIB: 116.71339 PIB ou (GDP "Gross domestic product" por gostar de utilizar tudo em inglês inclusive consumo e informações)
       Número de Pontos Turísticos: 32(segundo o querido Google em algumas fontes)
       ALGUMAS INFORMAÇÕES SOBRE ESSE ESTADO E CIDADE PODEM ESTAR INCORRETOS DURANTE MINHA PESQUISA.

    
    
       */
     
       //Informações da Primeira Carta: - 

    printf("Primeira Carta:\n");

    printf("Estado:\n");
    scanf(" %c", &state1);

    printf("Código da Carta:\n");
    scanf("%s", card1);

    printf("Nome da Cidade:\n");
    scanf("%s", city1);

    printf("População da cidade:\n");
    scanf("%d", &population1);       

    printf("Área da cidade:\n");
    scanf("%f", &areakm1);

    printf("PIB da cidade:\n");
    scanf("%f", &GDP1);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &touristattractions1);


       //Informações da Segunda Carta: -

       /*
       Carta 2.
       Código: B
       Estado: B
       Cidade: Salvador
       População: 2,500,000
       Área: 693.8 km²
       PIB:  R$ 114.4 bilhões PIB ou (GDP "Gross domestic product" por gostar de utilizar tudo em inglês inclusive consumo e informações)
       Número de Pontos Turísticos: 15(segundo o querido Google em algumas fontes)
       ALGUMAS INFORMAÇÕES SOBRE ESSE ESTADO E CIDADE PODEM ESTAR INCORRETOS DURANTE MINHA PESQUISA.

       
       
       */


    //Parte a onde é armazenada todas as informações do código para serem disponibilizadas no final como um resultado.       

    printf("Informações da Segunda Carta:\n");

    printf("Estado:\n");
    scanf(" %c", &state2);

    printf("Código da Carta:\n");
    scanf("%s", card2);

    printf("Nome da Cidade:\n");
    scanf("%s", city2);

    printf("População da cidade:\n");
    scanf("%d", &population2);       

    printf("Área da cidade:\n");
    scanf("%f", &areakm2);

    printf("PIB da cidade:\n");
    scanf("%f", &GDP2);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &touristattractions2);


    // Apresentação das cartas

    printf("\nCarta número 1: \n");
    printf("Estado: %c \nCódigo da Carta: %s \nNome da cidade: %s \nPopulação da Cidade: %d pessoas \nÁrea: %.2f km²\nPIB: %.2f bilhões\nNúmero de Pontos Turísticos: %d \n\n",
           state1, card1, city1, population1, areakm1, GDP1, touristattractions1);

    printf("Carta número 2: \n");
    printf("Estado: %c \nCódigo da Carta: %s \nNome da cidade: %s \nPopulação da Cidade: %d pessoas \nÁrea: %.2f km²\nPIB: %.2f bilhões\nNúmero de Pontos Turísticos: %d \n",
           state2, card2, city2, population2, areakm2, GDP2, touristattractions2);

    printf("\nAguarde. Realizando comparação dos atributos: Densidade Populacional das duas cartas.... \n");
    printf("Carta: %s - Estado: %c - Cidade: %s com %d habitantes \n", card1, state1, city1, population1);
    printf("Carta: %s - Estado: %c - Cidade: %s com %d habitantes \n", card2, state2, city2, population2);

    // Comparação das populações
    if (population1 < population2) {
        printf("A carta com o código: %s - %s foi a vencedora na categoria: Menor População de %d! \n", card1, city1, population1);
    } else if (population2 < population1) {
        printf("A carta com o código: %s - %s foi a vencedora na categoria: Menor População de %d! \n", card2, city2, population2);
    } else {
        printf("As duas cartas têm a mesma população! \n");
    }

    return 0;
}