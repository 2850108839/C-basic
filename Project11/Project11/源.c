#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main() {
	int sn = 0;
	int a = 2;
	sn = a * 5 + a * 4 * 10 + a * 3 * 100 + a * 2 * 1000 + a * 10000;
	printf("%d", sn);
	system("pause");
	return 0;
}