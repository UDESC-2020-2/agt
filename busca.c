#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Preencher um vetor com números inteiros; solicitar um
// número do teclado. Pesquisar se esse número existe no
// vetor. Se existir, imprimir em qual posição ele existe,
// e, senão, informar que ele não existe

int main() {

  int entrada;
  int vetor[5] = { 42, 51, 99, 66, 10 };

  printf("Digite um número: ");
  scanf("%d", &entrada);

  // Procurar o número no vetor!
  bool verifica = false;
  for(int i = 0; i < 5; i++) {
    if(vetor[i] == entrada) {
      // Opa, achamos! :D
      printf("O número existe na posição %d!\n", i);
      verifica = true;
      // Não precisamos mais procurar! Termina o for!
      break;
    }
  }

  if(verifica == false) {
    printf("Puts, nunca achamos!\n");
  }

  return EXIT_SUCCESS;
}
