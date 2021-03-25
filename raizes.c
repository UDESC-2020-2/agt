#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Desenvolva um algoritmo que, dados os valores
// de a, b, e c, determine se existem raízes reais
// para a equação quatrática ax^2 + bx + c = 0

// Retorna o delta para os fatores dados
float delta(float a, float b, float c) {
  return b * b - 4 * a * c;
}

// Define se existem raízes reais para uma equação
// quadrática
bool existe_raiz(float a, float b, float c) {
  float d = delta(a, b, c);

  // Se d for maior ou igual a zero...
  if(d >= 0) {
    return true;
  }

  // Senão...
  return false;
}

// Retorna a primeira raíz real (se existir!) para os fatores
float primeira_raiz(float a, float b, float c) {
  float d = delta(a, b, c);
  return (-b + sqrt(d)) / (2 * a);
}

// Retorna a segunda raíz real (se existir!) para os fatores
float segunda_raiz(float a, float b, float c) {
  float d = delta(a, b, c);
  return (-b - sqrt(d)) / (2 * a);
}

int main() {
  float a, b, c;
  printf("Digite os valores de a, b e c:\n");
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);

  bool resultado = existe_raiz(a, b, c);

  if(resultado) {
    printf("Existem raízes reais!\n");

    float r1, r2;

    r1 = primeira_raiz(a, b, c);
    r2 = segunda_raiz(a, b, c);

    printf("Primeira raíz: %f\n", r1);
    printf("Segunda raíz: %f\n", r2);

  } else {
    printf("Não existem raízes reais!\n");
  }

  return EXIT_SUCCESS;
}
