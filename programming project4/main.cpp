#include <iostream>

int main() {
    int first = 0, second = 1, next;
    for (int i = 0; i < 50; ++i) {
       std::cout << "dunballeh fibonacci " << i + 1 << ": " << first << std::endl;
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
