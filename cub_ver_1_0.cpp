#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int z = 0;

void cub(int** a, int n, int b, int k, int i, int j) {
	int i1, j1;
	
	if (z == 0 && a[0][n-1]==0 && ((a[0][n-2]==n*n-1 || a[1][n-1]==n*n-1) || (a[0][n-2]==0 || a[1][n-1]==0))){
		if (i < (n - 1) && a[i + 1][j] == 0 && k != 1) {
			a[i+1][j] = b;
			
			if (k == 0) {
				cub(a, n, b + 1, k = 1, i + 1, j);
				k = 0;
			}
			else if (k == -1) {
				cub(a, n, b + 1, k = 0, i + 1, j);
				k = -1;
			}
			else cub(a, n, b + 1, k, i + 1, j);
			if (z == 0) a[i + 1][j] = 0;
		}

		if (i > 0 && a[i - 1][j] == 0 && k != -1) {
			a[i-1][j] = b;
			if (a[0][n - 1] == n * n && k == 1) z = 1;

			if (k == 0) {
				cub(a, n, b + 1, k = -1, i - 1, j);
				k = 0;
			}
			else if (k == 1) {
				cub(a, n, b + 1, k = 0, i - 1, j);
				k = 1;
			}
			else cub(a, n, b + 1, k, i - 1, j);
			if (z == 0) a[i - 1][j] = 0;
		}

		if (j < (n - 1) && a[i][j + 1] == 0 && k != -11) {
			a[i][j+1] = b;
			if (a[0][n - 1] == n * n && k == 11) z = 1;

			if (k == 0) {
				cub(a, n, b + 1, k = -11, i, j + 1);
				k = 0;
			}
			else if (k == 11) {
				cub(a, n, b + 1, k = 0, i, j + 1);
				k = 11;
			}
			else cub(a, n, b + 1, k, i, j + 1);
			if (z == 0) a[i][j + 1] = 0;
		}

		if (j > 0 && a[i][j - 1] == 0 && k != 11) {
			a[i][j-1] = b;

			if (k == 0 && z == 0) {
				cub(a, n, b + 1, k = 11, i, j - 1);
				k = 0;
			}
			else if (k == -11 && z == 0) {
				cub(a, n, b + 1, k = 0, i, j - 1);
				k = -11;
			}
			else cub(a, n, b + 1, k, i, j - 1);
			if (z==0) a[i][j - 1] = 0;
		}
	}
}

int main() {
	int i, n, j, k = 0, b = 2;
	scanf("%d", &n);

	int** a = (int**)malloc(n * sizeof(*a));
	for (i = 0; i < n; i++)
		a[i] = (int*)malloc(n * sizeof(a));

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = 0;
	a[0][0] = 1;
	i = 0; j = 0;
	if (n != 1) {
		cub(a, n, b, k, i, j);
		if (a[0][1] == 0 && a[1][0] == 0) printf("Prostite");
		else
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++)
					printf("%3d ", a[i][j]);
				printf("\n");
			}
	}
	else printf("1");
}