#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int isLeapyear(int year) {
	if (year % 4 == 0) {
		if (year % 400 == 0) {
			printf("%d��������", year);
		}else if (year % 100 != 0) {
			printf("%d��������", year);
		}else {
			printf("%d�겻������", year);
		}
	}
}

int main(){
	int year = 0;
	printf("������Ҫ�жϵ����:");
	scanf("%d", &year);
	isLeapyear(year);
	system("pause");
	return 0;
}