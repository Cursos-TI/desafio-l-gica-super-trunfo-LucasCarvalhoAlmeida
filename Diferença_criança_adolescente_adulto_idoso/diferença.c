#include <stdio.h>

int main(){

 int idade;

 printf("Digite sua idade.\n");
 scanf("%d", &idade);

 if(idade <= 12){
    printf("Você é criança!\n");
 } else if(idade >= 12 && idade <=18){
    printf("Você é adolescente.\n");
 } else if(idade >= 18 && idade < 60){
    printf("Você é adulto.\n");
 } else {
    printf("Você é idoso.\n");
 }


 return 0;

}