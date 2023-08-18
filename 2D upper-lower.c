// C++ program to calculate the sum
// of upper and lower triangle
#include <bits/stdc++.h>
using namespace std;

/*function to calculate sum*/
void sum(int mat[3][3], int r, int c)
{
	int i, j;
	int upper_sum = 0;
	int lower_sum = 0;
	
	/*to calculate sum of upper triangle*/
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++) {
			if (i <= j) {
				upper_sum += mat[i][j];
			}
		}

	printf("Upper sum is %d\n", upper_sum);
	
	/*to calculate sum of lower*/
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++) {
			if (j <= i) {
				lower_sum += mat[i][j];
			}
		}

	printf("Lower sum is %d", lower_sum);
}

/*driver function*/
int main()
{
	int r = 3;
	int c = 3;

	/*giving the matrix*/
	int mat[3][3] = {{ 6, 5, 4 },
					{ 1, 2, 5 },
					{ 7, 9, 7 }};
					
	/*calling the function*/
	sum(mat, r, c);
	return 0;
}
