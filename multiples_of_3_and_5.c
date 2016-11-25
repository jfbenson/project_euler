#include <stdio.h>
#include <time.h>

void main(void)
{
    clock_t begin = clock();
    clock_t end = 0;
    long unsigned int i;
    long unsigned int sum = 0;
    unsigned char three, five;
    i = three = five = 1;

    while (i < 1000)
    {
        if (three == 3 || five == 5)
        {
            sum += i;
            three = (three == 3) ? 0 : three;
            five = (five == 5) ? 0 : five;
        }
        ++i; ++three; ++five;
    }

    end = clock();
    printf("Answer: %li\n", sum);
    printf("Runtime: %f\n", (double)(end-begin) / CLOCKS_PER_SEC);
}
