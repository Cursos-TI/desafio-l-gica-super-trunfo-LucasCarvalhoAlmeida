#include <stdio.h>


int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estadoa[100], estadob[100];
    char nomecidadea[100], nomecidadeb[100];
    int populacaoa, populacaob;
    float areaa, areab;
    float piba, pibb;
    int pturisticosa, pturisticosb;

       // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("Bem-vindo ao sistema de cadastro do Super Trunfo - Países!\n");
    printf("Jogador 1 insira os dados da sua carta\n");

    printf("Insira o nome do estado:");
    scanf("%[^\n]", &estadoa);

    printf("Digite o nome da cidade:");
    getchar();
    scanf("%[^\n]", &nomecidadea);

    printf("Digite a população da cidade:");
    scanf("%d", &populacaoa);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &areaa);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &piba);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticosa);


    printf("\nMuito bom!\n");
    printf("Agora é a sua vez jogador 2:\n");

    printf("Insira o nome do estado:");
    getchar();
    scanf("%[^\n]", &estadob);

    printf("Digite o nome da cidade:");
    getchar();
    scanf("%[^\n]", &nomecidadeb);

    printf("Digite a população da cidade:");
    scanf("%d", &populacaob);

    printf("Digite a área da cidade (em km²):");
    scanf("%f", &areab);

    printf("Digite o PIB da cidade (em milhões):");
    scanf("%f", &pibb);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pturisticosb);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if(populacaoa > populacaob) {
        printf("\nPopulação da cidade do jogador 1 é maior.\n");
    } else{
        printf("\nPopulação da cidade do jogador 2 é maior.\n");
    }

    if(areaa > areab) {
        printf("\nÁrea da cidade do jogador 1 é maior.\n");
    } else{
        printf("\nÁrea da cidade do jogador 2 é maior.\n");
    }

    if(piba > pibb) {
        printf("\nPib da cidade do jogador 1 é maior.\n");
    } else{
        printf("\nPib da cidade do jogador 2 é maior.\n");
    }

    if(pturisticosa > pturisticosb) {
        printf("\nPontos Turisticos da cidade do jogador 1 é maior.\n");
    } else{
        printf("\nPontos Turisticos da cidade do jogador 2 é maior.\n");
    }


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
