#include <stdio.h>
#include <stdlib.h>

void primo(int n) {
  for (int i = n-1; i = 2 ; i--) {
    if (n % i == 0) {
      printf("no es primo\n");
      exit(0);
    } else {
      printf("es primo\n");
      exit(0);
    }
  }
}

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  primo(n);
}
