#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int ExchangeNumer(int* x, int* y) {
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}


int main() {
	int a = 2;
	int b = 3;
	ExchangeNumer(&a, &b);
	printf("%d %d", a, b);
	system("pause");
	return 0;
}