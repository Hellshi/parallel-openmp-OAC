#include <stdio.h>

int main(int argc, char** argv) {
    int total_sum = 0;

    for (int i = 1; i <= 100000; i++) {
        total_sum += i;
    }

    printf("Total Sum: %d\n", total_sum);
    return 0;
}