#include <stdio.h>
#include <omp.h>
#include <iostream>

//export OMP_NUM_THREADS=4
int main(int argc, char** argv) {
    long long total_Sum = 0;

    double start = omp_get_wtime();

    #pragma omp parallel
    {
        long long partial_Sum = 0;

        #pragma omp for
        for (int i = 1; i <= 1000000000; i++) {
            partial_Sum += i;
        }

        // soma parcial de cada thread em uma região segura
        #pragma omp atomic
        total_Sum += partial_Sum;
    }

    double end = omp_get_wtime();

    std::cout << "Execution Time: " << (end - start) << " seconds\n";
    std::cout << "Total Sum: " << total_Sum << std::endl;

    return 0;
}
