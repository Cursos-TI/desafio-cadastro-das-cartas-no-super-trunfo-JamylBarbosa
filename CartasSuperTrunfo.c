#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        
        // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main() {
    
    char estado[150];
    char cardCode[150];
    char nomecidade[150];
    int populacao;
    float areakm;
    float pib;
    int pontos;

    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nomecidade);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km2: \n");
    scanf("%f", &areakm);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &cardCode);

    printf("Digite os pontos da carta: \n");
    scanf("%d", &pontos);


    printf("Nome do Estado: %s \n", estado);
    printf("Nome da cidade: %s \n", nomecidade);
    printf("PIB da cidade: %.2f \n", pib); 
    printf("População da Cidade: %d \n", populacao);  
    printf("Área em km2: %f \n", areakm); 
    printf("Codigo da Carta: %s \n", cardCode);
    printf("Pontos da carta: %d \n", pontos);

    return 0;
}
