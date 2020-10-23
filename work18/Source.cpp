#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void enter(char* arr) {
	int i = 0;
	while (arr[i] != '\0') {
		if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z') {
			if (i % 10 == 0) {
				printf("\n");
				printf("%c", arr[i]);
			}
			else {
				printf("%c", arr[i]);
			}
		}
		else {
			break;
		}
		i++;
	}
}
int main() {
	char arr[1000];
	scanf("%[^\n]",&arr);
	enter(arr);
	return 0;
}