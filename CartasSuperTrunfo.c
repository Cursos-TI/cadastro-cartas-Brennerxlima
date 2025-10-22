/*Brenner Xavier Lima - Matrícula:

Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
População: O número de habitantes da cidade. Tipo: int
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
PIB: O Produto Interno Bruto da cidade. Tipo: float
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

*/

#include <stdio.h>
#include <string.h> // Necessário para usar a função strcspn

int main() {

    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int qtd_pontos_turistico1, qtd_pontos_turistico2;

    printf("------------------------ DADOS DAS CARTAS ------------------------\n");
    printf("------- > Insira dados da Carta A < -------\n");

    printf("Estado:");
    scanf(" %c", &estado1);
    getchar(); // limpa o ENTER deixado no buffer

    printf("Código da carta:");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0';

    printf("Cidade:");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("População:");
    scanf("%d", &populacao1);

    printf("Área:");
    scanf("%f", &area1);

    printf("PIB:");
    scanf("%f", &PIB1);

    printf("Quantidade de pontos turísticos:");
    scanf("%d", &qtd_pontos_turistico1);

    printf("\n------- > Insira dados da Carta B < -------\n\n");

    printf("Estado:");
    scanf(" %c", &estado2);
    getchar(); // limpa o ENTER deixado no buffer

    printf("Código da carta:");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';

    printf("Cidade:");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("População:");
    scanf("%d", &populacao2);

    printf("Área:");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &PIB2);

    printf("Quantidade de pontos turísticos:");
    scanf("%d", &qtd_pontos_turistico2);

    printf("\n------- > DADOS DAS CARTAS < -------\n");
    printf("------- > Informações da Carta A < -------\n");

    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Números de pontos turísticos: %d\n", qtd_pontos_turistico1);

    printf("\n------- > Informações da Carta B < -------\n\n");

    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Números de pontos turísticos: %d\n", qtd_pontos_turistico2);

}