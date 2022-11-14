#include <iostream>

int main(int argc, char ** argv) {
  float nota1;
  float nota2;
  float nota3;
  float nota4;
  float media;

  printf("Nota da primeira unidade: ");
  scanf("%f", &nota1);

  printf("Nota da segunda unidade: ");
  scanf("%f", &nota2);

  printf("Nota da terceira unidade: ");
  scanf("%f", &nota3);

  printf("Nota da quarta unidade: ");
  scanf("%f", &nota4);

  media = (nota1 + nota2 + nota3 + nota4) / 4;
  
  if(media > 7) {
    printf("Você está aprovado \n");
  }
  else {
    printf("Você está reprovado \n");
  }
  printf("A sua média é %f", media);
}
