#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void* MemMove(void* dest, const void* src, size_t num) {
	//参数合法性校验
	assert(dest != NULL && src != NULL);
	//强制类型转换
	char* pDest = (char*)dest;
	char*pSrc = (char*)src;
	if (pSrc <= pDest && pDest <= pSrc + num) {
		//需要反着拷贝
		for (size_t i = num - 1; i >= 0; i--) {
			*(pDest + i) = *(pSrc + i);
		}
		return dest;
	}
	else {
		//不需要反着拷贝
		return memcpy(dest, src, num);
	}
}
	int main() {
		int str1[4] = { 1,2,3,4 };
		int str2[4] = { 0 };
		MemMove(str2, str1, sizeof(str1));
		for (int i = 0; i < 4; i++) {
			printf("%d\n", str2[i]);
		}
		system("pause");
		return 0;
	}