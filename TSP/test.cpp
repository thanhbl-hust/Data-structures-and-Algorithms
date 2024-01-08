#include <iostream>
#include <algorithm>
#include <random>
#include <chrono>

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(arr, arr + n, std::default_random_engine(seed));

    for (int i = 0; i < n; i++) std::cout << arr[i] << " ";

    return 0;
}