
#include <stdio.h>

int sum(int *array, int n) {
  int s = 0;
  for (int i=0; i<n; i++) {
    printf("added element : %d \n",i);
    s = s + array[i];
  }
  return s;
}

int main() {

  int n ;
  n = 10;
  int a[n];
  printf("Array created\n");
  for (int i=0; i<n; i++) {
    a[i] = i;
  }
  printf("Array filled\n");

  int b = sum(a,200000);
  printf("Sum computed\n");

  printf("The result of the sum is %d\n", b);

  return 0;
}
