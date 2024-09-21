#include<iostream>

int main(int argc, char* argv[]) {
	int x = 0;
	int y = 0;
	int z = 0;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);
	int g = y * z * x * 2;
	printf("%d", g);
	return EXIT_SUCCESS;
}