#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


char stringalreves(char *s, int l){
  l--;
  while (l != -1) {
    printf("%c", s[l]);
    l--;
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  char *s = argv[1];
  int l = 0;
  while (s[l] != 0) {
    l++;
  }
  printf("invertido: ");
  stringalreves(s, l);
  return 0;
}
