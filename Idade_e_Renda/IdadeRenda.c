#include <stdio.h>

int main(){

    int idade;
    float renda;

    printf("Digite sua idade.\n");
    scanf("%d", &idade);
    printf("Digite sua renda mensal\n");
    scanf("%f", &renda);

    if(idade < 18 || idade > 60) {
        if(renda < 2000.0){
            printf("Você está qualificado para receber o desconto\n");
        } else{
            printf("Você não está qualificado devido sua renda.\n");
        }    
        } else {
            printf("Você não está qualificado devido sua idade.\n");
        }
 
        return 0;
}