#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

//откаты на зигзаги
int** zzHOR_11(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[*j][(*k)--] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)++] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)--] = 0;
	a[*j][(*k)--] = 0;
	a[*j][*k] = 0;

	return a;
}
int** zzHOR_22(int** a, int* i, int* j, int* k) {
	*i -= 9;

	a[*j][(*k)--] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)++] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)--] = 0;
	a[*j][(*k)--] = 0;
	a[*j][*k] = 0;

	return a;
}
int** zzHOR_33(int** a, int* i, int* j, int* k) {
	*i -= 9;

	a[*j][(*k)++] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)--] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)++] = 0;
	a[*j][(*k)++] = 0;
	a[*j][*k] = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++)
			printf("%3d ", a[i][j]);
		printf("\n");
	}
	printf("\n");
	return a;
}
int** zzHOR_44(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[*j][(*k)++] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)--] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)++] = 0;
	a[*j][(*k)++] = 0;
	a[*j][*k] = 0;

	return a;
}
int** zzVER_11(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[(*j)--][*k] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)++][*k] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)--][*k] = 0;
	a[(*j)--][*k] = 0;
	a[*j][*k] = 0;

	return a;
}
int** zzVER_22(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[(*j)++][*k] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)--][*k] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)++][*k] = 0;
	a[(*j)++][*k] = 0;
	a[*j][*k] = 0;

	return a;
}
int** zzVER_33(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[(*j)++][*k] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)--][*k] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)++][*k] = 0;
	a[(*j)++][*k] = 0;
	a[*j][*k] = 0;

	return a;
}
int** zzVER_44(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[(*j)--][*k] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)++][*k] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)--][*k] = 0;
	a[(*j)--][*k] = 0;
	a[*j][*k] = 0;

	return a;
}

//откаты на центровые
int** c_11(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[*j][(*k)++] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)--][*k] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)--][*k] = 0;
	a[*j][*k] = 0;

	return a;
}
int** c_22(int** a, int* i, int* j, int* k) {
	*i -= 9;

	a[*j][(*k)--] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)--][*k] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)--][*k] = 0;
	

	a[*j][*k] = 0;

	return a;
}
int** c_33(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[(*j)--][*k] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)--] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)--] = 0;

	a[*j][*k] = 0;

	return a;
}
int** c_44(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[(*j)++][*k] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)--] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)--] = 0;
	a[*j][*k] = 0;

	return a;
}
int** c_55(int** a, int* i, int* j, int* k) {
	*i -= 9;

	a[*j][(*k)++] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)++][*k] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)++][*k] = 0;
	a[*j][*k] = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++)
			printf("%3d ", a[i][j]);
		printf("\n");
	}
	printf("\n");
	return a;
}
int** c_66(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[*j][(*k)--] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)++][*k] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)++][*k] = 0;
	a[*j][*k] = 0;

	return a;
}
int** c_77(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[(*j)--][*k] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)++] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)++] = 0;
	a[*j][*k] = 0;

	return a;
}
int** c_88(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[(*j)++][*k] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)++] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)++] = 0;
	a[*j][*k] = 0;

	return a;
}

//откаты на обходные
int** o_11(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[(*j)++][*k] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)++][*k] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)--] = 0;
	a[*j][(*k)--] = 0;
	a[*j][*k] = 0;

	return a;
}
int** o_22(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[(*j)++][*k] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)++][*k] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)++] = 0;
	a[*j][(*k)++] = 0;
	
	a[*j][*k] = 0;

	return a;
}
int** o_33(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[*j][(*k)++] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)++] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)++][*k] = 0;
	a[(*j)++][*k] = 0;
	a[*j][*k] = 0;

	return a;
}
int** o_44(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[*j][(*k)++] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][*k] = 0;

	return a;
}
int** o_55(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[(*j)--][*k] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)--][*k] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)--] = 0;
	a[*j][(*k)--] = 0;
	a[*j][*k] = 0;

	return a;
}
int** o_66(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[(*j)--][*k] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)--][*k] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)++] = 0;
	a[*j][(*k)++] = 0;
	a[*j][*k] = 0;

	return a;
}
int** o_77(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[*j][(*k)--] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)--][*k] = 0;
	a[*j][(*k)--] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)++][*k] = 0;
	a[(*j)++][*k] = 0;
	a[*j][*k] = 0;

	return a;
}
int** o_88(int** a, int* i, int* j, int* k) {
	*i -= 9;
	a[*j][(*k)--] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)++] = 0;
	a[(*j)++][*k] = 0;
	a[*j][(*k)--] = 0;
	a[*j][(*k)--] = 0;
	a[(*j)--][*k] = 0;
	a[(*j)--][*k] = 0;
	
	a[*j][*k] = 0;

	return a;
}


