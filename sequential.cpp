#include <stdio.h>
#include <iostream>
#include <chrono>

int main(int argc, char** argv) {
    auto start = std::chrono::high_resolution_clock::now();
    int total_sum = 0;

    for (int i = 1; i <= 1000000000; i++) {
        total_sum += i;
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Execution Time: " << elapsed.count() << std::endl;
    printf("Total Sum: %d\n", total_sum);
    return 0;
}