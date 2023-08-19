#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> height(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> height[i];
    }

    bool arranged = true;
    for (int i = 0; i < n - 1; ++i) {
        if (height[i] > height[i + 1]) {
            arranged = false;
            break;
        }
    }

    if (arranged) {
        std::cout << "ok" << std::endl;
    } else {
        std::cout << "precisa de ajuste" << std::endl;
    }

    return 0;
}
