#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int isLeapyear(int year) {
	if (year % 4 == 0) {
		if (year % 400 == 0) {
			printf("%d年是闰年", year);
		}else if (year % 100 != 0) {
			printf("%d年是闰年", year);
		}else {
			printf("%d年不是闰年", year);
		}
	}
}

int main(){
	int year = 0;
	printf("请输入要判断的年份:");
	scanf("%d", &year);
	isLeapyear(year);
	system("pause");
	return 0;
}