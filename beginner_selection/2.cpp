#include <iostream>

int main() {
    std::string s;
    std::cin >> s;

    int num = 0;
    for (char c: s) {
        if (c == '1') num += 1;
    }
    std::cout << num << std::endl;
    return 0;
}