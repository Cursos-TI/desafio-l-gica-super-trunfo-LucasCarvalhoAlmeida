#include <stdio.h>

int main(){

   int opcao;
   float saldo = 1000.00;

   printf("Escolha uma Opção.\n");
   printf("1. Consultar saldo.\n");
   printf("2. Realizar depósito.\n");
   printf("3. Realizar saque.\n");
   scanf("%d", &opcao);

   switch (opcao)
   {
   case 1:
    printf("Seu saldo atual: R$ %f\n", saldo);
    break;
   case 2:
    printf("Digite o banco que deseja depositar.\n");
    printf("Digite a agência que deseja depositar.\n");
    printf("Digite a conta que deseja depositar.\n");
    break; 
   case 3:
    printf("Digite o valor a sacar.\n");
    break;
   default:
    printf("Opção Inválida.\n");
    break;
   }


    return 0;
}