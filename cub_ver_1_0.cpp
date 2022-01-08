#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
/*
//откаты на зигзаги
int** zzHOR_11(int** a, int* i, int* j, int* k) {
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

	return a;
}
int** zzHOR_22(int** a, int* i, int* j, int* k) {
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

	return a;
}
int** zzHOR_33(int** a, int* i, int* j, int* k) {
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
	return a;
}
int** zzHOR_44(int** a, int* i, int* j, int* k) {
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

	return a;
}
int** zzVER_11(int** a, int* i, int* j, int* k) {
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

	return a;
}
int** zzVER_22(int** a, int* i, int* j, int* k) {
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

	return a;
}
int** zzVER_33(int** a, int* i, int* j, int* k) {
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

	return a;
}
int** zzVER_44(int** a, int* i, int* j, int* k) {
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

	return a;
}

//откаты на центровые
int** c_11(int** a, int* i, int* j, int* k) {
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

	return a;
}
int** c_22(int** a, int* i, int* j, int* k) {
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

	return a;
}
int** c_33(int** a, int* i, int* j, int* k) {
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
	return a;
}
int** c_44(int** a, int* i, int* j, int* k) {
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

	return a;
}
int** c_55(int** a, int* i, int* j, int* k) {
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
	return a;
}
int** c_66(int** a, int* i, int* j, int* k) {
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

	return a;
}
int** c_77(int** a, int* i, int* j, int* k) {
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

	return a;
}
int** c_88(int** a, int* i, int* j, int* k) {
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

	return a;
}

//откаты на обходные
int** o_11(int** a, int* i, int* j, int* k) {
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

	return a;
}
int** o_22(int** a, int* i, int* j, int* k) {
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

	return a;
}
int** o_33(int** a, int* i, int* j, int* k) {
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

	return a;
}
int** o_44(int** a, int* i, int* j, int* k) {
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
	return a;
}
int** o_55(int** a, int* i, int* j, int* k) {
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

	return a;
}
int** o_66(int** a, int* i, int* j, int* k) {
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
	return a;
}
int** o_77(int** a, int* i, int* j, int* k) {
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

	return a;
}
int** o_88(int** a, int* i, int* j, int* k) {
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

	return a;
}


//зигзаги
int** zzHOR_1(int** a, int* i, int* j, int* k) {
	table[j][k++] = i++;
	table[j][k++] = i++;
	table[j++][k] = i++;
	table[j][k--] = i++;
	table[j][k--] = i++;
	table[j++][k] = i++;
	table[j][k++] = i++;
	table[j][k++] = i++;
	table[j][k] = i++;

	return a;
}
int** zzHOR_2(int** a, int* i, int* j, int* k) {
	table[j][k++] = i++;
	table[j][k++] = i++;
	table[j--][k] = i++;
	table[j][k--] = i++;
	table[j][k--] = i++;
	table[j--][k] = i++;
	table[j][k++] = i++;
	table[j][k++] = i++;
	table[j][k] = i++;

	return a;
}
int** zzHOR_3(int** a, int* i, int* j, int* k) {
	table[j][k--] = i++;
	table[j][k--] = i++;
	table[j--][k] = i++;
	table[j][k++] = i++;
	table[j][k++] = i++;
	table[j--][k] = i++;
	table[j][k--] = i++;
	table[j][k--] = i++;
	table[j][k] = i++;

	return a;
}
int** zzHOR_4(int** a, int* i, int* j, int* k) {
	table[j][k--] = i++;
	table[j][k--] = i++;
	table[j++][k] = i++;
	table[j][k++] = i++;
	table[j][k++] = i++;
	table[j++][k] = i++;
	table[j][k--] = i++;
	table[j][k--] = i++;
	table[j][k] = i++;

	return a;
}
int** zzVER_1(int** a, int* i, int* j, int* k) {
	table[j++][k] = i++;
	table[j++][k] = i++;
	table[j][k++] = i++;
	table[j--][k] = i++;
	table[j--][k] = i++;
	table[j][k++] = i++;
	table[j++][k] = i++;
	table[j++][k] = i++;
	table[j][k] = i++;

	return a;
}
int** zzVER_2(int** a, int* i, int* j, int* k) {
	table[j--][k] = i++;
	table[j--][k] = i++;
	table[j][k++] = i++;
	table[j++][k] = i++;
	table[j++][k] = i++;
	table[j][k++] = i++;
	table[j--][k] = i++;
	table[j--][k] = i++;
	table[j][k] = i++;

	return a;
}
int** zzVER_3(int** a, int* i, int* j, int* k) {
	table[j--][k] = i++;
	table[j--][k] = i++;
	table[j][k--] = i++;
	table[j++][k] = i++;
	table[j++][k] = i++;
	table[j][k--] = i++;
	table[j--][k] = i++;
	table[j--][k] = i++;
	table[j][k] = i++;

	return a;
}
int** zzVER_4(int** a, int* i, int* j, int* k) {
	table[j++][k] = i++;
	table[j++][k] = i++;
	table[j][k--] = i++;
	table[j--][k] = i++;
	table[j--][k] = i++;
	table[j][k--] = i++;
	table[j++][k] = i++;
	table[j++][k] = i++;
	table[j][k] = i++;

	return a;
}

//центровые
int** c_1(int** a, int* i, int* j, int* k) {
	table[j++][k] = i++;
	table[j][k++] = i++;
	table[j--][k] = i++;
	table[j][k++] = i++;
	table[j++][k] = i++;
	table[j++][k] = i++;
	table[j][k--] = i++;
	table[j][k--] = i++;
	table[j][k] = i++;

	return a;
}
int** c_2(int** a, int* i, int* j, int* k) {
	table[j++][k] = i++;
	table[j][k--] = i++;
	table[j--][k] = i++;
	table[j][k--] = i++;
	table[j++][k] = i++;
	table[j++][k] = i++;
	table[j][k++] = i++;
	table[j][k++] = i++;
	table[j][k] = i++;

	return a;
}
int** c_3(int** a, int* i, int* j, int* k) {
	table[j][k++] = i++;
	table[j--][k] = i++;
	table[j][k--] = i++;
	table[j--][k] = i++;
	table[j][k++] = i++;
	table[j][k++] = i++;
	table[j++][k] = i++;
	table[j++][k] = i++;
	table[j][k] = i++;

	return a;
}
int** c_4(int** a, int* i, int* j, int* k) {
	table[j][k++] = i++;
	table[j++][k] = i++;
	table[j][k--] = i++;
	table[j++][k] = i++;
	table[j][k++] = i++;
	table[j][k++] = i++;
	table[j--][k] = i++;
	table[j--][k] = i++;
	table[j][k] = i++;

	return a;
}
int** c_5(int** a, int* i, int* j, int* k) {
	table[j--][k] = i++;
	table[j][k++] = i++;
	table[j++][k] = i++;
	table[j][k++] = i++;
	table[j--][k] = i++;
	table[j--][k] = i++;
	table[j][k--] = i++;
	table[j][k--] = i++;
	table[j][k] = i++;

	return a;
}
int** c_6(int** a, int* i, int* j, int* k) {
	table[j--][k] = i++;
	table[j][k--] = i++;
	table[j++][k] = i++;
	table[j][k--] = i++;
	table[j--][k] = i++;
	table[j--][k] = i++;
	table[j][k++] = i++;
	table[j][k++] = i++;
	table[j][k] = i++;

	return a;
}
int** c_7(int** a, int* i, int* j, int* k) {
	table[j][k--] = i++;
	table[j--][k] = i++;
	table[j][k++] = i++;
	table[j--][k] = i++;
	table[j][k--] = i++;
	table[j][k--] = i++;
	table[j++][k] = i++;
	table[j++][k] = i++;
	table[j][k] = i++;

	return a;
}
int** c_8(int** a, int* i, int* j, int* k) {
	table[j][k--] = i++;
	table[j++][k] = i++;
	table[j][k++] = i++;
	table[j++][k] = i++;
	table[j][k--] = i++;
	table[j][k--] = i++;
	table[j--][k] = i++;
	table[j--][k] = i++;
	table[j][k] = i++;

	return a;
}

//обходные
int** o_1(int** a, int* i, int* j, int* k) {
	table[j][k++] = i++;
	table[j][k++] = i++;
	table[j--][k] = i++;
	table[j--][k] = i++;
	table[j][k--] = i++;
	table[j++][k] = i++;
	table[j][k--] = i++;
	table[j--][k] = i++;
	table[j][k] = i++;

	return a;
}
int** o_2(int** a, int* i, int* j, int* k) {
	table[j][k--] = i++;
	table[j][k--] = i++;
	table[j--][k] = i++;
	table[j--][k] = i++;
	table[j][k++] = i++;
	table[j++][k] = i++;
	table[j][k++] = i++;
	table[j--][k] = i++;
	table[j][k] = i++;

	return a;
}
int** o_3(int** a, int* i, int* j, int* k) {
	table[j--][k] = i++;
	table[j--][k] = i++;
	table[j][k--] = i++;
	table[j][k--] = i++;
	table[j++][k] = i++;
	table[j][k++] = i++;
	table[j++][k] = i++;
	table[j][k--] = i++;
	table[j][k] = i++;

	return a;
}
int** o_4(int** a, int* i, int* j, int* k) {
	table[j++][k] = i++;
	table[j++][k] = i++;
	table[j][k--] = i++;
	table[j][k--] = i++;
	table[j--][k] = i++;
	table[j][k++] = i++;
	table[j--][k] = i++;
	table[j][k--] = i++;
	table[j][k] = i++;

	return a;
}
int** o_5(int** a, int* i, int* j, int* k) {
	table[j][k++] = i++;
	table[j][k++] = i++;
	table[j++][k] = i++;
	table[j++][k] = i++;
	table[j][k--] = i++;
	table[j--][k] = i++;
	table[j][k--] = i++;
	table[j++][k] = i++;
	table[j][k] = i++;

	return a;
}
int** o_6(int** a, int* i, int* j, int* k) {
	table[j][k--] = i++;
	table[j][k--] = i++;
	table[j++][k] = i++;
	table[j++][k] = i++;
	table[j][k++] = i++;
	table[j--][k] = i++;
	table[j][k++] = i++;
	table[j++][k] = i++;
	table[j][k] = i++;

	return a;
}
int** o_7(int** a, int* i, int* j, int* k) {
	table[j--][k] = i++;
	table[j--][k] = i++;
	table[j][k++] = i++;
	table[j][k++] = i++;
	table[j++][k] = i++;
	table[j][k--] = i++;
	table[j++][k] = i++;
	table[j][k++] = i++;
	table[j][k] = i++;

	return a;
}
int** o_8(int** a, int* i, int* j, int* k) {
	table[j++][k] = i++;
	table[j++][k] = i++;
	table[j][k++] = i++;
	table[j][k++] = i++;
	table[j--][k] = i++;
	table[j][k--] = i++;
	table[j--][k] = i++;
	table[j][k++] = i++;
	table[j][k] = i++;

	return a;
}
*/

