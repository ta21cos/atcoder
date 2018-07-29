#include <iostream>
#include <math.h>

int sum_of_each_digit(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = floor(n / 10);
    }
    return sum;
}

int main() {
    int a, b, n;
    std::cin >> n >> a >> b;

    int sum = 0;
    for (int i=1; i<=n; i++) {
        int sum_of_digits = sum_of_each_digit(i);
        if ((a <= sum_of_digits) && (sum_of_digits <= b)) {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}