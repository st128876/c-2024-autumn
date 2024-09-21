#include <iostream>

int main() {
    int number;
    std::cin >> number;
    int hundreds = number / 100; 
    int tens = (number / 10) % 10; 
    int units = number % 10;
    int sum = hundreds + tens + units;


    printf("%d", sum);

    return EXIT_SUCCESS;
}