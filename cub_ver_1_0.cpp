#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <time.h>

int I, J, K;
int sum;

int i, j, k;

int cub_9(int** table, int flag, int n, int** tab) {
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%3d ", table[i][j]);
		printf("\n");
	}
	printf("\n flag = %d\n", flag);*/
	int f;


	//вызовы паттернов (n<10)
  	if (tab != 0) {
		if (sum != 9 && table[0][n - 1] == 0) {
			//центровыe
			if (table[0][n - 1] != n * n && flag == 13 || flag == 27) {
				if (table[0][n - 1] != n * n && flag == 13 && K != n / 3 - 1 && tab[J][K + 1] - tab[J][K] == 1) {
					k++;
					K++;
					////c_1(table, &i, &j, &k);

					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j][k--] = i++;
					table[j][k] = i++;

				}
				else if (J != n / 3 - 1 && J != 0 && tab[J - 1][K] - tab[J][K] == 1) {
					j++;
					J++;
					////c_1(table, &i, &j, &k);

					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j][k--] = i++;
					table[j][k] = i++;

				}
				sum -= 9;
				f = flag;
				int result = cub_9(table, 17, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					////c_11(table, &i, &j, &k);

					i = i - 9;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k] = 0;

					sum += 9;
					if (f == 13) {
						K--;
						k--;
					}
					else {
						J--;
						j--;
					}
				}
			}
			if (table[0][n - 1] != n * n && flag == 17 && J != n / 3 - 1 && tab[J + 1][K] - tab[J][K] == 1) {
				j++;
				J++;
				////c_1(table, &i, &j, &k);

				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 47, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					////c_11(table, &i, &j, &k);

					i = i - 9;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k] = 0;

					sum += 9;
					j--;
					J--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 13 || flag == 27) {
				if (table[0][n - 1] != n * n && flag == 13 && K != n / 3 - 1 && tab[J][K + 1] - tab[J][K] == 1) {
					k++;
					K++;
					////c_4(table, &i, &j, &k);

					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j--][k] = i++;
					table[j][k] = i++;

				}
				else if (J != n / 3 - 1 && J != n / 3 - 1 && tab[J + 1][K] - tab[J][K] == 1) {
					j++;
					J++;
					////c_4(table, &i, &j, &k);

					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j--][k] = i++;
					table[j][k] = i++;

				}

				sum -= 9;
				f = flag;
				int result = cub_9(table, 23, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					////c_44(table, &i, &j, &k);

					i = i - 9;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j][k] = 0;

					sum += 9;
					if (f == 13) {
						K--;
						k--;
					}
					else {
						J--;
						j--;
					}
				}
			}
			if (table[0][n - 1] != n * n && flag == 23 && K != n / 3 - 1 && tab[J][K + 1] - tab[J][K] == 1) {
				k++;
				K++;
				////c_4(table, &i, &j, &k);

				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 33, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					////c_44(table, &i, &j, &k);

					i = i - 9;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j][k] = 0;

					sum += 9;
					k--;
					K--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 29 || flag == 31) {
				if (table[0][n - 1] != n * n && flag == 31 && K != 0 && tab[J][K - 1] - tab[J][K] == 1) {
					k--;
					K--;
					////c_2(table, &i, &j, &k);

					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j][k++] = i++;
					table[j][k] = i++;

				}
				else if (J != n / 3 - 1 && J != n / 3 - 1 && tab[J + 1][K] - tab[J][K] == 1) {
					j++;
					J++;
					////c_2(table, &i, &j, &k);

					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j][k++] = i++;
					table[j][k] = i++;

				}
				sum -= 9;
				f = flag;
				int result = cub_9(table, 39, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					////c_22(table, &i, &j, &k);

					i = i - 9;

					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;


					table[j][k] = 0;

					sum += 9;
					if (f == 31) {
						K++;
						k++;
					}
					else {
						J--;
						j--;
					}
				}
			}
			if (table[0][n - 1] != n * n && flag == 39 && J != n / 3 - 1 && tab[J + 1][K] - tab[J][K] == 1) {
				j++;
				J++;
				////c_2(table, &i, &j, &k);

				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 49, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					////c_22(table, &i, &j, &k);

					i = i - 9;

					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;


					table[j][k] = 0;

					sum += 9;
					j--;
					J--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 29 || flag == 31) {
				if (table[0][n - 1] != n * n && flag == 31 && K != 0 && tab[J][K - 1] - tab[J][K] == 1) {
					k--;
					K--;
					////c_8(table, &i, &j, &k);

					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j--][k] = i++;
					table[j][k] = i++;

				}
				else if (J != n / 3 - 1 && J != n / 3 - 1 && tab[J + 1][K] - tab[J][K] == 1) {
					j++;
					J++;
					////c_8(table, &i, &j, &k);

					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j--][k] = i++;
					table[j][k] = i++;

				}
				sum -= 9;
				f = flag;
				int result = cub_9(table, 21, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					////c_88(table, &i, &j, &k);

					i = i - 9;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j][k] = 0;

					sum += 9;
					if (f == 31) {
						K--;
						k++;
					}
					else {
						J--;
						j--;
					}
				}
			}
			if (table[0][n - 1] != n * n && flag == 21 && K != 0 && tab[J][K - 1] - tab[J][K] == 1) {
				k--;
				K--;
				////c_8(table, &i, &j, &k);

				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 11, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					////c_88(table, &i, &j, &k);

					i = i - 9;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j][k] = 0;

					sum += 9;
					K++;
					k++;
				}
			}
			if (table[0][n - 1] != n * n && flag == 19 || flag == 41) {
				if (table[0][n - 1] != n * n && flag == 19 && K != n / 3 - 1 && tab[J][K + 1] - tab[J][K] == 1) {
					k++;
					K++;
					////c_3(table, &i, &j, &k);

					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j++][k] = i++;
					table[j][k] = i++;

				}
				else if (j != 0 && J != 0 && tab[J - 1][K] - tab[J][K] == 1) {
					j--;
					J--;
					////c_3(table, &i, &j, &k);

					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j++][k] = i++;
					table[j][k] = i++;

				}
				sum -= 9;
				f = flag;
				int result = cub_9(table, 49, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					////c_33(table, &i, &j, &k);

					i = i - 9;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;

					table[j][k] = 0;

					sum += 9;
					if (f == 19) {
						K--;
						k--;
					}
					else {
						J++;
						j++;
					}
				}
			}
			if (table[0][n - 1] != n * n && flag == 49 && K != n / 3 - 1 && tab[J][K + 1] - tab[J][K] == 1) {
				k++;
				K++;
				////c_3(table, &i, &j, &k);

				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 39, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					////c_33(table, &i, &j, &k);

					i = i - 9;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;

					table[j][k] = 0;

					sum += 9;
					k--;
					K--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 19 || flag == 41) {
				if (table[0][n - 1] != n * n && flag == 19 && K != n / 3 - 1 && tab[J][K + 1] - tab[J][K] == 1) {
					k++;
					K++;
					////c_5(table, &i, &j, &k);

					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j][k--] = i++;
					table[j][k] = i++;

				}
				else if (j != 0 && J != 0 && tab[J - 1][K] - tab[J][K] == 1) {
					j--;
					J--;
					////c_5(table, &i, &j, &k);

					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j][k--] = i++;
					table[j][k] = i++;

				}
				sum -= 9;
				f = flag;
				int result = cub_9(table, 11, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					////c_55(table, &i, &j, &k);

					i = i - 9;

					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k] = 0;

					sum += 9;
					if (f == 19) {
						K--;
						k--;
					}
					else {
						J++;
						j++;
					}
				}
			}
			if (table[0][n - 1] != n * n && flag == 11 && J != 0 && tab[J - 1][K] - tab[J][K] == 1) {
				j--;
				J--;
				////c_5(table, &i, &j, &k);

				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 21, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					////c_55(table, &i, &j, &k);

					i = i - 9;

					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k] = 0;

					j++;
					J++;
					sum += 9;
				}
			}
			if (table[0][n - 1] != n * n && flag == 43 || flag == 37) {
				if (table[0][n - 1] != n * n && flag == 37 && K != 0 && tab[J][K - 1] - tab[J][K] == 1) {
					k--;
					K--;
					////c_6(table, &i, &j, &k);

					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j][k++] = i++;
					table[j][k] = i++;

				}
				else if (j != 0 && J != 0 && tab[J - 1][K] - tab[J][K] == 1) {
					j--;
					J--;
					////c_6(table, &i, &j, &k);

					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j][k++] = i++;
					table[j][k] = i++;

				}
				sum -= 9;
				f = flag;
				int result = cub_9(table, 33, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					////c_66(table, &i, &j, &k);

					i = i - 9;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k] = 0;

					sum += 9;
					if (f == 37) {
						K++;
						k++;
					}
					else {
						J++;
						j++;
					}
				}
			}
			if (table[0][n - 1] != n * n && flag == 33 && J != 0 && tab[J - 1][K] - tab[J][K] == 1) {
				j--;
				J--;
				////c_6(table, &i, &j, &k);

				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 23, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					////c_66(table, &i, &j, &k);

					i = i - 9;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k] = 0;

					sum += 9;
					j++;
					J++;
				}
			}
			if (table[0][n - 1] != n * n && flag == 43 || flag == 37) {
				if (table[0][n - 1] != n * n && flag == 37 && K != 0 && tab[J][K - 1] - tab[J][K] == 1) {
					k--;
					K--;
					////c_7(table, &i, &j, &k);

					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j++][k] = i++;
					table[j][k] = i++;

				}
				else if (j != 0 && J != 0 && tab[J - 1][K] - tab[J][K] == 1) {
					j--;
					J--;
					////c_7(table, &i, &j, &k);

					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j++][k] = i++;
					table[j][k] = i++;

				}
				sum -= 9;
				f = flag;
				int result = cub_9(table, 47, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					////c_77(table, &i, &j, &k);

					i = i - 9;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j][k] = 0;

					sum += 9;
					if (f == 37) {
						K++;
						k++;
					}
					else {
						J++;
						j++;
					}
				}
			}
			if (table[0][n - 1] != n * n && flag == 47 && K != 0 && tab[J][K - 1] - tab[J][K] == 1) {
				k--;
				K--;
				////c_7(table, &i, &j, &k);

				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 17, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					////c_77(table, &i, &j, &k);

					i = i - 9;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j][k] = 0;

					sum += 9;
					k++;
					K++;
				}
			}

			//зигзаги
			if (table[0][n - 1] != n * n && flag == 17 && J != n / 3 - 1 && tab[J + 1][K] - tab[J][K] == 1) {
				j++;
				J++;
				//zzHOR_1(table, &i, &j, &k);

				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 39, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					////zzHOR_11(table, &i, &j, &k);

					i = i - 9;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j][k] = 0;

					sum += 9;
					j--;
					J--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 11 && J != 0 && tab[J - 1][K] - tab[J][K] == 1) {
				j--;
				J--;
				//zzHOR_2(table, &i, &j, &k);

				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 33, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					//zzHOR_22(table, &i, &j, &k);

					i = i - 9;

					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j][k] = 0;

					j++;
					J++;
					sum += 9;
				}
			}
			if (table[0][n - 1] != n * n && flag == 33 && J != 0 && tab[J - 1][K] - tab[J][K] == 1) {
				j--;
				J--;
				//zzHOR_3(table, &i, &j, &k);

				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 11, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					//zzHOR_33(table, &i, &j, &k);

					i = i - 9;

					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j][k] = 0;

					j++;
					J++;
					sum += 9;
				}
			}
			if (table[0][n - 1] != n * n && flag == 39 && J != n / 3 - 1 && tab[J + 1][K] - tab[J][K] == 1) {
				j++;
				J++;
				//zzHOR_4(table, &i, &j, &k);

				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 17, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					//zzHOR_44(table, &i, &j, &k);

					i = i - 9;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j][k] = 0;

					sum += 9;
					j--;
					J--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 23 && K != n / 3 - 1 && tab[J][K + 1] - tab[J][K] == 1) {
				k++;
				K++;
				//zzVER_1(table, &i, &j, &k);

				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 49, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					//zzVER_11(table, &i, &j, &k);

					i = i - 9;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k] = 0;

					sum += 9;
					k--;
					K--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 49 && K != n / 3 - 1 && tab[J][K + 1] - tab[J][K] == 1) {
				k++;
				K++;
				//zzVER_2(table, &i, &j, &k);

				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 23, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					//zzVER_22(table, &i, &j, &k);

					i = i - 9;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k] = 0;

					sum += 9;
					k--;
					K--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 47 && K != 0 && tab[J][K - 1] - tab[J][K] == 1) {
				k--;
				K--;
				//zzVER_3(table, &i, &j, &k);

				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 21, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					//zzVER_33(table, &i, &j, &k);

					i = i - 9;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k] = 0;

					sum += 9;
					k++;
					K++;
				}
			}
			if (table[0][n - 1] != n * n && flag == 21 && K != 0 && tab[J][K - 1] - tab[J][K] == 1) {
				k--;
				K--;
				//zzVER_4(table, &i, &j, &k);

				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 47, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					//zzVER_44(table, &i, &j, &k);

					i = i - 9;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k] = 0;

					sum += 9;
					k++;
					K++;
				}
			}

			//обходные 
			if (table[0][n - 1] != n * n && flag == 49 && K != n / 3 - 1 && tab[J][K + 1] - tab[J][K] == 1) {
				k++;
				K++;
				//o_1(table, &i, &j, &k);

				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 11, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					//o_11(table, &i, &j, &k);

					i = i - 9;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j][k] = 0;

					sum += 9;
					k--;
					K--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 47 && K != 0 && tab[J][K - 1] - tab[J][K] == 1) {
				k--;
				K--;
				//o_2(table, &i, &j, &k);

				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 33, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					//o_22(table, &i, &j, &k);

					i = i - 9;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;

					table[j][k] = 0;

					sum += 9;
					k++;
					K++;
				}
			}
			if (table[0][n - 1] != n * n && flag == 33 && J != 0 && tab[J - 1][K] - tab[J][K] == 1) {
				j--;
				J--;
				//o_3(table, &i, &j, &k);

				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 47, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					//o_33(table, &i, &j, &k);

					i = i - 9;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k] = 0;

					sum += 9;
					j++;
					J++;
				}
			}
			if (table[0][n - 1] != n * n && flag == 39 && J != n / 3 - 1 && tab[J + 1][K] - tab[J][K] == 1) {
				j++;
				J++;
				//o_4(table, &i, &j, &k);

				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 21, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					//o_44(table, &i, &j, &k);

					i = i - 9;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k] = 0;

					sum += 9;
					j--;
					J--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 23 && K != n / 3 - 1 && tab[J][K + 1] - tab[J][K] == 1) {
				k++;
				K++;
				//o_5(table, &i, &j, &k);

				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 17, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					//o_55(table, &i, &j, &k);

					i = i - 9;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j][k] = 0;

					sum += 9;
					k--;
					K--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 21 && K != 0 && tab[J][K - 1] - tab[J][K] == 1) {
				k--;
				K--;
				//o_6(table, &i, &j, &k);

				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 39, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					//o_66(table, &i, &j, &k);

					i = i - 9;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j][k] = 0;

					sum += 9;
					k++;
					K++;
				}
			}
			if (table[0][n - 1] != n * n && flag == 11 && J != 0 && tab[J - 1][K] - tab[J][K] == 1) {
				j--;
				J--;
				//o_7(table, &i, &j, &k);

				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 49, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					//o_77(table, &i, &j, &k);

					i = i - 9;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k] = 0;

					sum += 9;
					J++;
					j++;
				}
			}
			if (table[0][n - 1] != n * n && flag == 17 && J != n / 3 - 1 && tab[J + 1][K] - tab[J][K] == 1) {
				j++;
				J++;
				//o_8(table, &i, &j, &k);

				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 23, n, tab);
				if (result == -1 && table[0][n - 1] != n*n) {
					//o_88(table, &i, &j, &k);

					i = i - 9;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;

					table[j][k] = 0;

					sum += 9;
					j--;
					J--;
				}
			}
		}

		//последний квадрант
		else if (sum == 9) {
		if (table[0][n - 1] != n * n && flag == 33 && J != 0 && tab[J - 1][K] - tab[J][K] == 1) {
			j--;
			J--;
			//o_2(table, &i, &j, &k);

			table[j][k--] = i++;
			table[j][k--] = i++;
			table[j--][k] = i++;
			table[j--][k] = i++;
			table[j][k++] = i++;
			table[j++][k] = i++;
			table[j][k++] = i++;
			table[j--][k] = i++;
			table[j][k] = i++;

			flag = 3;
		}
		if (table[0][n - 1] != n * n && flag == 23 && K != n / 3 - 1 && tab[J][K + 1] - tab[J][K] == 1) {
			k++;
			K++;
			//o_8(table, &i, &j, &k);

			table[j++][k] = i++;
			table[j++][k] = i++;
			table[j][k++] = i++;
			table[j][k++] = i++;
			table[j--][k] = i++;
			table[j][k--] = i++;
			table[j--][k] = i++;
			table[j][k++] = i++;
			table[j][k] = i++;

			flag = 3;
		}
			}
	}

	//стало влом... просто вставлю 2 случая... (((
	else {
		if (sum != 9 && table[0][n - 1] == 0) {
			//центровыe
			if (table[0][n - 1] != n * n && flag == 13 || flag == 27) {
				if (table[0][n - 1] != n * n && flag == 13 && k != n - 1 && table[j][k + 1] == 0) {
					k++;
					////c_1(table, &i, &j, &k);

					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j][k--] = i++;
					table[j][k] = i++;

				}
				else if (table[j + 1][k] == 0) {
					j++;
					////c_1(table, &i, &j, &k);

					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j][k--] = i++;
					table[j][k] = i++;

				}
				sum -= 9;
				f = flag;
				int result = cub_9(table, 17, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					////c_11(table, &i, &j, &k);

					i = i - 9;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k] = 0;

					sum += 9;
					if (f == 13) k--;
					else j--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 17 && j != n - 1 && table[j + 1][k] == 0) {
				j++;
				////c_1(table, &i, &j, &k);

				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 47, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					////c_11(table, &i, &j, &k);

					i = i - 9;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k] = 0;

					sum += 9;
					j--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 13 || flag == 27) {
				if (table[0][n - 1] != n * n && flag == 13 && k != n - 1 && table[j][k + 1] == 0) {
					k++;
					////c_4(table, &i, &j, &k);

					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j--][k] = i++;
					table[j][k] = i++;

				}
				else if (J != n / 3 - 1 && j != n - 1 && table[j + 1][k] == 0) {
					j++;
					////c_4(table, &i, &j, &k);

					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j--][k] = i++;
					table[j][k] = i++;

				}

				sum -= 9;
				f = flag;
				int result = cub_9(table, 23, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					////c_44(table, &i, &j, &k);

					i = i - 9;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j][k] = 0;

					sum += 9;
					if (f == 13) k--;
					else j--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 23 && k != n - 1 && table[j][k + 1] == 0) {
				k++;
				////c_4(table, &i, &j, &k);

				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 33, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					////c_44(table, &i, &j, &k);

					i = i - 9;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j][k] = 0;

					sum += 9;
					k--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 29 || flag == 31) {
				if (table[0][n - 1] != n * n && flag == 31 && k != 0 && table[j][k - 1] == 0) {
					k--;
					////c_2(table, &i, &j, &k);

					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j][k++] = i++;
					table[j][k] = i++;

				}
				else if (J != n / 3 - 1 && j != n - 1 && table[j + 1][k] == 0) {
					j++;
					////c_2(table, &i, &j, &k);

					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j][k++] = i++;
					table[j][k] = i++;

				}
				sum -= 9;
				f = flag;
				int result = cub_9(table, 39, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					////c_22(table, &i, &j, &k);

					i = i - 9;

					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;


					table[j][k] = 0;

					sum += 9;
					if (f == 31) k++;
					else j--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 39 && j != n - 1 && table[j + 1][k] == 0) {
				j++;
				////c_2(table, &i, &j, &k);

				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 49, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					////c_22(table, &i, &j, &k);

					i = i - 9;

					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;


					table[j][k] = 0;

					sum += 9;
					j--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 29 || flag == 31) {
				if (table[0][n - 1] != n * n && flag == 31 && k != 0 && table[j][k - 1] == 0) {
					k--;
					////c_8(table, &i, &j, &k);

					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j--][k] = i++;
					table[j][k] = i++;

				}
				else if (table[j + 1][k] == 0) {
					j++;
					////c_8(table, &i, &j, &k);

					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j--][k] = i++;
					table[j][k] = i++;

				}
				sum -= 9;
				f = flag;
				int result = cub_9(table, 21, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					////c_88(table, &i, &j, &k);

					i = i - 9;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j][k] = 0;

					sum += 9;
					if (f == 31) k++;
					else j--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 21 && k != 0 && table[j][k - 1] == 0) {
				k--;
				////c_8(table, &i, &j, &k);

				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 11, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					////c_88(table, &i, &j, &k);

					i = i - 9;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j][k] = 0;

					sum += 9;
					k++;
				}
			}
			if (table[0][n - 1] != n * n && flag == 19 || flag == 41) {
				if (table[0][n - 1] != n * n && flag == 19 && k != n - 1 && table[j][k + 1] == 0) {
					k++;
					////c_3(table, &i, &j, &k);

					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j++][k] = i++;
					table[j][k] = i++;

				}
				else if (j != 0 && table[j - 1][k] == 0) {
					j--;
					////c_3(table, &i, &j, &k);

					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j++][k] = i++;
					table[j][k] = i++;

				}
				sum -= 9;
				f = flag;
				int result = cub_9(table, 49, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					////c_33(table, &i, &j, &k);

					i = i - 9;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;

					table[j][k] = 0;

					sum += 9;
					if (f == 19) k--;
					else j++;
				}
			}
			if (table[0][n - 1] != n * n && flag == 49 && k != n - 1 && table[j][k + 1] == 0) {
				k++;
				////c_3(table, &i, &j, &k);

				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 39, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					////c_33(table, &i, &j, &k);

					i = i - 9;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;

					table[j][k] = 0;

					sum += 9;
					k--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 19 || flag == 41) {
				if (table[0][n - 1] != n * n && flag == 19 && k != n - 1 && table[j][k + 1] == 0) {
					k++;
					////c_5(table, &i, &j, &k);

					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j][k--] = i++;
					table[j][k] = i++;

				}
				else if (j != 0 && table[j - 1][k] == 0) {
					j--;
					////c_5(table, &i, &j, &k);

					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j++][k] = i++;
					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j][k--] = i++;
					table[j][k] = i++;

				}
				sum -= 9;
				f = flag;
				int result = cub_9(table, 11, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					////c_55(table, &i, &j, &k);

					i = i - 9;

					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k] = 0;

					sum += 9;
					if (f == 19) k--;
					else j++;
				}
			}
			if (table[0][n - 1] != n * n && flag == 11 && j != 0 && table[j - 1][k] == 0) {
				j--;
				////c_5(table, &i, &j, &k);

				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 21, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					////c_55(table, &i, &j, &k);

					i = i - 9;

					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k] = 0;

					j++;
					sum += 9;
				}
			}
			if (table[0][n - 1] != n * n && flag == 43 || flag == 37) {
				if (table[0][n - 1] != n * n && flag == 37 && k != 0 && table[j][k - 1] == 0) {
					k--;
					////c_6(table, &i, &j, &k);

					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j][k++] = i++;
					table[j][k] = i++;

				}
				else if (j != 0 && table[j - 1][k] == 0) {
					j--;
					////c_6(table, &i, &j, &k);

					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j][k++] = i++;
					table[j][k] = i++;

				}
				sum -= 9;
				f = flag;
				int result = cub_9(table, 33, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					////c_66(table, &i, &j, &k);

					i = i - 9;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k] = 0;

					sum += 9;
					if (f == 37) k++;
					else j++;
				}
			}
			if (table[0][n - 1] != n * n && flag == 33 && j != 0 && table[j - 1][k] == 0) {
				j--;
				////c_6(table, &i, &j, &k);

				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 23, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					////c_66(table, &i, &j, &k);

					i = i - 9;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k] = 0;

					sum += 9;
					j++;
				}
			}
			if (table[0][n - 1] != n * n && flag == 43 || flag == 37) {
				if (table[0][n - 1] != n * n && flag == 37 && k != 0 && table[j][k - 1] == 0) {
					k--;
					////c_7(table, &i, &j, &k);

					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j++][k] = i++;
					table[j][k] = i++;

				}
				else if (j != 0 && table[j - 1][k] == 0) {
					j--;
					////c_7(table, &i, &j, &k);

					table[j][k--] = i++;
					table[j--][k] = i++;
					table[j][k++] = i++;
					table[j--][k] = i++;
					table[j][k--] = i++;
					table[j][k--] = i++;
					table[j++][k] = i++;
					table[j++][k] = i++;
					table[j][k] = i++;

				}
				sum -= 9;
				f = flag;
				int result = cub_9(table, 47, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					////c_77(table, &i, &j, &k);

					i = i - 9;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j][k] = 0;

					sum += 9;
					if (f == 37) k++;
					else j++;
				}
			}
			if (table[0][n - 1] != n * n && flag == 47 && k != 0 && table[j][k - 1] == 0) {
				k--;
				////c_7(table, &i, &j, &k);

				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 17, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					////c_77(table, &i, &j, &k);

					i = i - 9;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j][k] = 0;

					sum += 9;
					k++;
				}
			}

			//зигзаги
			if (table[0][n - 1] != n * n && flag == 17 && j != n - 1 && table[j + 1][k] == 0) {
				j++;
				//zzHOR_1(table, &i, &j, &k);

				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 39, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					////zzHOR_11(table, &i, &j, &k);

					i = i - 9;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j][k] = 0;

					sum += 9;
					j--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 11 && j != 0 && table[j - 1][k] == 0) {
				j--;
				//zzHOR_2(table, &i, &j, &k);

				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 33, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					//zzHOR_22(table, &i, &j, &k);

					i = i - 9;

					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j][k] = 0;

					j++;
					sum += 9;
				}
			}
			if (table[0][n - 1] != n * n && flag == 33 && j != 0 && table[j - 1][k] == 0) {
				j--;
				//zzHOR_3(table, &i, &j, &k);

				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 11, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					//zzHOR_33(table, &i, &j, &k);

					i = i - 9;

					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j][k] = 0;

					j++;
					sum += 9;
				}
			}
			if (table[0][n - 1] != n * n && flag == 39 && j != n - 1 && table[j + 1][k] == 0) {
				j++;
				//zzHOR_4(table, &i, &j, &k);

				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 17, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					//zzHOR_44(table, &i, &j, &k);

					i = i - 9;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j][k] = 0;

					sum += 9;
					j--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 23 && k != n - 1 && table[j][k + 1] == 0) {
				k++;
				//zzVER_1(table, &i, &j, &k);

				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 49, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					//zzVER_11(table, &i, &j, &k);

					i = i - 9;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k] = 0;

					sum += 9;
					k--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 49 && k != n - 1 && table[j][k + 1] == 0) {
				k++;
				//zzVER_2(table, &i, &j, &k);

				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 23, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					//zzVER_22(table, &i, &j, &k);

					i = i - 9;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k] = 0;

					sum += 9;
					k--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 47 && k != 0 && table[j][k - 1] == 0) {
				k--;
				//zzVER_3(table, &i, &j, &k);

				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 21, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					//zzVER_33(table, &i, &j, &k);

					i = i - 9;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k] = 0;

					sum += 9;
					k++;
				}
			}
			if (table[0][n - 1] != n * n && flag == 21 && k != 0 && table[j][k - 1] == 0) {
				k--;
				//zzVER_4(table, &i, &j, &k);

				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 47, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					//zzVER_44(table, &i, &j, &k);

					i = i - 9;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k] = 0;

					sum += 9;
					k++;
				}
			}

			//обходные 
			if (table[0][n - 1] != n * n && flag == 49 && k != n - 1 && table[j][k + 1] == 0) {
				k++;
				//o_1(table, &i, &j, &k);

				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 11, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					//o_11(table, &i, &j, &k);

					i = i - 9;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j][k] = 0;

					sum += 9;
					k--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 47 && k != 0 && table[j][k - 1] == 0) {
				k--;
				//o_2(table, &i, &j, &k);

				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 33, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					//o_22(table, &i, &j, &k);

					i = i - 9;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;

					table[j][k] = 0;

					sum += 9;
					k++;
				}
			}
			if (table[0][n - 1] != n * n && flag == 33 && j != 0 && table[j - 1][k] == 0) {
				j--;
				//o_3(table, &i, &j, &k);

				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 47, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					//o_33(table, &i, &j, &k);

					i = i - 9;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k] = 0;

					sum += 9;
					j++;
				}
			}
			if (table[0][n - 1] != n * n && flag == 39 && j != n - 1 && table[j + 1][k] == 0) {
				j++;
				//o_4(table, &i, &j, &k);

				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 21, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					//o_44(table, &i, &j, &k);

					i = i - 9;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k] = 0;

					sum += 9;
					j--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 23 && k != n - 1 && table[j][k + 1] == 0) {
				k++;
				//o_5(table, &i, &j, &k);

				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 17, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					//o_55(table, &i, &j, &k);

					i = i - 9;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j][k] = 0;

					sum += 9;
					k--;
				}
			}
			if (table[0][n - 1] != n * n && flag == 21 && k != 0 && table[j][k - 1] == 0) {
				k--;
				//o_6(table, &i, &j, &k);

				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 39, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					//o_66(table, &i, &j, &k);

					i = i - 9;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j][k++] = 0;
					table[j][k] = 0;

					sum += 9;
					k++;
				}
			}
			if (table[0][n - 1] != n * n && flag == 11 && j != 0 && table[j - 1][k] == 0) {
				j--;
				//o_7(table, &i, &j, &k);

				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k--] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 49, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					//o_77(table, &i, &j, &k);

					i = i - 9;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j][k++] = 0;
					table[j--][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j++][k] = 0;
					table[j][k] = 0;

					sum += 9;
					j++;
				}
			}
			if (table[0][n - 1] != n * n && flag == 17 && j != n - 1 && table[j + 1][k] == 0) {
				j++;
				//o_8(table, &i, &j, &k);

				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j][k] = i++;

				sum -= 9;
				int result = cub_9(table, 23, n, tab);
				if (result == -1 && table[0][n - 1] != n * n) {
					//o_88(table, &i, &j, &k);

					i = i - 9;
					table[j][k--] = 0;
					table[j++][k] = 0;
					table[j][k++] = 0;
					table[j++][k] = 0;
					table[j][k--] = 0;
					table[j][k--] = 0;
					table[j--][k] = 0;
					table[j--][k] = 0;

					table[j][k] = 0;

					sum += 9;
					j--;
				}
			}


		}

		//последний квадрант
		else if (sum == 9) {
			if (table[0][n - 1] != n * n && flag == 33 && j != 0 && table[j - 1][k] == 0) {
				j--;
				//o_2(table, &i, &j, &k);

				table[j][k--] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k] = i++;

				flag = 3;
			}
			if (table[0][n - 1] != n * n && flag == 23 && K != n / 3 - 1 && table[j][k + 1] == 0) {
				k++;
				//o_8(table, &i, &j, &k);

				table[j++][k] = i++;
				table[j++][k] = i++;
				table[j][k++] = i++;
				table[j][k++] = i++;
				table[j--][k] = i++;
				table[j][k--] = i++;
				table[j--][k] = i++;
				table[j][k++] = i++;
				table[j][k] = i++;

				flag = 3;
			}
		}
	}

