#include <stdio.h>
int main() {
  int a[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
    {
      for (int j = 0; j < c; ++j)
        {
          printf("Enter element a[%d][%d]: ", i + 1, j + 1);
          scanf("%d", &a[i][j]);
        }
    }
  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
    {
      for (int j = 0; j < c; ++j)
        {
          printf("%d ", a[i][j]);
        }
        printf("\n");
    }

  //printing transposed matrix
  for (int j = 0; j < c; j++)
  {
    for (int i = 0; i < r; i++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
return 0;
  }
