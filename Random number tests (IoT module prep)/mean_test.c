#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, random_number;
    double sum = 0.0;
    srand(time(NULL));
    for (i = 0; i < 1000; i++) {
        random_number = (int)(10.0 * rand() / (RAND_MAX + 1.0));
        sum += random_number;
    }
    double mean = sum / 1000;
    printf("Mean of 1000 random numbers: %.2f\n", mean);
    return 0;
}
