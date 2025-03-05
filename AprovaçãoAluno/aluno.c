#include <stdio.h>

int main(){
   
    int opcao;
    float nota1, nota2, media;

    printf("Menu de Gerenciamento do Estudante.\n");
    printf("1. Calcular média:\n");
    printf("2. Determinar status:\n");
    printf("3. Sair.\n");
    printf("Escolha uma Opção:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Calcular média.\n");
        break;
        case 2:
        printf("Determinar status.\n");
        break;
        case 3:
        printf("Saindo do programa...\n");
        break;
    default:
        printf("Opção Inválida.\n");
        break;
    }



    return 0;
}