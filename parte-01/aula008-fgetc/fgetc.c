#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  char letra;

  printf("Agora é a hora de Digitar uma letra: ");
  letra = fgetc(stdin); // leitura de arquivo

  printf("A letra digitada foi: %c \n", letra);
  printf("à não tou afim# \n");

  return 0;
}