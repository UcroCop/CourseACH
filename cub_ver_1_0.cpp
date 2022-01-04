#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

//зигзаги
int** zzHOR_1(int** a, int i, int* j, int* k) {
	a[*j][(*k)++] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)--] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)++] = i++;
	a[*j][(*k)++] = i++;
	a[*j][*k] = i++;

	return a;
}
int** zzHOR_2(int** a, int i, int* j, int* k) {
	a[*j][(*k)++] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)--] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)++] = i++;
	a[*j][(*k)++] = i++;
	a[*j][*k] = i++;

	return a;
}
int** zzHOR_3(int** a, int i, int* j, int* k) {
	a[*j][(*k)--] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)++] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)--] = i++;
	a[*j][(*k)--] = i++;
	a[*j][*k] = i++;

	return a;
}
int** zzHOR_4(int** a, int i, int* j, int* k) {
	a[*j][(*k)--] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)++] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)--] = i++;
	a[*j][(*k)--] = i++;
	a[*j][*k] = i++;

	return a;
}
int** zzVER_1(int** a, int i, int* j, int* k) {
	a[(*j)++][*k] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)--][*k] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)++][*k] = i++;
	a[(*j)++][*k] = i++;
	a[*j][*k] = i++;

	return a;
}
int** zzVER_2(int** a, int i, int* j, int* k) {
	a[(*j)--][*k] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)++][*k] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)--][*k] = i++;
	a[(*j)--][*k] = i++;
	a[*j][*k] = i++;

	return a;
}
int** zzVER_3(int** a, int i, int* j, int* k) {
	a[(*j)--][*k] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)++][*k] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)--][*k] = i++;
	a[(*j)--][*k] = i++;
	a[*j][*k] = i++;

	return a;
}
int** zzVER_4(int** a, int i, int* j, int* k) {
	a[(*j)++][*k] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)--][*k] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)++][*k] = i++;
	a[(*j)++][*k] = i++;
	a[*j][*k] = i++;

	return a;
}

//центровые
int** c_1(int** a, int i, int* j, int* k) {
	a[(*j)++][*k] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)++][*k] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)--] = i++;
	a[*j][(*k)--] = i++;
	a[*j][*k] = i++;

	return a;
}
int** c_2(int** a, int i, int* j, int* k) {
	a[(*j)++][*k] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)++][*k] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)++] = i++;
	a[*j][(*k)++] = i++;
	a[*j][*k] = i++;

	return a;
}
int** c_3(int** a, int i, int* j, int* k) {
	a[*j][(*k)++] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)++] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)++][*k] = i++;
	a[(*j)++][*k] = i++;
	a[*j][*k] = i++;

	return a;
}
int** c_4(int** a, int i, int* j, int* k) {
	a[*j][(*k)++] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)++] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)--][*k] = i++;
	a[(*j)--][*k] = i++;
	a[*j][*k] = i++;

	return a;
}
int** c_5(int** a, int i, int* j, int* k) {
	a[(*j)--][*k] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)--][*k] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)--] = i++;
	a[*j][(*k)--] = i++;
	a[*j][*k] = i++;

	return a;
}
int** c_6(int** a, int i, int* j, int* k) {
	a[(*j)--][*k] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)--][*k] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)++] = i++;
	a[*j][(*k)++] = i++;
	a[*j][*k] = i++;

	return a;
}
int** c_7(int** a, int i, int* j, int* k) {
	a[*j][(*k)--] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)--] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)++][*k] = i++;
	a[(*j)++][*k] = i++;
	a[*j][*k] = i++;

	return a;
}
int** c_8(int** a, int i, int* j, int* k) {
	a[*j][(*k)--] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)--] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)--][*k] = i++;
	a[(*j)--][*k] = i++;
	a[*j][*k] = i++;

	return a;
}

//обходные
int** o_1(int** a, int i, int* j, int* k) {
	a[*j][(*k)++] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)--][*k] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)--][*k] = i++;
	a[*j][*k] = i++;

	return a;
}
int** o_2(int** a, int i, int* j, int* k) {
	a[*j][(*k)--] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)--][*k] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)--][*k] = i++;
	a[*j][*k] = i++;

	return a;
}
int** o_3(int** a, int i, int* j, int* k) {
	a[(*j)--][*k] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)--] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)--] = i++;
	a[*j][*k] = i++;

	return a;
}
int** o_4(int** a, int i, int* j, int* k) {
	a[(*j)++][*k] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)--] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)--] = i++;
	a[*j][*k] = i++;

	return a;
}
int** o_5(int** a, int i, int* j, int* k) {
	a[*j][(*k)++] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)++][*k] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)++][*k] = i++;
	a[*j][*k] = i++;

	return a;
}
int** o_6(int** a, int i, int* j, int* k) {
	a[*j][(*k)--] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)++][*k] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)++][*k] = i++;
	a[*j][*k] = i++;

	return a;
}
int** o_7(int** a, int i, int* j, int* k) {
	a[(*j)--][*k] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)++] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)++] = i++;
	a[*j][*k] = i++;

	return a;
}
int** o_8(int** a, int i, int* j, int* k) {
	a[(*j)++][*k] = i++;
	a[(*j)++][*k] = i++;
	a[*j][(*k)++] = i++;
	a[*j][(*k)++] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)--] = i++;
	a[(*j)--][*k] = i++;
	a[*j][(*k)++] = i++;
	a[*j][*k] = i++;

	return a;
}
//индексы в услови€х вли€ют на окончательное значение

