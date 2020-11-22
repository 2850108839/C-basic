#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void Exchange(int* str1[5], int* str2[5],int len) {
	int i = 0;
	for (i = 0; i < len; i++) {
		int temp = str1[i];
		str1[i] = str2[i];
		str2[i] = temp;
	}
	printf("str1\n");
	for (i = 0; i < len; i++) {
		printf("%d ", str1[i]);
	}
	printf("\n");
	printf("str2\n");
	for (i = 0; i < len; i++) {
		printf("%d ", str2[i]);
	}
}
int main() {
	int* arr1[5] = { 1,5,4,9,8 };
	int* arr2[5] = { 5,9,7,3,4 };
	int len = sizeof(arr1) / sizeof(arr1[0]);
	printf("交换后的数组为\n");
	Exchange(arr1, arr2,len);
	system("pause");
	return 0;
}