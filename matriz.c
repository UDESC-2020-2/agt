#include <stdlib.h>
#include <stdio.h>

void mostrar(char matrix[4][4]);

int main() {

  char matrix[4][4] = {
    {'A', 'B', 'C', 'D'},
    {'E', 'F', 'G', 'H'},
    {'I', 'J', 'K', 'L'},
    {'M', 'N', 'O', 'P'}
  };

  // mostrar(matrix);

  // Qual será o conteúdo da matriz após
  // a execução desse laço?

  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      int aux = matrix[i][j];
      matrix[i][j] = matrix[i][3 - j];
      matrix[i][3 - j] = aux;
    }
  }

  // mostrar(matrix);

  return EXIT_SUCCESS;
}

void mostrar(char matrix[4][4]) {
  // Para cada linha...
  for(int i = 0; i < 4; i++) {
    // Para cada coluna...
    for(int j = 0; j < 4; j++) {
      printf("%c ", matrix[i][j]);
    }
    printf("\n");
  }
}
