#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

//зигзаги
int** zzHOR_1(int** a, int i, int j, int k, int n) {
	a[j][k++] = i++;
	a[j][k++] = i++;
	a[j++][k] = i++;
	a[j][k--] = i++;
	a[j][k--] = i++;
	a[j++][k] = i++;
	a[j][k++] = i++;
	a[j][k++] = i++;
	a[j][k++] = i++;

	return a;
}
int** zzHOR_2(int** a, int i, int j, int k, int n) {
	a[j][k++] = i++;
	a[j][k++] = i++;
	a[j--][k] = i++;
	a[j][k--] = i++;
	a[j][k--] = i++;
	a[j--][k] = i++;
	a[j][k++] = i++;
	a[j][k++] = i++;
	a[j][k++] = i++;

	return a;
}
int** zzHOR_3(int** a, int i, int j, int k, int n) {
	a[j][k--] = i++;
	a[j][k--] = i++;
	a[j--][k] = i++;
	a[j][k++] = i++;
	a[j][k++] = i++;
	a[j--][k] = i++;
	a[j][k--] = i++;
	a[j][k--] = i++;
	a[j][k--] = i++;

	return a;
}
int** zzHOR_4(int** a, int i, int j, int k, int n) {
	a[j][k--] = i++;
	a[j][k--] = i++;
	a[j++][k] = i++;
	a[j][k++] = i++;
	a[j][k++] = i++;
	a[j++][k] = i++;
	a[j][k--] = i++;
	a[j][k--] = i++;
	a[j][k--] = i++;

	return a;
}
int** zzVER_1(int** a, int i, int j, int k, int n) {
	a[j++][k] = i++;
	a[j++][k] = i++;
	a[j][k++] = i++;
	a[j--][k] = i++;
	a[j--][k] = i++;
	a[j][k++] = i++;
	a[j++][k] = i++;
	a[j++][k] = i++;
	a[j++][k] = i++;

	return a;
}
int** zzVER_2(int** a, int i, int j, int k, int n) {
	a[j--][k] = i++;
	a[j--][k] = i++;
	a[j][k++] = i++;
	a[j++][k] = i++;
	a[j++][k] = i++;
	a[j][k++] = i++;
	a[j--][k] = i++;
	a[j--][k] = i++;
	a[j--][k] = i++;

	return a;
}
int** zzVER_3(int** a, int i, int j, int k, int n) {
	a[j--][k] = i++;
	a[j--][k] = i++;
	a[j][k--] = i++;
	a[j++][k] = i++;
	a[j++][k] = i++;
	a[j][k--] = i++;
	a[j--][k] = i++;
	a[j--][k] = i++;
	a[j--][k] = i++;

	return a;
}
int** zzVER_4(int** a, int i, int j, int k, int n) {
	a[j++][k] = i++;
	a[j++][k] = i++;
	a[j][k--] = i++;
	a[j--][k] = i++;
	a[j--][k] = i++;
	a[j][k--] = i++;
	a[j++][k] = i++;
	a[j++][k] = i++;
	a[j++][k] = i++;

	return a;
}

