#include<stdio.h>
#include<string.h>
int main() {
	char a[100000];
	scanf_s("%s", a, sizeof(a));
	for (int i = strlen(a) - 1; i >= 0; i--) {
		printf("%c", a[i]);
	}
	return 0;
}