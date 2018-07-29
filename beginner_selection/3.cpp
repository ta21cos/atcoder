#include <iostream>

int main() {
    int n;
    std::cin >> n;

    auto arr = new int[n];
    int num = INT_MAX;
    for (int i=0; i<n; i++) {
        std::cin >> arr[i];
        int j = 0;
        while (arr[i] % 2 == 0) {
            j++;
            arr[i] /= 2;
        }
        if (num > j) {
            num = j;
        }
    }
    std::cout << num << std::endl;
    return 0;
}