//центровые
int** c_1(int** a, int i, int j, int k, int n) {
	a[j++][k] = i++;
	a[j][k++] = i++;
	a[j--][k] = i++;
	a[j][k++] = i++;
	a[j++][k] = i++;
	a[j++][k] = i++;
	a[j][k--] = i++;
	a[j][k--] = i++;
	a[j][k--] = i++;

	return a;
}
int** c_2(int** a, int i, int j, int k, int n) {
	a[j++][k] = i++;
	a[j][k--] = i++;
	a[j--][k] = i++;
	a[j][k--] = i++;
	a[j++][k] = i++;
	a[j++][k] = i++;
	a[j][k++] = i++;
	a[j][k++] = i++;
	a[j][k++] = i++;

	return a;
}
int** c_3(int** a, int i, int j, int k, int n) {
	a[j][k++] = i++;
	a[j--][k] = i++;
	a[j][k--] = i++;
	a[j--][k] = i++;
	a[j][k++] = i++;
	a[j][k++] = i++;
	a[j++][k] = i++;
	a[j++][k] = i++;
	a[j++][k] = i++;

	return a;
}
int** c_4(int** a, int i, int j, int k, int n) {
	a[j][k++] = i++;
	a[j++][k] = i++;
	a[j][k--] = i++;
	a[j++][k] = i++;
	a[j][k++] = i++;
	a[j][k++] = i++;
	a[j--][k] = i++;
	a[j--][k] = i++;
	a[j--][k] = i++;

	return a;
}
int** c_5(int** a, int i, int j, int k, int n) {
	a[j--][k] = i++;
	a[j][k++] = i++;
	a[j++][k] = i++;
	a[j][k++] = i++;
	a[j--][k] = i++;
	a[j--][k] = i++;
	a[j][k--] = i++;
	a[j][k--] = i++;
	a[j][k--] = i++;

	return a;
}
int** c_6(int** a, int i, int j, int k, int n) {
	a[j--][k] = i++;
	a[j][k--] = i++;
	a[j++][k] = i++;
	a[j][k--] = i++;
	a[j--][k] = i++;
	a[j--][k] = i++;
	a[j][k++] = i++;
	a[j][k++] = i++;
	a[j][k++] = i++;

	return a;
}
int** c_7(int** a, int i, int j, int k, int n) {
	a[j][k--] = i++;
	a[j--][k] = i++;
	a[j][k++] = i++;
	a[j--][k] = i++;
	a[j][k--] = i++;
	a[j][k--] = i++;
	a[j++][k] = i++;
	a[j++][k] = i++;
	a[j++][k] = i++;

	return a;
}
int** c_8(int** a, int i, int j, int k, int n) {
	a[j][k--] = i++;
	a[j++][k] = i++;
	a[j][k++] = i++;
	a[j++][k] = i++;
	a[j][k--] = i++;
	a[j][k--] = i++;
	a[j--][k] = i++;
	a[j--][k] = i++;
	a[j--][k] = i++;

	return a;
}

//обходные
int** o_1(int** a, int i, int j, int k, int n) {
	a[j][k++] = i++;
	a[j][k++] = i++;
	a[j--][k] = i++;
	a[j--][k] = i++;
	a[j][k--] = i++;
	a[j++][k] = i++;
	a[j][k--] = i++;
	a[j--][k] = i++;
	a[j--][k] = i++;

	return a;
}
int** o_2(int** a, int i, int j, int k, int n) {
	a[j][k--] = i++;
	a[j][k--] = i++;
	a[j--][k] = i++;
	a[j--][k] = i++;
	a[j][k++] = i++;
	a[j++][k] = i++;
	a[j][k++] = i++;
	a[j--][k] = i++;
	a[j--][k] = i++;

	return a;
}
int** o_3(int** a, int i, int j, int k, int n) {
	a[j--][k] = i++;
	a[j--][k] = i++;
	a[j][k--] = i++;
	a[j][k--] = i++;
	a[j++][k] = i++;
	a[j][k++] = i++;
	a[j++][k] = i++;
	a[j][k--] = i++;
	a[j][k--] = i++;

	return a;
}
int** o_4(int** a, int i, int j, int k, int n) {
	a[j++][k] = i++;
	a[j++][k] = i++;
	a[j][k--] = i++;
	a[j][k--] = i++;
	a[j--][k] = i++;
	a[j][k++] = i++;
	a[j--][k] = i++;
	a[j][k--] = i++;
	a[j][k--] = i++;

	return a;
}
int** o_5(int** a, int i, int j, int k, int n) {
	a[j][k++] = i++;
	a[j][k++] = i++;
	a[j++][k] = i++;
	a[j++][k] = i++;
	a[j][k--] = i++;
	a[j--][k] = i++;
	a[j][k--] = i++;
	a[j++][k] = i++;
	a[j++][k] = i++;

	return a;
}
int** o_6(int** a, int i, int j, int k, int n) {
	a[j][k--] = i++;
	a[j][k--] = i++;
	a[j++][k] = i++;
	a[j++][k] = i++;
	a[j][k++] = i++;
	a[j--][k] = i++;
	a[j][k++] = i++;
	a[j++][k] = i++;
	a[j++][k] = i++;

	return a;
}
int** o_7(int** a, int i, int j, int k, int n) {
	a[j--][k] = i++;
	a[j--][k] = i++;
	a[j][k++] = i++;
	a[j][k++] = i++;
	a[j++][k] = i++;
	a[j][k--] = i++;
	a[j++][k] = i++;
	a[j][k++] = i++;
	a[j][k++] = i++;

	return a;
}
int** o_8(int** a, int i, int j, int k, int n) {
	a[j++][k] = i++;
	a[j++][k] = i++;
	a[j][k++] = i++;
	a[j][k++] = i++;
	a[j--][k] = i++;
	a[j][k--] = i++;
	a[j--][k] = i++;
	a[j][k++] = i++;
	a[j][k++] = i++;

	return a;
}

