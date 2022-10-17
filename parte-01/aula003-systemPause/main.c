#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");

  // A função system("pause"). O comando "pause" é um comando que só funciona no sistema operacional Windows

  printf("[ PRINTF ] Essa é uma função de saída de dados na Linguagem C!\n");

  printf("\tRetornando o número de caracteres impressos: %d \t", printf("Doug"));

  float valor1 = 30.5,
        valor2 = 20.5,
        soma = valor1 + valor2;

  if (valor1 > valor2)
  {
    printf("\n Valor1 é maior que valor2");
  }
  else
  {
    printf("\n Valor2 é maior que valor1");
  }

  // O ideal é usar o getchar() para pausar o programa, ele funciona em qualquer sistema operacional.

  printf("\n \n Digite enter para continuar!");
  /* getchar(); */

  return 0;
}