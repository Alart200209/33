#define _CRT_SECURE_NO_WARNINGS
#define N 100
#include <stdio.h>
#include "funck.h"

int main() {
	int a[N];
	int num = 0;
	int count = 0;
	printf("Razmer mas\n");
	if (scanf("%d", &count) != 1) {
		return printf("Nepravilnie vvod");
	}
	if (count > N) {
		return printf("Oshibka");
	}
	printf("Vvchodnoy massiv\n");
	for (size_t i = 0; i < count; i++) {
		if (scanf("%d", &a[i]) != 1) {
			return printf("Nepravilnie vvod");
		}
	}
	printf("Vvedite chislo\n");
	if (scanf("%d", &num) != 1) {
		return printf("Nepravilnie vvod");
	}
	printf("%d", funck(a, count, num));
	return 0;

}