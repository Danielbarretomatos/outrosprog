#include <stdio.h>

int main(void) {
  
  float far,cel;

  printf("qual a temperatura em graus celsius: ");
  scanf("%f", &cel);
  far = (cel * 9/5) + 32;

  printf("A temperatura em Fahrenheir é de: %.1f F°", far);
  return 0;
  //By Daniel e Lucas

}