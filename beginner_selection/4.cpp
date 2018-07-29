#include <iostream>

int main() {
    int a, b, c, x;
    std::cin >> a >> b >> c >> x;

    int n_patterns = 0;

    for (int i=0; i<=a; i++) {
        for (int j=0; j<=b; j++) {
            for (int k=0; k<=c; k++) {
                int sum = 500*i + 100*j + 50*k;
                if (sum == x) {
                    n_patterns ++;
                } else if (sum > x) {
                    break;
                }
            }
        }
    }
    std::cout << n_patterns << std::endl;
    return 0;
}