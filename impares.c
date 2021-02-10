#include <stdlib.h>
#include <stdio.h>

// Escreva um programa, em C, que escreva
// todos os números ímpares entre 0 e 100

int main() {

  int numero = 0;

  while(numero < 100) {
    // É impar?
    if(numero % 2 == 1) {
      printf("%d\n", numero);
    }
    numero = numero + 1;
  }

  printf("O valor do número é %d\n", numero);

  return EXIT_SUCCESS;
}

/*
  +----+--------+
  | PL | numero |
  +----+--------+
  | 11 |      0 |
  | 13 |      0 |
  | 16 |      0 |
  | 11 |      1 |
  | 13 |      1 |
  | 14 |      1 |
  | 16 |      1 |
  | 11 |      2 |
  | 13 |      2 |
  | 16 |      2 |
  | 11 |      3 |
  | 13 |      3 |
  | 14 |      3 |
  | 16 |      3 |
  | 11 |      4 |
  | ........... |
  | 19 |    100 |
  | 21 |    100 |
  |   Terminou! |
  +----+--------+

  Terminal:
    1
    3
    5
    7
    9
    11
    ...
    O valor do número é 100

*/
