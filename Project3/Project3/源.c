#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void init(int* arr[], int len) {
	for (int i = 0; i < len; i++) {
		arr[i] = 0;
	}
	printf("初始化后的数组\n");
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
}

void print(int* arr, int len) {
	printf("这个数组为\n");
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
}

void reverse(int* arr[], int len) {
	for (int i = 0,j=len-1; i < len-1,j>(len/2-1); i++,j--) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	printf("逆置后的数组为\n");
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
	int* str[] = { 1,2,3,4,5,6,7 };
	int len = sizeof(str) / sizeof(str[0]);
	print(str,len);
	printf("\n");
	reverse(str, len);
	printf("\n");
	init(str, len);
	system("pause");
	return 0;
}