int cub_9(int** table, int flag, int i, int j, int k, int n, int* sum, int** tab, int I, int J, int K) {
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%3d ", table[i][j]);
		printf("\n");
	}
	printf("\n flag = %d\n", flag);*/
	int f;


	//вызовы паттернов (n<10)
	if (tab != 0) {
		if (*sum != 9 && table[0][n - 1] == 0) {
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
				*sum -= 9;
				f = flag;
				int result = cub_9(table, 17, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 47, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				f = flag;
				int result = cub_9(table, 23, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 33, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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
				*sum -= 9;
				f = flag;
				int result = cub_9(table, 39, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 49, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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
				*sum -= 9;
				f = flag;
				int result = cub_9(table, 21, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 11, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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
				*sum -= 9;
				f = flag;
				int result = cub_9(table, 49, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 39, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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
				*sum -= 9;
				f = flag;
				int result = cub_9(table, 11, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 21, i, j, k, n, sum, tab, I, J, K);
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
					*sum += 9;
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
				*sum -= 9;
				f = flag;
				int result = cub_9(table, 33, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 23, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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
				*sum -= 9;
				f = flag;
				int result = cub_9(table, 47, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 17, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 39, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 33, i, j, k, n, sum, tab, I, J, K);
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
					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 11, i, j, k, n, sum, tab, I, J, K);
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
					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 17, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 49, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 23, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 21, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 47, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 11, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 33, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 47, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 21, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 17, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 39, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 49, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 23, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
					j--;
					J--;
				}
			}
		}

		//последний квадрант
		else if (*sum == 9) {
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
		if (*sum != 9 && table[0][n - 1] == 0) {
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
				*sum -= 9;
				f = flag;
				int result = cub_9(table, 17, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 47, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				f = flag;
				int result = cub_9(table, 23, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 33, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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
				*sum -= 9;
				f = flag;
				int result = cub_9(table, 39, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 49, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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
				*sum -= 9;
				f = flag;
				int result = cub_9(table, 21, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 11, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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
				*sum -= 9;
				f = flag;
				int result = cub_9(table, 49, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 39, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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
				*sum -= 9;
				f = flag;
				int result = cub_9(table, 11, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 21, i, j, k, n, sum, tab, I, J, K);
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
					*sum += 9;
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
				*sum -= 9;
				f = flag;
				int result = cub_9(table, 33, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 23, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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
				*sum -= 9;
				f = flag;
				int result = cub_9(table, 47, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 17, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 39, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 33, i, j, k, n, sum, tab, I, J, K);
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
					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 11, i, j, k, n, sum, tab, I, J, K);
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
					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 17, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 49, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 23, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 21, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 47, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 11, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 33, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 47, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 21, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 17, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 39, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 49, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
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

				*sum -= 9;
				int result = cub_9(table, 23, i, j, k, n, sum, tab, I, J, K);
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

					*sum += 9;
					j--;
				}
			}


		}

		//последний квадрант
		else if (*sum == 9) {
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
		int i;
		int** table = (int**)malloc(n * sizeof(*table));
		for (i = 0; i < n; i++)
			table[i] = (int*)malloc(n * sizeof(table));
		int j;

		//зануляем
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++)
				table[i][j] = 0;
		}

		j = 0 /*строки*/;
		int k = 0 /*столбцы*/;

		i = 1;
		//первый квадрант всегда одинаковый drurddlld
		table[j++][k] = i++;
		table[j][k++] = i++;
		table[j--][k] = i++;
		table[j][k++] = i++;
		table[j++][k] = i++;
		table[j++][k] = i++;
		table[j][k--] = i++;
		table[j][k--] = i++;
		table[j++][k] = i++;

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
		}
		int sum = n * n - 18;


		if (tab == 0) {
			flag = cub_9(table, flag, i, j, k, n, &sum, 0, -1, -1, -1);
			//printf("flag=%d\n", flag);

			//печатаем
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++)
					printf("%3d ", table[i][j]);
				printf("\n");
			}
			printf("\n");
		}
		else {
			flag = cub_9(table, flag, i, j, k, n, &sum, tab, 2, 1, 0);
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

	prov = check(n * n);
	if (prov == 0)
		printf("Prostite");
	else {
		if (n > 10) {
			int N = n / 3;
			tab = cub(N, 0);
			cub(n, tab);
		}
		else
			cub(n, 0);
	}
}