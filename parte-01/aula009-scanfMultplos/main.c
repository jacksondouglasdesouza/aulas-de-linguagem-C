#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int a, b, c, d, e;

  printf("Digite 5 números inteiros: ");
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

  printf("Os números digitados foram: \n %d %d %d %d %d \n", a, b, c, d, e);

  return 0;
}