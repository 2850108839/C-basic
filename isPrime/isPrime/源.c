#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int isPrime() {
	for (int i = 101; i <=200; i++) {
		for (int j = 2; j <= i; j++) {
			if (i%j == 0) {
				if (j >= i) {
					printf("%d\n", i);
				}else {
				break;
			}
			}
		}
	}
}

int main() {
	printf("100到200之间的素数为:");
	isPrime();
	system("pause");
	return 0;
}