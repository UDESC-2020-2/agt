#include <stdlib.h>
#include <stdio.h>

// Leia duas notas, calcule a média,
// e escreva se o aluno foi aprovado
// ou reprovado, considerando a média
// para aprovação como 5.

int main() {
  // Declara as notas
  float nota_a;
  float nota_b;

  // Solitia e lê a primeira nota
  printf("Digite a primeira nota: ");
  scanf("%f", &nota_a);

  // Solicita e lê a segunda nota
  printf("Digite a segunda nota: ");
  scanf("%f", &nota_b);

  // Calcula a média
  float media = (nota_a + nota_b) / 2;

  // Foi aprovado?
  if(media >= 5.0) {
    // Foi aprovado!
    printf("Parabéns, você foi aprovado!\n");
  } else {
    // reprovado
    printf("Boa sorte no exame!\n");
  }

  return 0;
}
