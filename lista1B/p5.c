#include <stdio.h>

int main() {
	int n;
	unsigned long int fat;
	int i;
	fat = 1;
	scanf("%d", &n);

	for(i=1;i<=n;i++) {
		fat = fat * i;
	}

	printf("%d! = %lu\n", n, fat);

	return 0;
}