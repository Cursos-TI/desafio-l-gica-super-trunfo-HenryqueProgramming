/*
Estado
Código
idade
População
Área em KM²
PIB
Pontos Turísticos
*/

#include <stdio.h>

int main(){

    // Declaração das Variáveis

    char Estado01[30], Estado02[30];
    char Codigo01[4], Codigo02[4];
    char Cidade01[30], Cidade02[30];
    unsigned long int Populacao01, Populacao02;
    float Area01, Area02;
    float PIB01, PIB02;
    int Pontos_Turisticos01, Pontos_Turisticos02;
    float Densidade_Populacional01, Densidade_Populacional02;
    float PIB_per_Capita01, PIB_per_Capita02;


    // Mensagem de boas-vindas

    printf("*** Seja bem-vindo ao Super Trunfo em C! ***\n");

    // Leitura de dados do usuário

    printf("Insira o nome do estado da carta 01: \n");
    scanf(" %s", Estado01);

    printf("Insira o nome do estado da carta 02: \n");
    scanf(" %s", Estado02);

    printf("Insira a letra do estado seguida de um número de 01 a 04 para a carta 01: \n");
    scanf(" %s", Codigo01);

    printf("Insira a letra do estado seguida de um número de 01 a 04 para a carta 02: \n");
    scanf(" %s", Codigo02);

    printf("Insira o nome da cidade da carta 01: \n");
    scanf("%s", Cidade01);

    printf("Insira o nome da cidade da carta 02: \n");
    scanf("%s", Cidade02);

    printf("Insira o número de habitantes para a carta 01: \n");
    scanf("%lu", &Populacao01);

    printf("Insira o número de habitantes para a carta 02: \n");
    scanf("%lu", &Populacao02);

    printf("Insira a área em km² da carta 01: \n");
    scanf("%f", &Area01);

    printf("Insira a área em km² da carta 02: \n");
    scanf("%f", &Area02);

    printf("Insira o PIB para a carta 01: \n");
    scanf("%f", &PIB01);

    printf("Insira o PIB para a carta 02: \n");
    scanf("%f", &PIB02);

    printf("Insira a quantidade de pontos turísticos para a carta 01: \n");
    scanf("%d", &Pontos_Turisticos01);

    printf("Insira a quantidade de pontos turísticos para a carta 02: \n");
    scanf("%d", &Pontos_Turisticos02);

     // Cálculo da Densidade Populacional e PIB per Capita

     Densidade_Populacional01 = Populacao01 / Area01;
     Densidade_Populacional02 = Populacao02 / Area02;

     PIB_per_Capita01 = PIB01 / Populacao01;
     PIB_per_Capita02 = PIB02 / Populacao02;

    // Exibição dos dados das cartas

    printf("\n--- Carta 01 ---\n");
    printf("Estado 01: %s\n", Estado01);
    printf("Código da carta 01: %3s\n", Codigo01);
    printf("Nome da Cidade 01: %s\n", Cidade01);
    printf("População 01: %lu\n", Populacao01);
    printf("Área em km² 01: %.2f\n", Area01);
    printf("PIB 01: %.2f\n", PIB01);
    printf("Pontos Turísticos 01: %d\n", Pontos_Turisticos01);
    printf("Densidade Populacional 01: %.2f hab/km²\n", Densidade_Populacional01);
    printf("PIB per Capita 01: %.2f\n", PIB_per_Capita01);

    printf("\n--- Carta 02 ---\n");
    printf("Estado 02: %s\n", Estado02);
    printf("Código da carta 02: %3s\n", Codigo02);
    printf("Nome da Cidade 02: %s\n", Cidade02);
    printf("População 02: %lu\n", Populacao02);
    printf("Área em km² 02: %.2f\n", Area02);
    printf("PIB 02: %.2f\n", PIB02);
    printf("Pontos Turísticos 02: %d\n", Pontos_Turisticos02);
    printf("Densidade Populacional 02: %.2f hab/km²\n", Densidade_Populacional02);
    printf("PIB per Capita 02: %.2f\n", PIB_per_Capita02);

    // Menu interativo com switch-case

    int opcao; // Armazena a opção do usuário

    printf("\n/// Menu de Comparação///\n");
    printf("Escolha uma das opções abaixo para comparar: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade Populacional\n");
    printf("5. Pontos Turísticos\n");

    // Armazenando a escolha do usuário

    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\n--- População ---\n");
        printf("%s: %lu\n", Estado01, Populacao01);
        printf("%s: %lu\n", Estado02, Populacao02);

        if (Populacao01 > Populacao02){
            printf("Vencedor: %s\n", Estado01);
        } else if (Populacao01 < Populacao02){
            printf("Vencedor: %s\n", Estado02);
        } else {
            printf("Empate!\n");
        }
        break;

    case 2:
        printf("\n--- Área ---\n");
        printf("%s: %.2f\n", Estado01, Area01);
        printf("%s: %.2f\n", Estado02, Area02);

        if (Area01 > Area02){
            printf("Vencedor: %s\n", Estado01);
        } else if (Area01 < Area02){
            printf("Vencedor: %s\n", Estado02);
        } else {
            printf("Empate!\n");
        }
        break;

    case 3:
        printf("\n--- PIB ---\n");
        printf("%s: %.2f\n", Estado01, PIB01);
         printf("%s: %.2f\n", Estado02, PIB02);

        if (PIB01 > PIB02){
            printf("Vencedor: %s\n", Estado01); 
        } else if (PIB01 < PIB02){
            printf("Vencedor: %s\n", Estado02);
        } else {
            printf("Empate!\n");
        }
        break;

    case 4:
        printf("\n--- Densidade Populacional (Menor vence!) ---\n");
        printf("%s: %.2f\n", Estado01, Densidade_Populacional01);
        printf("%s: %.2f\n", Estado02, Densidade_Populacional02);

        if (Densidade_Populacional01 < Densidade_Populacional02){
            printf("Vencedor: %s\n", Estado01);
        } else if (Densidade_Populacional02 < Densidade_Populacional01){
            printf("Vencedor: %s\n", Estado02);
        } else {
            printf("Empate!\n");
        }
        break;

    case 5:
        printf("\n--- Pontos Turísticos ---\n");
        printf("%s: %d\n", Estado01, Pontos_Turisticos01);
        printf("%s: %d\n", Estado02, Pontos_Turisticos02);

        if (Pontos_Turisticos01 > Pontos_Turisticos02){
            printf("Vencedor: %s\n", Estado01);
        } else if (Pontos_Turisticos01 < Pontos_Turisticos02){
            printf("Vencedor: %s\n", Estado02);
        } else {
            printf("Empate!\n");
        }
        break;

        default:
            printf("Opção inválida!\n");
            break;
    }

        return 0;
}


