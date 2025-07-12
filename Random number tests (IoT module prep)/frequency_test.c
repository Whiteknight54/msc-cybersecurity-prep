#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, random_number;
    int count[10] = {0};

    srand(time(NULL));

    for (i = 0; i < 10000; i++) {
        random_number = (int)(10.0 * rand() / (RAND_MAX + 1.0));
        count[random_number]++;
    }

    printf("Digit\tFrequency\tPercentage\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t%d\t\t%.2f%%\n", i, count[i], (count[i] / 10000.0) * 100);
    }

    return 0;
}
