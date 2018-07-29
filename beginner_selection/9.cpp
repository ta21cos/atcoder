#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    while(s.size() > 0) {
        std::cout << s << "\n";
        if (s.size() >= 7 && s.substr(s.size()-7, s.size()) == "dreamer") {
            s = s.substr(0, s.size()-7);
        } else if (s.size() >= 5 && s.substr(s.size()-5, s.size()) == "dream") {
            s = s.substr(0, s.size()-5);
        } else if (s.size() >= 6 && s.substr(s.size()-6, s.size()) == "eraser") {
            s = s.substr(0, s.size()-6);
        } else if (s.size() >= 5 && s.substr(s.size()-5, s.size()) == "erase") {
            s = s.substr(0, s.size()-5);
        } else {
            std::cout << "NO" << "\n";
            return 0;
        }
    }
    std::cout << "YES" << "\n";
    return 0;
}