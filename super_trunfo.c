#include <stdio.h>
#include <string.h>

int main(){
  char estado1 = "A";
  int codigo1 = 1;
  char cidade1[20] = "A";
  int populacao1 = 1;
  float area1 = 0.00;
  float pib1 = 0.00;
  int pontos_turisticos1 = 0;
  char estado1 = "A";
  int codigo1 = 1;
  char cidade1[20] = "A";
  int populacao1 = 1;
  float area1 = 0.00;
  float pib1 = 0.00;
  int pontos_turisticos1 = 0;
  
  char estado2 = "A";
  int codigo2 = 1;
  char cidade2[20] = "A";
  int populacao2 = 1;
  float area2 = 0.00;
  float pib2 = 0.00;
  int pontos_turisticos2 = 0;

  printf("---CARTA 1---:\n");
  printf("Digite uma letra de 'A' a 'H' para representar o estado:\n");
  scanf("%c",&estado1);
  printf("Digite um número de 01 a 04:\n");
  scanf("%d",&codigo1);
  getchar();
  printf("Digite o nome da cidade:\n");
  fgets(cidade1, 20, stdin);
  cidade1[strcspn(cidade1, "\n")] = '\0';
  printf("Digite a população da cidade:\n");
  scanf("%d",&populacao1);
  printf("Digite a área da cidade:\n");
  scanf("%f",&area1);
  printf("Digite o pib da cidade:\n");
  scanf("%f",&pib1);
  printf("Digite o número de pontos turísticos da cidade:\n");
  scanf("%d",&pontos_turisticos1);

  printf("---CARTA 2---:\n");
  printf("Digite uma letra de 'A' a 'H' para representar o estado:\n");
  scanf("%c",&estado2);
  printf("Digite um número de 01 a 04:\n");
  scanf("%d",&codigo2);
  getchar();
  printf("Digite o nome da cidade:\n");
  fgets(cidade2, 20, stdin);
  cidade2[strcspn(cidade2, "\n")] = '\0';
  printf("Digite a população da cidade:\n");
  scanf("%d",&populacao2);
  printf("Digite a área da cidade:\n");
  scanf("%f",&area2);
  printf("Digite o pib da cidade:\n");
  scanf("%f",&pib2);
  printf("Digite o número de pontos turísticos da cidade:\n");
  scanf("%d",&pontos_turisticos2);
  return 0;
}