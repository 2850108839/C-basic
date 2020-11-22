#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main() {
	int money = 0;
	printf("请输入您要付的金额数为\n");
	scanf("%d", &money);
	int bottle = 0;
	bottle = (money - 1) * 2;
	printf("您可以喝%d瓶汽水",bottle);
	system("pause");
	return 0;
}