#include <iostream>
#include <vector>

int main() {
    int n, y;
    std::cin >> n >> y;

    int num = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            for (int k=0; k<n; k++) {
                if (i + j + k != n) {
                    continue;
                }
                if (10000*i + 5000*j + 1000*k == y) {
                    std::cout << i << " " << j << " " << k << "\n";
                    return 0;
                }
            }
        }
    }
    std::cout << -1 << " " << -1 << " " << -1 << "\n";
    return 0;
}