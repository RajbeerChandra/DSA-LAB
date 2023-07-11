#include <stdio.h>
int main() {
  int n;
  int arr[10];
  for (int i = 0; i < 10; ++i) 
  {
    printf("Enter number%d: ", i + 1);
    scanf("%d", &arr[i]);
  }
  for (int i = 1; i < 10; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }
  printf("Largest element = %d ", arr[0]);
  return 0;
}
