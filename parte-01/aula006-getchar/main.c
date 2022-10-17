#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{

  setlocale(LC_ALL, "Portuguese");

  char letra;

  printf("Agora é a hora de Digitar uma letra: ");
  // scanf("%c", &letra);
  letra = getchar();

  printf("A letra digitada foi: %c \n", letra);
  printf("à não tou afim# \n");

  return 0;
}