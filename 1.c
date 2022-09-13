#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int array_min(int a[], int n){
  int min = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (a[i] < min) {
      min = a[i];
    }
  }
  printf("%d\n", min);
  return min;
}

int main(void) {
  int a[] = {22, 23, 24, 25};
  int min = 0;
  printf("%d\n", min);
  array_min(a, n);
}
