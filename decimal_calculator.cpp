#include <iostream>

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int main() {
    int x, y;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> x;
    std::cout << "Enter second number: ";
    std::cin >> y;
    std::cout << "Enter operation (+ or -): ";
    std::cin >> operation;

    if (operation == '+') {
        std::cout << "Result: " << add(x, y) << std::endl;
    } else if (operation == '-') {
        std::cout << "Result: " << subtract(x, y) << std::endl;
    } else {
        std::cout << "Invalid operation" << std::endl;
    }

    return 0;
}
