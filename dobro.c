// Leia um número e informe o seu dobro.
#include <stdlib.h>
#include <stdio.h>

int main() {
  // Declara um número
  int numero;

  // Solicita um número ao usuário
  printf("Digite um número: ");

  // Lê um número do terminal
  scanf("%d", &numero);

  // Dobra o valor
  int dobro = numero + numero;

  // Imprime no terminal
  printf("Dobro do valor: %d\n", dobro);

  return 0;
}
