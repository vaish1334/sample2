#include <iostream>
#include <iomanip>

int hex_add(int x, int y) {
    return x + y;
}

int hex_subtract(int x, int y) {
    return x - y;
}

int main() {
    int x, y;
    char operation;

    std::cout << "Enter first hexadecimal number: ";
    std::cin >> std::hex >> x;
    std::cout << "Enter second hexadecimal number: ";
    std::cin >> std::hex >> y;
    std::cout << "Enter operation (+ or -): ";
    std::cin >> operation;

    if (operation == '+') {
        std::cout << "Result: 0x" << std::hex << std::uppercase << hex_add(x, y) << std::endl;
    } else if (operation == '-') {
        std::cout << "Result: 0x" << std::hex << std::uppercase << hex_subtract(x, y) << std::endl;
    } else {
        std::cout << "Invalid operation" << std::endl;
    }

    return 0;
}
