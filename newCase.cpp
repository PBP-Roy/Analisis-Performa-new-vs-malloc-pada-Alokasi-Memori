#include <iostream>
#include <chrono>

int main() {
    const int N = 1000000;
    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < N; ++i) {
        int* arr = new int[100];
        delete[] arr;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - start;
    std::cout << "Time taken by new: " << diff.count() << " s\n";

    return 0;
}
