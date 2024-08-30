#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int N = 1000000;
    clock_t start = clock();

    for (int i = 0; i < N; ++i) {
        int* arr = (int*)malloc(100 * sizeof(int));
        free(arr);
    }

    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken by malloc: %f s\n", time_spent);

    return 0;
}
