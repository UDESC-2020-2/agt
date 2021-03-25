#include <stdlib.h>
#include <stdio.h>

// Escreva uma função que calcula um número de fibonacci
// Sequência:
//   0º: 0      (fixo)
//   1º: 1      (fixo)
//   2º: 1      (0º + 1º)
//   3º: 2      (1º + 2º)
//   4º: 3      (2º + 3º)
//   5º: 5      (3º + 4º)
//   6º: 8      (4º + 5º)
//   7º: 13     (5º + 6º)
//   8º: 21...

int fibonacciA(int n) {
  int a = 0; // Atual
  int b = 1; // Próximo

  // Até chegarmos no n...
  for(int i = 0; i < n; i++) {
    // Auxiliar...
    int soma = a + b;

    // Atualiza os valores!
    a = b;
    b = soma;
  }

  return a;
}

int fibonacciB(int n) {
  // Condição de parada!
  if(n < 2) {
    return n;
  }

  // Se cair aqui, n >= 2...
  return fibonacciB(n - 1) +
           fibonacciB(n - 2);
}

int main() {
  const int i = 5;
  printf("fibonacciB(%d) = %d\n", i,
    // Retorna o valor pelo índice :)
    fibonacciB(i));

  return EXIT_SUCCESS;
}
