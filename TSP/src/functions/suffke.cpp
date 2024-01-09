#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>

void shuffleVector(std::vector<int>& vec) {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 gen(seed);

    int n = vec.size();
    for (int i = n - 1; i > 0; --i) {
        std::uniform_int_distribution<> dis(0, i);
        int j = dis(gen);
        std::swap(vec[i], vec[j]);
    }
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::cout << "Vector truoc khi xao tron: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    shuffleVector(vec);

    std::cout << "Vector sau khi xao tron: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}