int cub_9(int** table, int flag, int i, int j1, int k1, int n) {
	//впихнуть окончательный флаг в условие
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%3d ", table[i][j]);
		printf("\n");
	}
	int j = j1, k = k1;
	//центровыe
	if (flag == 13 || flag == 27) {
		if (flag == 13 && k != n - 1 && table[j][k + 1] == 0) {
			k++;
			c_1(table, i, &j, &k);
		}
		else if (j != n - 1 && table[j + 1][k] == 0) {
			j++;
			c_1(table, i, &j, &k);
		}
		flag = 17;
	}
	if (flag == 17 && j != n - 1 && table[j + 1][k] == 0) {
		j++;
		c_1(table, i, &j, &k);
		flag = 47;
	}
	if (flag == 13 || flag == 27) {
		if (flag == 13 && k != n - 1 && table[j][k + 1] == 0) {
			k++;
			c_4(table, i, &j, &k);
		}
		else if (j != n - 1 && table[j + 1][k] == 0) {
			j++;
			c_4(table, i, &j, &k);
		}
		
		c_4(table, i, &j, &k);
		flag = 23;
	}
	if (flag == 23 && k != n - 1 && table[j][k + 1] == 0) {
		k++;
		c_4(table, i, &j, &k);
		cub_9(table, 33, i, j, k, n); //return flag = 33;
	}
	if (flag == 29 || flag == 31) {
		if (flag == 31 && k != 0 && table[j][k - 1] == 0) {
			k--;
			c_2(table, i, &j, &k);
		}
		else if (j != n - 1 && table[j + 1][k] == 0) {
			j++;
			c_2(table, i, &j, &k);
		}
		flag = 39;
	}
	if (flag == 39 && j != n - 1 && table[j + 1][k] == 0) {
		j++;
		c_2(table, i, &j, &k);
		flag = 49;
	}
	if (flag == 29 || flag == 31) {
		if (flag == 13 && k != 0 && table[j][k - 1] == 0) {
			k--;
			c_8(table, i, &j, &k);
		}
		else if (j != n - 1 && table[j + 1][k] == 0) {
			j++;
			c_8(table, i, &j, &k);
		}
		flag = 21;
	}
	if (flag == 21 && k != 0 && table[j][k - 1] == 0) {
		k--;
		c_8(table, i, &j, &k);
		flag = 11;
	}
	if (flag == 19 || flag == 41) {
		if (flag == 19 && k != n - 1 && table[j][k + 1] == 0) {
			k++;
			c_3(table, i, &j, &k);
		}
		else if (j != 0 && table[j - 1][k] == 0) {
			j--;
			c_3(table, i, &j, &k);
		}
		flag = 49;
	}
	if (flag == 47 && k != n - 1 && table[j][k + 1] == 0) {
		k++;
		c_3(table, i, &j, &k);
		flag = 39;
	}
	if (flag == 19 || flag == 41) {
		if (flag == 19 && k != n - 1 && table[j][k + 1] == 0) {
			k++;
			c_5(table, i, &j, &k);
		}
		else if (j != 0 && table[j - 1][k] == 0) {
			j--;
			c_5(table, i, &j, &k);
		}
		flag = 11;
	}
	if (flag == 11 && j != 0 && table[j - 1][k] == 0) {
		j--;
		c_5(table, i, &j, &k);
		flag = 21;
	}
	if (flag == 43 || flag == 37) {
		if (flag == 37 && k != 0 && table[j][k - 1] == 0) {
			k--;
			c_6(table, i, &j, &k);
		}
		else if (j != 0 && table[j - 1][k] == 0) {
			j--;
			c_6(table, i, &j, &k);
		}
		flag = 33;
	}
	if (flag == 33 && j != 0 && table[j - 1][k] != 0) {
		j--;
		c_6(table, i, &j, &k);
		return flag = 23;
	}
	if (flag == 43 || flag == 37) {
		if (flag == 37 && k != 0 && table[j][k - 1] == 0) {
			k--;
			c_7(table, i, &j, &k);
		}
		else if (j != 0 && table[j - 1][k] == 0) {
			j--;
			c_7(table, i, &j, &k);
		}
		flag = 47;
	}
	if (flag == 47 && k != 0 && table[j][k - 1] == 0) {
		k--;
		c_7(table, i, &j, &k);
		flag = 17;
	}
	
	//зигзаги
	if (flag == 17 && j != n - 1 && table[j + 1][k] == 0) {
		j++;
		zzHOR_1(table, i, &j, &k);
		flag = 39;
	}
	if (flag == 11 && j != n - 1 && table[j + 1][k] == 0) {
		j++;
		zzHOR_2(table, i, &j, &k);
		flag = 33;
	}
	if (flag == 33 && j != 0 && table[j - 1][k] == 0) {
 		j--;
		zzHOR_3(table, i, &j, &k);
		flag = 11;
	}
	if (flag == 39 && j != n - 1 && table[j + 1][k] == 0) {
		j++;
		zzHOR_4(table, i, &j, &k);
		flag = 17;
	}
	if (flag == 23 && k != n - 1 && table[j][k + 1] == 0) {
		k++;
		zzVER_1(table, i, &j, &k);
		flag = 49;
	}
	if (flag == 49 && k != n - 1 && table[j][k + 1] == 0) {
		k++;
		zzVER_2(table, i, &j, &k);
		flag = 23;
	}
	if (flag == 47 && k != 0 && table[j][k - 1] == 0) {
		k--;
		zzVER_3(table, i, &j, &k);
		flag = 21;
	}
	if (flag == 21 && k != 0 && table[j][k - 1] == 0) {
		k--;
		zzVER_4(table, i, &j, &k);
		flag = 47;
	}

	//обходные 
	if (flag == 11 && j != 0 && table[j - 1][k] == 0) {
		j--;
		o_1(table, i, &j, &k);
		flag = 1;
	}
	if (flag == 49 && k != n - 1 && table[j][k + 1] == 0) {
		k++;
		o_1(table, i, &j, &k);
		flag = 11;
	}
	if (flag == 33 && j != 0 && table[j - 1][k] == 0) {
		j--;
		o_2(table, i, &j, &k);
		flag = 3;
	}
	if (flag == 47 && k != 0 && table[j][k - 1] == 0) {
		k--;
		o_2(table, i, &j, &k);
		flag = 33;
	}
	if (flag == 47 && k != 0 && table[j][k - 1] == 0) {
		k--;
		o_3(table, i, &j, &k);
		flag = 7;
	}
	if (flag == 33 && j != 0 && table[j - 1][k] == 0) {
		j--;
		o_3(table, i, &j, &k);
		flag = 47;
	}
	if (flag == 21 && k != 0 && table[j][k - 1] == 0) {
		k--;
		o_4(table, i, &j, &k);
		flag = 1;
	}
	if (flag == 39 && j != n - 1 && table[j + 1][k] == 0) {
		j++;
		o_4(table, i, &j, &k);
		flag = 21;
	}
	if (flag == 17 && j != n - 1 && table[j + 1][k] == 0) {
		j++;
		o_5(table, i, &j, &k);
		flag = 7;
	}
	if (flag == 23 && k != n - 1 && table[j][k + 1] == 0) {
		k++;
		o_5(table, i, &j, &k);
		flag = 17;
	}
	if (flag == 39 && j != n - 1 && table[j + 1][k] == 0) {
		j++;
		o_6(table, i, &j, &k);
		flag = 9;
	}
	if (flag == 21 && k != 0 && table[j][k - 1] == 0) {
		k--;
		o_6(table, i, &j, &k);
		flag = 39;
	}
	if (flag == 49 && k != n - 1 && table[j][k + 1] == 0) {
		k++;
		o_7(table, i, &j, &k);
		flag = 9;
	}
	if (flag == 11 && j != n - 1 && table[j + 1][k] == 0) {
		j++;
		o_7(table, i, &j, &k);
		flag = 49;
	}
	if (flag == 23 && k != n - 1 && table[j][k + 1] == 0) {
		k++;
		o_8(table, i, &j, &k);
		flag = 3;
	}
	if (flag == 17 && j != n - 1 && table[j + 1][k] == 0) {
		j++;
		o_8(table, i, &j, &k);
		flag = 23;
	}

	//cub_9(table, flag, i, j, k, sum);
	return flag;
}

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

		//занул€ем
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
			//table[j][k + 1] = i++;

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

			flag = 39;
		}

		int sum = n * n - 18;
		//while (sum > 0) {
			flag = cub_9(table, flag, i, j, k, n);
			printf("flag=%d\n", flag);
		//}

		//печатаем
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



//сделать менюшку
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