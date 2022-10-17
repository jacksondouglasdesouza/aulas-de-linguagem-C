#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  printf("Bem vindo ao mundo da Linguagem C!\nEstamos fazendo um teste de codificação.\n");
  printf("Agora vamos fazer uma soma de dois números inteiros.\n");

  int num_1 = 30 / 2,
      num_2 = 30 * 2,
      soma = num_1 + num_2;

  printf("A soma de %d + %d é igual a %d.\n", num_1, num_2, soma);

    return 0;
}