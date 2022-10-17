#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");

  float n1, n2, n3, n4, media;

  printf("Digite a primeira nota: ");
  scanf("%f", &n1);
  printf("Digite a segunda nota: ");
  scanf("%f", &n2);
  printf("Digite a terceira nota: ");
  scanf("%f", &n3);
  printf("Digite a quarta nota: ");
  scanf("%f", &n4);

  media = (n1 + n2 + n3 + n4) / 4;
  float meupi = media / 3.1415;

  printf("Sua média é: %.2f", media);

  printf("\nA sua média equivale a %.2f partes de PI\n", meupi);

  return 0;
}