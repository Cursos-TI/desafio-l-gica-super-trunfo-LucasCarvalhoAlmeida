#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int opcao;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma Opção\n");
    scanf("%d", &opcao); 

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Digite um número de 0 a 9: ");
        scanf("%d", &palpite);
        if (numeroSecreto == palpite)
        {
            printf("Você Acertou!\n");
            printf("Número secreto: %d\n", numeroSecreto);
        } else{
            printf("Você Errou!\n");
            printf("Número secreto: %d\n", numeroSecreto);
        }
        break;
    case 2:
        printf("As regras são..\n");
        break;
    case 3:
        printf("Sair do jogo.\n");
        break;
    default:
        printf("Opção Inválida.\n");
        break;
    }

    return 0;

}
