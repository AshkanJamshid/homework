#include <iostream>
#include <math.h>
bool isRightTriangle(int a, int b, int c) {
    return (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b);
}

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    if (isRightTriangle(a, b, c)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}