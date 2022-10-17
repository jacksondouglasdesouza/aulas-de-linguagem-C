#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  /* Faça um código que peça a idade, peso e altura de um usuário */

  char sexo;
  int idade;
  float peso, altura;

  printf("Digite sua idade: ");
  scanf("%d", &idade);
  printf("Digite seu peso: ");
  scanf("%f", &peso);
  printf("Digite sua altura: ");
  scanf("%f", &altura);
  printf("QUal é o seu sexo? [M] ou [F]: ");
  scanf(" %c", &sexo);

  printf("\nSua idade é: %d \n", idade);
  printf("Seu peso é: %.2f \n", peso);
  printf("Sua altura é: %.2f \n", altura);
  printf("Seu sexo é: %c \n", sexo);

  return 0;
}