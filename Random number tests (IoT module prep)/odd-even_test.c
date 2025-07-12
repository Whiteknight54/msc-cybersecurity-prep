#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, random_number;
    int odd = 0, even = 0;

    srand(time(NULL));

    for (i = 0; i < 10000; i++) {
        random_number = (int)(10.0 * rand() / (RAND_MAX + 1.0));
        if (random_number % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even: %d (%.2f%%)\n", even, (even / 10000.0) * 100);
    printf("Odd:  %d (%.2f%%)\n", odd,  (odd / 10000.0) * 100);
    return 0;
}