/*
void cub_9(int n) {
	
		//зигзаги и обходные 
		if (flag == 17) {
			zzHOR_1(table, i, j, k, n);
			flag = 39;

			o_5(table, i, j, k, n);
			flag = 7;
		}
		if (flag == 11) {
			zzHOR_2(table, i, j, k, n);
			flag = 33;

			o_1(table, i, j, k, n);
			flag = 1;
		}
		if (flag == 33) {
			zzHOR_3(table, i, j, k, n);
			flag = 11;

			o_2(table, i, j, k, n);
			flag = 3;
		}
		if (flag == 39) {
			zzHOR_4(table, i, j, k, n);
			flag = 17;

			o_6(table, i, j, k, n);
			flag = 9;
		}
		if (flag == 23) {
			zzVER_1(table, i, j, k, n);
			flag = 49;

			o_8(table, i, j, k, n);
			flag = 3;
		}
		if (flag == 49) {
			zzVER_2(table, i, j, k, n);
			flag = 23;

			o_7(table, i, j, k, n);
			flag = 9;
		}
		if (flag == 47) {
			zzVER_3(table, i, j, k, n);
			flag = 21;

			o_3(table, i, j, k, n);
			flag = 7;
		}
		if (flag == 21) {
			zzVER_4(table, i, j, k, n);
			flag = 47;

			o_4(table, i, j, k, n);
			flag = 1;
		}

		//центровые
		if (flag == 13 || flag == 27) {
			c_1(table, i, j, k, n);
			flag = 17;

			c_4(table, i, j, k, n);
			flag = 23;
		}
		if (flag == 29 || flag == 31) {
			c_2(table, i, j, k, n);
			flag = 39;

			c_8(table, i, j, k, n);
			flag = 21;
		}
		if (flag == 19 || flag == 41) {
			c_3(table, i, j, k, n);
			flag = 49;

			c_5(table, i, j, k, n);
			flag = 11;
		}
		if (flag == 43 || flag == 37) {
			c_6(table, i, j, k, n);
			flag = 33;

			c_7(table, i, j, k, n);
			flag = 47;
		}

		
		
}*/
void cub(int n) {
	
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
		for (i = 0; i < n; i++) { ///зануляем
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
			table[j][k++] = i++;

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
			table[j++][k] = i++;
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				printf("%3d ", table[i][j]);
			printf("\n");
		}

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

int main() {
	int n, prov;

	printf("n=");
	scanf("%d", &n);
	printf("\n");

	prov = check(n * n);
	if (prov == 0)
		printf("Prostite");
	else 
		cub(n);
}