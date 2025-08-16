#include <stdio.h>

int main(){
  char estado = "A";
  int codigo = 1;
  char cidade[20] = "A";
  int populacao = 1;
  float area = 0.00;
  float pib = 0.00;
  int pontos = 0;
  printf("Digite uma letra para o Estado:\n");
  scanf("%c",&estado);
  printf("Digite um número para o código do Estado:\n");
  scanf('%d',&codigo);
  return 0;
}