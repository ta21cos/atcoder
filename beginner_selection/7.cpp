#include <iostream>
#include <vector>
#include <array>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);

    for (int i=0; i<n; i++) {
        std::cin >> arr[i];
    }

    std::array<int, 101> dict;
    for (int i=0; i<=100; i++) {
        dict[i] = 0;
    }

    int num = 0;
    for (int a : arr) {
        if (dict[a] == 0) {
            num += 1;
            dict[a] = 1;
        }
    }
    std::cout << num << std::endl;
    return 0;
}