//зигзаги
int** zzHOR_1(int** a, int* i, int* j, int* k) {
	a[*j][(*k)++] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** zzHOR_2(int** a, int* i, int* j, int* k) {
	a[*j][(*k)++] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** zzHOR_3(int** a, int* i, int* j, int* k) {
	a[*j][(*k)--] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** zzHOR_4(int** a, int* i, int* j, int* k) {
	a[*j][(*k)--] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** zzVER_1(int** a, int* i, int* j, int* k) {
	a[(*j)++][*k] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** zzVER_2(int** a, int* i, int* j, int* k) {
	a[(*j)--][*k] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** zzVER_3(int** a, int* i, int* j, int* k) {
	a[(*j)--][*k] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** zzVER_4(int** a, int* i, int* j, int* k) {
	a[(*j)++][*k] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}

//центровые
int** c_1(int** a, int* i, int* j, int* k) {
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** c_2(int** a, int* i, int* j, int* k) {
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** c_3(int** a, int* i, int* j, int* k) {
	a[*j][(*k)++] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** c_4(int** a, int* i, int* j, int* k) {
	a[*j][(*k)++] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** c_5(int** a, int* i, int* j, int* k) {
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** c_6(int** a, int* i, int* j, int* k) {
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** c_7(int** a, int* i, int* j, int* k) {
	a[*j][(*k)--] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** c_8(int** a, int* i, int* j, int* k) {
	a[*j][(*k)--] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}

//обходные
int** o_1(int** a, int* i, int* j, int* k) {
	a[*j][(*k)++] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** o_2(int** a, int* i, int* j, int* k) {
	a[*j][(*k)--] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** o_3(int** a, int* i, int* j, int* k) {
	a[(*j)--][*k] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** o_4(int** a, int* i, int* j, int* k) {
	a[(*j)++][*k] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** o_5(int** a, int* i, int* j, int* k) {
	a[*j][(*k)++] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** o_6(int** a, int* i, int* j, int* k) {
	a[*j][(*k)--] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** o_7(int** a, int* i, int* j, int* k) {
	a[(*j)--][*k] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}
int** o_8(int** a, int* i, int* j, int* k) {
	a[(*j)++][*k] = (*i)++;
	a[(*j)++][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)--] = (*i)++;
	a[(*j)--][*k] = (*i)++;
	a[*j][(*k)++] = (*i)++;
	a[*j][*k] = (*i)++;

	return a;
}


int cub_9(int** table, int flag, int i, int j, int k, int n, int* sum) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%3d ", table[i][j]);
		printf("\n");
	}
	printf("\n");
	int f;
	//вызовы паттернов
	if (*sum != 9 && table[0][n - 1] == 0) {
		//центровыe
		if (flag == 13 || flag == 27) {
			if (flag == 13 && k != n - 1 && table[j][k + 1] == 0) {
				k++;
				c_1(table, &i, &j, &k);
			}
			else if (j != n - 1 && table[j + 1][k] == 0) {
				j++;
				c_1(table, &i, &j, &k);
			}
			*sum -= 9;
			f = flag;
			flag = cub_9(table, 17, i, j, k, n, sum);
			if (flag == -1) {
				c_11(table, &i, &j, &k);
				*sum += 9;
				if (f == 13) k--;
				else j--;
			}
		}
		if (flag == 17 && j != n - 1 && table[j + 1][k] == 0) {
			j++;
			c_1(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 47, i, j, k, n, sum);
			if (flag == -1) {
				c_11(table, &i, &j, &k);
				*sum += 9;
				j--;
			}
		}
		if (flag == 13 || flag == 27) {
			if (flag == 13 && k != n - 1 && table[j][k + 1] == 0) {
				k++;
				c_4(table, &i, &j, &k);
			}
			else if (j != n - 1 && table[j + 1][k] == 0) {
				j++;
				c_4(table, &i, &j, &k);
			}

			*sum -= 9;
			f = flag;
			flag = cub_9(table, 23, i, j, k, n, sum);
			if (flag == -1) {
				c_44(table, &i, &j, &k);
				*sum += 9;
				if (f == 13) k--;
				else j--;
			}
		}
		if (flag == 23 && k != n - 1 && table[j][k + 1] == 0) {
			k++;
			c_4(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 33, i, j, k, n, sum);
			if (flag == -1) {
				c_44(table, &i, &j, &k);
				*sum += 9;
				k--;
			}
		}
		if (flag == 29 || flag == 31) {
			if (flag == 31 && k != 0 && table[j][k - 1] == 0) {
				k--;
				c_2(table, &i, &j, &k);
			}
			else if (j != n - 1 && table[j + 1][k] == 0) {
				j++;
				c_2(table, &i, &j, &k);
			}
			*sum -= 9;
			f = flag;
			flag = cub_9(table, 39, i, j, k, n, sum);
			if (flag == -1) {
				c_22(table, &i, &j, &k);
				*sum += 9;
				if (f == 31) k++;
				else j--;
			}
		}
		if (flag == 39 && j != n - 1 && table[j + 1][k] == 0) {
			j++;
			c_2(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 49, i, j, k, n, sum);
			if (flag == -1) {
				c_22(table, &i, &j, &k);
				*sum += 9;
				j--;
			}
		}
		if (flag == 29 || flag == 31) {
			if (flag == 13 && k != 0 && table[j][k - 1] == 0) {
				k--;
				c_8(table, &i, &j, &k);
			}
			else if (j != n - 1 && table[j + 1][k] == 0) {
				j++;
				c_8(table, &i, &j, &k);
			}
			*sum -= 9;
			f = flag;
			flag = cub_9(table, 21, i, j, k, n, sum);
			if (flag == -1) {
				c_88(table, &i, &j, &k);
				*sum += 9;
				if (f == 13) k++;
				else j--;
			}
		}
		if (flag == 21 && k != 0 && table[j][k - 1] == 0) {
			k--;
			c_8(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 11, i, j, k, n, sum);
			if (flag == -1) {
				c_88(table, &i, &j, &k);
				*sum += 9;
				k++;
			}
		}
		if (flag == 19 || flag == 41) {
			if (flag == 19 && k != n - 1 && table[j][k + 1] == 0) {
				k++;
				c_3(table, &i, &j, &k);
			}
			else if (j != 0 && table[j - 1][k] == 0) {
				j--;
				c_3(table, &i, &j, &k);
			}
			*sum -= 9;
			f = flag;
			flag = cub_9(table, 49, i, j, k, n, sum);
			if (flag == -1) {
				c_33(table, &i, &j, &k);
				*sum += 9;
				if (f == 19) k--;
				else j++;
			}
		}
		if (flag == 47 && k != n - 1 && table[j][k + 1] == 0) {
			k++;
			c_3(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 39, i, j, k, n, sum);
			if (flag == -1) {
				c_33(table, &i, &j, &k);
				*sum += 9;
				k--;
			}
		}
		if (flag == 19 || flag == 41) {
			if (flag == 19 && k != n - 1 && table[j][k + 1] == 0) {
				k++;
				c_5(table, &i, &j, &k);
			}
			else if (j != 0 && table[j - 1][k] == 0) {
				j--;
				c_5(table, &i, &j, &k);
			}
			*sum -= 9;
			f = flag;
			flag = cub_9(table, 11, i, j, k, n, sum);
			if (flag == -1) {
				c_55(table, &i, &j, &k);
				*sum += 9;
				if (f == 19) k--;
				else j++;
			}
		}
		if (flag == 11 && j != 0 && table[j - 1][k] == 0) {
			j--;
			c_5(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 21, i, j, k, n, sum);
			if (flag == -1) {
				c_55(table, &i, &j, &k);
				j++;
				*sum += 9;
			}
		}
		if (flag == 43 || flag == 37) {
			if (flag == 37 && k != 0 && table[j][k - 1] == 0) {
				k--;
				c_6(table, &i, &j, &k);
			}
			else if (j != 0 && table[j - 1][k] == 0) {
				j--;
				c_6(table, &i, &j, &k);
			}
			*sum -= 9;
			f = flag;
			flag = cub_9(table, 33, i, j, k, n, sum);
			if (flag == -1) {
				c_66(table, &i, &j, &k);
				*sum += 9;
				if (f == 37) k++;
				else j++;
			}
		}
		if (flag == 33 && j != 0 && table[j - 1][k] != 0) {
			j--;
			c_6(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 23, i, j, k, n, sum);
			if (flag == -1) {
				c_66(table, &i, &j, &k);
				*sum += 9;
				j++;
			}
		}
		if (flag == 43 || flag == 37) {
			if (flag == 37 && k != 0 && table[j][k - 1] == 0) {
				k--;
				c_7(table, &i, &j, &k);
			}
			else if (j != 0 && table[j - 1][k] == 0) {
				j--;
				c_7(table, &i, &j, &k);
			}
			*sum -= 9;
			f = flag;
			flag = cub_9(table, 47, i, j, k, n, sum);
			if (flag = -1) {
				c_77(table, &i, &j, &k);
				*sum += 9;
				if (f == 37) k++;
				else j++;
			}
		}
		if (flag == 47 && k != 0 && table[j][k - 1] == 0) {
			k--;
			c_7(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 17, i, j, k, n, sum);
			if (flag == -1) {
				c_77(table, &i, &j, &k);
				*sum += 9;
				k++;
			}
		}

		//зигзаги
		if (flag == 17 && j != n - 1 && table[j + 1][k] == 0) {
			j++;
			zzHOR_1(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 39, i, j, k, n, sum);
			if (flag == -1) {
				zzHOR_11(table, &i, &j, &k);
				*sum += 9;
				j--;
			}
		}
		if (flag == 11 && j != n - 1 && table[j + 1][k] == 0) {
			j++;
			zzHOR_2(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 33, i, j, k, n, sum);
			if (flag == -1) {
				zzHOR_22(table, &i, &j, &k);
				j--;
				*sum += 9;
			}
		}
		if (flag == 33 && j != 0 && table[j - 1][k] == 0) {
			j--;
			zzHOR_3(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 11, i, j, k, n, sum);
			if (flag == -1) {
				zzHOR_33(table, &i, &j, &k);
				j++;
				*sum += 9;
			}
		}
		if (flag == 39 && j != n - 1 && table[j + 1][k] == 0) {
			j++;
			zzHOR_4(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 17, i, j, k, n, sum);
			if (flag == -1) {
				zzHOR_44(table, &i, &j, &k);
				*sum += 9;
				j--;
			}
		}
		if (flag == 23 && k != n - 1 && table[j][k + 1] == 0) {
			k++;
			zzVER_1(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 49, i, j, k, n, sum);
			if (flag == -1) {
				zzVER_11(table, &i, &j, &k);
				*sum += 9;
				k--;
			}
		}
		if (flag == 49 && k != n - 1 && table[j][k + 1] == 0) {
			k++;
			zzVER_2(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 23, i, j, k, n, sum);
			if (flag == -1) {
				zzVER_22(table, &i, &j, &k);
				*sum += 9;
				k--;
			}
		}
		if (flag == 47 && k != 0 && table[j][k - 1] == 0) {
			k--;
			zzVER_3(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 21, i, j, k, n, sum);
			if (flag == -1) {
				zzVER_33(table, &i, &j, &k);
				*sum += 9;
				k++;
			}
		}
		if (flag == 21 && k != 0 && table[j][k - 1] == 0) {
			k--;
			zzVER_4(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 47, i, j, k, n, sum);
			if (flag == -1) {
				zzVER_44(table, &i, &j, &k);
				*sum += 9;
				k++;
			}
		}

		//обходные 
		if (flag == 49 && k != n - 1 && table[j][k + 1] == 0) {
			k++;
			o_1(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 11, i, j, k, n, sum);
			if (flag == -1) {
				o_11(table, &i, &j, &k);
				*sum += 9;
				k--;
			}
		}
		if (flag == 47 && k != 0 && table[j][k - 1] == 0) {
			k--;
			o_2(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 33, i, j, k, n, sum);
			if (flag == -1) {
				o_22(table, &i, &j, &k);
				*sum += 9;
				k++;
			}
		}
		if (flag == 33 && j != 0 && table[j - 1][k] == 0) {
			j--;
			o_3(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 47, i, j, k, n, sum);
			if (flag == -1) {
				o_33(table, &i, &j, &k);
				*sum += 9;
				j++;
			}
		}
		if (flag == 39 && j != n - 1 && table[j + 1][k] == 0) {
			j++;
			o_4(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 21, i, j, k, n, sum);
			if (flag == -1) {
				o_44(table, &i, &j, &k);
				*sum += 9;
				j--;
			}
		}
		if (flag == 23 && k != n - 1 && table[j][k + 1] == 0) {
			k++;
			o_5(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 17, i, j, k, n, sum);
			if (flag == -1) {
				o_55(table, &i, &j, &k);
				*sum += 9;
				k--;
			}
		}
		if (flag == 21 && k != 0 && table[j][k - 1] == 0) {
			k--;
			o_6(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 39, i, j, k, n, sum);
			if (flag == -1) {
				o_66(table, &i, &j, &k);
				*sum += 9;
				k++;
			}
		}
		if (flag == 11 && j != n - 1 && table[j + 1][k] == 0) {
			j++;
			o_7(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 49, i, j, k, n, sum);
			if (flag == -1) {
				o_77(table, &i, &j, &k);
				*sum += 9;
				j--;
			}
		}
		if (flag == 17 && j != n - 1 && table[j + 1][k] == 0) {
			j++;
			o_8(table, &i, &j, &k);
			*sum -= 9;
			flag = cub_9(table, 23, i, j, k, n, sum);
			if (flag == -1) {
				o_88(table, &i, &j, &k);
				*sum += 9;
				j--;
			}
		}
	}

	//последний квадрант
	else if (*sum == 9){ 
		if (flag == 11 && j != 0 && table[j - 1][k] == 0) {
			j--;
			o_1(table, &i, &j, &k);
			flag = 1;
		}
		if (flag == 33 && j != 0 && table[j - 1][k] == 0) {
			j--;
			o_2(table, &i, &j, &k);
			flag = 3;
		}
		if (flag == 47 && k != 0 && table[j][k - 1] == 0) {
			k--;
			o_3(table, &i, &j, &k);
			flag = 7;
		}
		if (flag == 21 && k != 0 && table[j][k - 1] == 0) {
			k--;
			o_4(table, &i, &j, &k);
			flag = 1;
		}
		if (flag == 17 && j != n - 1 && table[j + 1][k] == 0) {
			j++;
			o_5(table, &i, &j, &k);
			flag = 7;
		}
		if (flag == 39 && j != n - 1 && table[j + 1][k] == 0) {
			j++;
			o_6(table, &i, &j, &k);
			flag = 9;
		}
		if (flag == 49 && k != n - 1 && table[j][k + 1] == 0) {
			k++;
			o_7(table, &i, &j, &k);
			flag = 9;
		}
		if (flag == 23 && k != n - 1 && table[j][k + 1] == 0) {
			k++;
			o_8(table, &i, &j, &k);
			flag = 3;
		}
	}

	if (table[0][n - 1] == n * n)
		return 0;
	else /*if (table[0][n - 1] != 0 && table[0][n - 1] != n * n)*/
		return -1;
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
		//while (sum > 0) {
			flag = cub_9(table, flag, i, j, k, n, &sum);
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