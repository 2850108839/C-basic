#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

void* MemCpy(void*dest, const void* src, size_t num) {
	assert(dest);
	assert(src);
	char* pDest = (char*)dest;
	char* pSrc = (char*)src;
	for (size_t i = 0; i <  num; i++) {
		*(pDest + i) = *(pSrc + i);
	}
	return dest;
}
int main() {
	int str[4] = { 1,2,3,4 };
	int str1[4] = { 0 };
	MemCpy(str1, str, sizeof(str));
	for (int i = 0; i < 4; i++) {
		printf("%d", str1[i]);
	}
	system("pause");
	return 0;
}