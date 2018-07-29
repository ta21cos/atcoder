#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i=0; i<n; i++) {
        std::cin >> arr[i];
    }
    std::cout << arr[1] << std::endl;

    std::sort(arr.begin(), arr.end(), std::greater<int>());

    int alice_sum = 0, bob_sum = 0;
    for (int i=0; i<arr.size(); i++) {
        if (i % 2 == 0) {
            // Alice
            alice_sum += arr[i];
        } else {
            // Bob
            bob_sum += arr[i];
        }
    }
    std::cout << alice_sum - bob_sum << std::endl;
    return 0;
}