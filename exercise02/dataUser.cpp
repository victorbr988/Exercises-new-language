#include <iostream>

int main(int argc, char** argv){
  char nome[30];
  char endereco[30];
  int idade;

  printf("Nome \n");
  scanf("%s", &nome);

  printf("Endereco \n");
  scanf("%s", &endereco);

  printf("Idade \n");
  scanf("%d", &idade);

  printf("Nome: %s \n", nome);
  printf("Endereco: %s \n", endereco);
  printf("Idade: %d", idade);
}