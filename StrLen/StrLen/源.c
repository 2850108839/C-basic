#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int StrLen(const char* str) {
	if (*str =='\0') {
		return 0;
	}
	else {
		return 1 + StrLen(str + 1);
	}
}


int main() {
	char  *str = "abcdefg";
	int len = StrLen(str);
	printf("%d", len);
	system("pause");
	return 0;
}