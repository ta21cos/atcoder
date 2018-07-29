#include <iostream>
#include <vector>
#include <array>

int time(std::array<int, 3> p) {
    return p[0];
}
int getx(std::array<int, 3> p) {
    return p[1];
}
int gety(std::array<int, 3> p) {
    return p[2];
}
bool equal(std::array<int, 3> p1, std::array<int, 3> p2) {
    if ((getx(p1) == getx(p2)) && (gety(p1) == gety(p2))) {
        return true;
    }
    return false;
}

bool dfs(std::array<int, 3> p_start, std::array<int, 3> p_goal, int depth) {
    if (equal(p_start, p_goal)) {
        return true;
    }
    if (depth == 0) {
        return false;
    }
    int p[][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    for (int i=0; i<4; i++) {
        int next_x = getx(p_start) + p[i][0];
        int next_y = gety(p_start) + p[i][1];
        std::array<int, 3> p_next = {time(p_start)+1, next_x, next_y};
        std::cout << getx(p_next) << " " << gety(p_next) << "\n";
        if (dfs(p_next, p_goal, depth-1)) {
            return true;
        }
    }
}

bool is_reachable(std::array<int, 3> p1, std::array<int, 3> p2) {
    int depth = p2[0] - p1[0];
    if (dfs(p1, p2, depth)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::array<int, 3>> arr(n);
    for (int i=0; i<n; i++) {
        int t, x, y;
        std::cin >> t >> x >> y;
        arr[i] = std::array<int, 3>({t, x, y});
    }

    for (int i=0; i<n-1; i++) {
        auto p1 = arr[i];
        auto p2 = arr[i+1];

        if (is_reachable(p1, p2)) {
            continue;
        } else {
            std::cout << "unreachable" << "\n";
            return 0;
        }
    }
    std::cout << "reachable" << "\n";
    return 0;
}