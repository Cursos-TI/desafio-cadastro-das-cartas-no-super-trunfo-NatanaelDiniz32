#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
 printf("Desafio Super Trunfo - Paises!\n");
TRUFO
     // Carta 1 - Florianópolis
    char estado1 = 'C';
    char codigo1[] = "C01";
    char nomeCidade1[] = "Florianópolis";
    int populacao1 = 508826;
    float area1 = 675.4;
    float pib1 = 23.6;
    int pontosTuristicos1 = 40;

    // Carta 2 - Salvador
    char estado2 = 'D';
    char codigo2[] = "D02";
    char nomeCidade2[] = "Salvador";
    int populacao2 = 2886698;
    float area2 = 693.8;
    float pib2 = 64.1;
    int pontosTuristicos2 = 55;

    // Exibindo as informações da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibindo as informações da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);


    return 0;
}
