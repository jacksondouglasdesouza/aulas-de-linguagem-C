#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");

  // printf é uma função de saída de dados
  printf("[ PRINTF ] Essa é uma função de saída de dados na Linguagem C!\n");

  printf("\tRetornando o número de caracteres impressos: %d \t", printf("Doug"));

  return 0;
}