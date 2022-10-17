#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  /* Altere a ordem de entradas e impressões deixando a saída do sexo em ultimo */

  char sexo;
  int idade;
  float peso, altura;

  printf("Digite sua idade, seu peso, sua altura e seu sexo: ");
  scanf("%d%f%f%c", &idade, &peso, &altura, &sexo);

  printf("\nSua idade é: %d \n", idade);
  printf("Seu peso é: %.2f \n", peso);
  printf("Sua altura é: %.2f \n", altura);
  printf("Seu sexo é: %c \n", sexo);

  /* NOTE QUE NESTA DECLARAÇÃO o scanf("%d%f%f%c", &idade, &peso, &altura, &sexo) o sexo é ignorando da impressão, pois ele considera o espaço e o enter como um caractere ignorando assim a entrada de dados do Sexo, pois assume que já foi atribuído este valor apos o usuário apertar o enter ou espaço para declarar o seu sexo.*/

  /* Para resolver este problema é preciso dar um espaço entre os caracteres de identificação de tipo de variável no scanf("%d%f%f  %c", &idade, &peso, &altura, &sexo);*/

  printf("Digite sua idade, seu peso, sua altura e seu sexo: ");
  scanf("%d%f%f %c", &idade, &peso, &altura, &sexo); /* Testei e resultou positivo*/

  printf("\nSua idade é: %d \n", idade);
  printf("Seu peso é: %.2f \n", peso);
  printf("Sua altura é: %.2f \n", altura);
  printf("Seu sexo é: %c \n", sexo);

  return 0;
}