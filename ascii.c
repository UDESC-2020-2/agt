#include <stdlib.h>
#include <stdio.h>

// Considerando que o primeiro caracter visível
// da tabela ASCII é o 32, e o último é 126,
// faça um programa que imprima a tabela ASCII

int main() {

  for(int i = 32; i < 127; i++) {
    // Printamos o mesmo número "i" QUATRO VEZES, como um número decimal,
    // um número octal, um número hexadecimal, e um caractere :)
    printf("Caracter de número %03d (oct %03o, hex %02x): %c\n", i, i, i, i);
  }

  return EXIT_SUCCESS;
}
