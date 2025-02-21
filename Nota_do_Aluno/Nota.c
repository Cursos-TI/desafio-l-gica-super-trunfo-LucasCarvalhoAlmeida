#include <stdio.h>

int main(){

  int nota;

  printf("Digite sua nota.\n");
  scanf("%d", &nota);

  if(nota >= 90){
    printf("Parabéns você tirou A!\n");
  } else if(nota >= 80){
    printf("Parabéns você tirou B!\n");
  } else if(nota >= 70){
    printf("Você tirou C.\n");
  } else if(nota >=60){
    printf("Você tirou D, precisa melhorar.\n");
  } else if(nota >= 50){
    printf("Você tirou E, precisa melhorar!\n");
  } else{
    printf("Você tirou F, precisa melhorar muito!\n");
  }

  return 0;

}