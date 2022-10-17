#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  /*Explique através de comentário, como se comporta o relacionamento do pc com o buffer do teclado no código a seguir: */

  char letraA, letraB;

  printf("Digite duas letra: ");
  scanf("%c%c", &letraA, &letraB);

  /*Em seguida comente como você faria para resolver este problema.*/

  printf("As letras digitadas foram: %c %c \n", letraA, letraB);

  /*NO CÓDIGO ACIMA A COMUNICAÇÃO FUNCIONA DA SEGUINTE MANEIRA: */

  // Usuário digita:
  // buffer do teclado => letraA + [ espaço ou enter ]
  // Primeiro - computador pergunta para o buffer do teclado: "LetraA é um caractere válido, então ele armazena na memória, pois letraA é um caractere válido.

  // Segundo - Clicar em espaço ou enter, computador pergunta para o buffer do teclado: "Espaço ou enter é um caractere válido, então ele armazena na memória, pois espaço ou enter é um caractere válido. Fazendo com que ele finalize o programa, pois o espaço ou enter armazenado no buffer do teclado é um caractere válido e é considerado um caractere.

  // Solução - No scanf("%c-[separar os caracteres]-%c", &letraA, &letraB); Ao separar o caractere identificador de tipo de variável, o buffer do teclado é automaticamente limpo, fazendo com que o usuário digite novamente o caractere, e o computador possa armazenar na memória.

  return 0;
}