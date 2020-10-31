#define _CRT_SECURE_NO_WARNINGS
#define N 1000
#include <stdio.h>
#include "funck.h"

int main() {
	int a[N];
	int num = 0;
	int c = 0;
	printf("Razmer mas\n");
	if (scanf("%d", &c) != 1) {
		return printf("Nepravilnie vvod");
	}
	if (c > N) {
		return printf("Oshibka");
	}
	printf("Vvchodnoy massiv\n");
	for (size_t i = 0; i < c; i++) {
		if (scanf("%d", &a[i]) != 1) {
			return printf("Nepravilnie vvod");
		}
	}
	printf("Vvedite chislo\n");
	if (scanf("%d", &num) != 1) {
		return printf("Nepravilnie vvod");
	}
	printf("%d", funck(a, c, num));
	return 0;

}