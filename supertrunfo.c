#include <stdio.h>
#include <string.h> //possibilita o uso da função strcspn que remove o \n da string
#include <unistd.h> //possibilita o uso da função sleep para esperar

// Desafio: implementar um jogo de super trunfo com cartas de cidades
// Cada carta tem os seguintes atributos:
// - Estado (A-H)
// - Código da carta
// - Nome da cidade
// - População
// - Área em Km²
// - PIB em bilhões de reais
// - Pontos turísticos
// - Desindade populacional
// - PIB per capita
// - Super Poder (atributo extra)

// Tema 1 - Cadastro das Cartas
    // Atributos das cartas

    int main() {
        char Estado, Estado2;
        char CodigoCarta[4], CodigoCarta2[4];
        char NomeDaCidade[50], NomeDaCidade2[50];
        int populacao, populacao2;
        float Area, Area2;
        double pib, pib2;
        int pontosTuristicos, pontosTuristicos2;
        double DensidadePopulacional, DensidadePopulacional2;
        double PIBperCapita, PIBperCapita2;
        float superpoder, superpoder2;
        
        // Leitura dos dados da carta 1
        printf("Insira os dados da carta 1:\n");
        printf("Digite uma letra de A a H para representar o Estado:\n");
        scanf(" %c", &Estado);
        while(getchar() != '\n');
        
        printf("Digite o Código da carta:\n");
        scanf("%4s", CodigoCarta);
        while(getchar() != '\n');
        
        printf("Digite o nome da cidade:\n");
        fgets(NomeDaCidade, 50, stdin);
        // Remover o '\n' final da string
        NomeDaCidade[strcspn(NomeDaCidade, "\n")] = '\0';
        
        printf("Digite a População:\n");
        scanf("%d", &populacao);
        while(getchar() != '\n');
        
        printf("Digite a Area em Km²:\n");
        scanf("%f", &Area);
        while(getchar() != '\n');
        
        printf("Digite o PIB:\n");
        scanf("%lf", &pib);
        while(getchar() != '\n');
        
        printf("Digite a quantidade de pontos turisticos:\n");
        scanf("%d", &pontosTuristicos);
        while(getchar() != '\n');
        
        if (populacao == 0) {
            printf("População não pode ser 0\n");
            return 1;
        }

        DensidadePopulacional = populacao / Area;
        PIBperCapita = pib / populacao;
        double inverso_densidade = Area / populacao;

        // Calculando superpoder.
        
        superpoder = populacao + Area + pib + pontosTuristicos + PIBperCapita + inverso_densidade;
        
        // Impressão dos dados da carta 1
        
        
        printf("Carta 1:\n");
        printf("Estado: %c\n", Estado);
        printf("Codigo da carta: %c%s\n", Estado, CodigoCarta);
        printf("Nome da cidade: %s\n", NomeDaCidade);
        printf("Populacao: %d\n", populacao);
        printf("Area: %.2f Km²\n", Area);
        printf("PIB: R$ %.2lf Bilhões\n", pib);
        printf("Pontos turisticos: %d\n", pontosTuristicos);
        printf("Densidade populacional: %.2lf\n", DensidadePopulacional);
        printf("PIB per capita: R$ %.2lf\n", PIBperCapita);
        printf("Superpoder: %.2f\n", superpoder);
        
        // Leitura dos dados da carta 2
        
        printf("Insira os dados da carta 2:\n");
        printf("Digite uma letra de A a H para representar o Estado:\n");
        scanf(" %c", &Estado2);
        while(getchar() != '\n');
        
        printf("Digite o Codigo da carta:\n");
        scanf("%4s", CodigoCarta2);
        while(getchar() != '\n');
        
        printf("Digite o nome da cidade:\n");
        fgets(NomeDaCidade2, 50, stdin); //Estabelence o limite de caracteres, e a entrada de dados
        NomeDaCidade2[strcspn(NomeDaCidade2, "\n")] = '\0'; /// SRRCSPN retorna o tamanho da string, sem o \n
        
        printf("Digite a Populacao:\n");
        scanf("%d", &populacao2);
        while(getchar() != '\n');
        
        printf("Digite a Area em Km²:\n");
        scanf("%f", &Area2);
        while(getchar() != '\n');
        
        printf("Digite o PIB:\n");
        scanf("%lf", &pib2);
        while(getchar() != '\n');
        
        printf("Digite a quantidade de pontos turisticos:\n");
        scanf("%d", &pontosTuristicos2);
        while(getchar() != '\n');

        if (populacao2 == 0) {
            printf("População não pode ser 0\n");
            return 1;
        }
        
        DensidadePopulacional2 = populacao2 / Area2;
        PIBperCapita2 = pib2 / populacao2;
        double inverso_densidade2 = Area2 / populacao2;
        
        // Calculando superpoder2.

        superpoder2 = populacao2 + Area2 + pib2 + pontosTuristicos2 + PIBperCapita2 + inverso_densidade2;
        
        // Impressão dos dados da carta 2
        
        printf("Carta 2:\n");
        printf("Estado: %c\n", Estado2);
        printf("Codigo da carta: %c%s\n", Estado2, CodigoCarta2);
        printf("Nome da cidade: %s\n", NomeDaCidade2);
        printf("Populacao: %d\n", populacao2);
        printf("Area: %.2f Km²\n", Area2);  
        printf("PIB: R$ %.2lf Bilhões\nA", pib2);
        printf("Pontos turisticos: %d\n", pontosTuristicos2);
        printf("Densidade populacional: %.2lf\n", DensidadePopulacional2);
        printf("PIB per capita: R$ %.2lf\n", PIBperCapita2);
        printf("Superpoder: %.2f\n", superpoder2);
        getchar();

        printf("Comparando as cartas...\n")
        sleep(3);

        // Comparação entre as cartas       
        if (superpoder > superpoder2)

            printf("O superpoder da Carta1 (%.2f) é maior que o da Carta2 (%.2f)\n", superpoder, superpoder2);
        else
            printf("O superpoder da Carta 2 (%.2f) é maior que o da Carta1 (%.2f)\n", superpoder2, superpoder);

        //ADICIONANDO PARADA PARA QUE O TERMINAL NÃO SE FECHE IMEDIATAMENTE APÓS A EXECUÇÃO DAS VARIAVEIS
        printf("Pressione qualquer tecla para sair...");
        getchar();
        
        return 0;
    }
    