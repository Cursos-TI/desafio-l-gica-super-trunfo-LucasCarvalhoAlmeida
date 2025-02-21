#include <stdio.h>

int main() {
  
    int idade;
    float altura;

    printf("Qual a sua idade?\n");
    scanf("%d", &idade);
    printf("Qual a sua altura?\n");
    scanf("%f", &altura);

    if(idade >= 18 && idade <= 35 && altura >= 1.70) {
        printf("Você está na faixa etéria e tem altura correta altura.\n");
    } else{
        printf("Você não atende os critérios.\n");
    }





 return 0;

}