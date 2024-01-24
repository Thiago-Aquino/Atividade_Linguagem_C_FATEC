/* Função recursiva que calcule potência de a elevado a b (ab) usando multiplicação,
sendo a um double e b um inteiro maior ou igual a zero (unsigned). 
Use o programa abaixo para testar sua função. */
#include <stdio.h>

double pot(double a, unsigned int b){
	if (b==0) return 1;
	return (a * pot(a, b-1));
}

int main() {
  double a;
  unsigned int b;
  printf("\nDigite a e b: ");
  scanf("%lf %u", &a, &b);
  printf("\n%.2lf elevado a %u: %.2lf", a, b, pot(a, b));
  return 0;
}
