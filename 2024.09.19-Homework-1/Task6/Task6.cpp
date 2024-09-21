#include<iostream>

int main(int argc, char argv[]) {
	int x = 0;
	int y = 0;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	int a = x + y - 1;
	int z = a - x;
	int v = a - y;
	printf("%d %d", z, v);
	return EXIT_SUCCESS;
}