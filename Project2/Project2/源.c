#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

reverse_string(char * string) {
	if (*string != 0) {
		reverse_string(string + 1);
	}
	printf("%c", *string);
}
int main() {
	char *string = "abcde";
	char str1=reverse_string(string);
	printf("%c", str1);
	system("pause");
	return 0;
}