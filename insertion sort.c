#include <stdio.h>
int main()
{
  int n, array[100], c, d, t, flag = 0,time=0, space=0, count=0;

  printf("Enter number of elements\n");
  scanf("%d", &n);
  space += (n*4);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++){
    scanf("%d", &array[c]);
    count++;
}
  for (c = 1 ; c <= n - 1; c++) {
    t = array[c];

    for (d = c - 1 ; d >= 0; d--) {
      if (array[d] > t) {
        array[d+1] = array[d];
        flag = 1;
        count+3;
      }
      else
        break;
    }count++;
    if (flag)
      array[d+1] = t;
  }
  count++;

  printf("Sorted list in ascending order:\n");

  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", array[c]);
  }count++;

    printf("\nSpace Complexity: %d", space);
    printf("\nTime Complexity: %d", count);

  return 0;
}
