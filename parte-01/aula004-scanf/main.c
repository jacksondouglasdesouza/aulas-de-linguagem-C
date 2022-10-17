#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");

  // [SCANF ] A função scanf é uma função de entrada de dados na Linguagem C.
  // Variável é um espaço na memória do computador que armazena um valor.

  // Tipagem da Variável --->>  // Nome Variável --->> // Atribuição --->. Valor atribuído a variável.

  // Int armazena valores inteiros.
  int
      numeroA = 25,
      numeroB = 35,
      numeroC = 85;

  // Float armazena valores com casas decimais.
  float
      nunFloat_a = 25.5,
      nunFloat_b = 35.5,
      nunFloat_c = 85.5;

  // Char armazena apenas um caractere.
  char
      letraA = 'A',
      letraB = 'B',
      letraC = 'C';

  printf("\n O valor inteiro da Variável numeroA é: %d", numeroA);
  printf("\n O valor Fracionário da Variável nunFloat_b é: %f", nunFloat_b);
  printf("\n O valor Caractere da Variável letraC é: %c", letraC);

  // Agora vamos receber valores do usuário.

  int
      nunUsuario_a = 0,
      nunUsuario_b = 0;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &nunUsuario_a);

  printf("\n Digite outro valor inteiro: ");
  scanf("%d", &nunUsuario_b);

  printf("\n O primeiro valor inteiro digitado pelo usuário  é: %d \n", nunUsuario_a);
  printf("\n O segundo valor inteiro digitado pelo usuário  é: %d \n", nunUsuario_b);

  return 0;
}