#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int Fun(int n)
{
	if (n == 5)
		return 2;
	else
		return 2 * Fun(n + 1);
}

int main() {
	int num = Fun(2);
	printf("%d", num);
	system("pause");
	return 0;
}