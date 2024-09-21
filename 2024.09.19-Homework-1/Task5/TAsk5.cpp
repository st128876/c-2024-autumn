#include<iostream>

int main(int argc, char argv[]) {
    int x = 0;
    scanf_s("%d", &x);
    int y = x + 1;
    int ans = x - 1;
    printf("The next number for the number %d is %d.\n", x, y);
    printf("The previous number for the number %d is %d.", x, ans);
    return EXIT_SUCCESS;
}