//	printf("flagEND = %d\n", flag);

	if (table[0][n - 1] == n * n)
		return 0;
	else /*if (table[0][n - 1] != 0 && table[0][n - 1] != n * n)*/
		return -1;
}
int** cub(int n, int** tab) {
	if (n == 1)
		printf("1");
	else if (n == 2)
		printf("1 4\n2 3");
	else {
		int flag = 0;
		
		int** table = (int**)malloc(n * sizeof(*table));
		for (i = 0; i < n; i++)
			table[i] = (int*)malloc(n * sizeof(table));
		

		//зануляем
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++)
				table[i][j] = 0;
		}

		__asm {
			mov eax, j
			xor eax, eax
			mov j, eax
		
			mov eax, k
			xor eax, eax
			mov k, eax
			mov i, 1}

		/*j = 0 /*строки*/;
		/*k = 0 /*столбцы*/;

		//i = 1;
		//первый квадрант всегда одинаковый drurddlld
		table[j++][k] = i++;
		table[j][k++] = i++;
		table[j--][k] = i++;
		table[j][k++] = i++;
		table[j++][k] = i++;
		table[j++][k] = i++;
		table[j][k--] = i++;
		table[j][k--] = i++;
		table[j][k] = i++;
		flag = 17;
/*
		//второй квадрант
		if ((n * n) % 4 == 0) { //ddrrulurr
			table[j++][k] = i++;
			table[j++][k] = i++;
			table[j][k++] = i++;
			table[j][k++] = i++;
			table[j--][k] = i++;
			table[j][k--] = i++;
			table[j--][k] = i++;
			table[j][k++] = i++;
			table[j][k] = i++;
			//table[j][k + 1] = (*i)++;

			flag = 23;
		}
		else {//rrdlldrrd
			table[j][k++] = i++;
			table[j][k++] = i++;
			table[j++][k] = i++;
			table[j][k--] = i++;
			table[j][k--] = i++;
			table[j++][k] = i++;
			table[j][k++] = i++;
			table[j][k++] = i++;
			table[j][k] = i++;

			flag = 39;
		}*/
		//sum = n * n - 18;
		sum = n * n - 9;

		if (tab == 0) {
			I = -1, J = -1, K = -1;
			flag = cub_9(table, flag, n, 0);
			//printf("flag=%d\n", flag);

			//печатаем
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++)
					printf("%3d ", table[i][j]);
				printf("\n");
			}
			printf("\n");
		}
		else {//J=1;
			I = 2, J = 0, K = 0;
			flag = cub_9(table, flag, n, tab);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++)
					printf("%3d ", table[i][j]);
				printf("\n");
			}
			printf("\n");
		}

		return table;
	}

}


int check(int n) {
	if (n != 9)
		while (n % 9 == 0 && n != 0)
			n /= 9;
	if (n % 4 == 0)
		n /= 4;
	if (n == 1)
		return 1;
	else
		return 0;
}


//сделать менюшку
int main() {
	int n, prov, i;
	int** tab = 0;

	printf("n=");
	scanf("%d", &n);
	printf("\n");

	clock_t t;
	t = clock();

	prov = check(n * n);
	if (prov == 0)
		printf("Path not found\n");
	else {
		if (n > 10) {
			int N = n / 3;
			tab = cub(N, 0);
			cub(n, tab);
		}
		else
			cub(n, 0);
	}

	t = clock() - t;
	printf("\nTime - %f\n", ((double)t) / CLOCKS_PER_SEC);

	__asm {
	inc t}
	
}
