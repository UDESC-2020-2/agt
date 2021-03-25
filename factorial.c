#include <stdlib.h>
#include <stdio.h>

// Fatorial:
//   5! = 5 * 4 * 3 * 2 * 1
//      = 5 * 4!
//
//   4! = 4 * 3! ...
//
//   3! = 3 * 2! ...

int factorialA(int n) {
  int resultado = 1;

  for(int i = 1; i <= n; i++) {
    resultado *= i;
  }

  return resultado;
}

int factorialB(int n) {
  if(n < 2) {
    return 1;
  }

  return n * factorialB(n - 1);
}

int main() {

  /* for(int i = 0; i < 10; i++) {
    printf("factorialA(%d) = %d\n",
      i, factorialA(i));
    printf("factorialB(%d) = %d\n",
      i, factorialB(i));
  } */

  const int i = 5;

  printf("factorialB(%d) = %d\n",
      i, factorialB(i));

  return EXIT_SUCCESS;
}
