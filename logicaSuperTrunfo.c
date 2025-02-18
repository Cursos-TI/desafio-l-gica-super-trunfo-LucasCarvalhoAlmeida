#include <stdio.h>


int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estadoa, estadob;
    char nomecidadea, nomecidadeb;
    int populacaoa[100], populacaob[100];
    float areaa, areab;
    float piba, pibb;
    int pturisticosa, pturisticosb;


    printf("Bem-vindo ao sistema de cadastro do Super Trunfo - Países!\n");
    printf("\nJogador 1 insira os dados da sua carta\n");

    printf("\nInsira o nome do estado\n");
    scanf("%c", &estadoa);

    printf("\nDigite o nome da cidade:\n");
    scanf("%c", &nomecidadea);

    printf("\nDigite a população da cidade:\n");
    scanf("%d", &populacaoa);

    printf("\nDigite a área da cidade (em km²):\n");
    scanf("%f", &areaa);

    printf("\nDigite o PIB da cidade (em milhões):\n");
    scanf("%f", &piba);

    printf("\nDigite o número de pontos turisticos:\n");
    scanf("%d", &pturisticosa);


    printf("\nMuito bom\n");
    printf("\nAgora é a sua vez jogador 2\n");

    printf("\nInsira o nome do estado\n");
    scanf("%c", &estadob);

    printf("\nDigite o nome da cidade:\n");
    scanf("%c", &nomecidadeb);

    printf("\nDigite a população da cidade:\n");
    scanf("%d", &populacaob);

    printf("\nDigite a área da cidade (em km²):\n");
    scanf("%f", &areab);

    printf("\nDigite o PIB da cidade (em milhões):\n");
    scanf("%f", &pibb);

    printf("\nDigite o número de pontos turisticos:\n");
    scanf("%d", &pturisticosb);

    
   
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
