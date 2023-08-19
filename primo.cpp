#include <iostream>

bool primo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int A, B;
    std::cin >> A >> B;
    
    for (int i = A; i <= B; ++i) {
        if (primo(i)) {
            std::cout << i << std::endl;
        }
    }
    
    return 0;
}
