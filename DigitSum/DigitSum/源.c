#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int DigitSum(number) {
	if (number < 9) {
		return 1;
	}else
		return (number%10+ DigitSum(number / 10));
}
int main() {
	int number = 0;
	printf("请输入一位非负数：");
	scanf("%d", &number);
	int unumber=DigitSum(number);
	printf("%d", unumber);
	system("pause");
	return 0;
}