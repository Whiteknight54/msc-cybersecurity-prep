
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, first, second, pair;
    int pair_count[100] = {0};

    srand(time(NULL));

    for (i = 0; i < 10000; i++) {
        first  = (int)(10.0 * rand() / (RAND_MAX + 1.0));
        second = (int)(10.0 * rand() / (RAND_MAX + 1.0));
        pair = first * 10 + second;
        pair_count[pair]++;
    }

    printf("Pair\tCount\tPercentage\n");
    for (i = 0; i < 100; i++) {
        printf("%02d\t%d\t%.2f%%\n", i, pair_count[i], (pair_count[i] / 10000.0) * 100);
    }

    return 0;
}
