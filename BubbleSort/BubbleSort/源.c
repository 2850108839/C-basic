#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int str[],int len) {
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < len - 1 - i; j++) {
			if (str[j] > str[j + 1]) {
				temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
		}
	}
}

int main() {
	int str[10] = { 2, 5, 4, 8, 45, 7, 2, 9, 12, 1 };
	int len = sizeof(str) / sizeof(str[0]);
	BubbleSort(str, len);
	int i = 0;
	printf("排序后的数组为\n");
	for (i; i < len; i++) {
		printf("%d ", str[i]);
	}
	system("pause");
	return 0;
}