#include <stdio.h>

// Desafio Super Trunfo - Paísesa
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
     int cod_cidade, pnt_turistico;
     char letra;
     char nome[50];
     float populacao;
     float area;
     float pib;
    // Cadastro das Cartas:1r as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\t\tCADASTRO DE CIDADES\n\n");
    printf("Digite a letra que representa a cidade:a ");
    scanf("%c", &letra);
    printf("Digite o numero da cidade: ");
    scanf("%d", &cod_cidade);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome);
    printf("Qual e a quantidade de pontos turisticos?: ");
    scanf("%d", &pnt_turistico);
    printf("Digite o valor da população: ");
    scanf("%f", &populacao);
    printf("Digite a medida em km²: ");
    scanf("%f", &area);
    printf("Digite o valor do PIB: ");
    scanf("%f", &pib);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\t\tDADOS CADASTRADOS\n\n");
    printf("Cód. Cidade: %c0%d\n", letra, cod_cidade);
    printf("Cidade: %s\n", nome);
    printf("População: %.3f habitantes.\n", populacao);
    printf("Area: %.3fkm²\n", area);
    printf("PIB: R$ %.2f\n", pib);


    return 0;
}
