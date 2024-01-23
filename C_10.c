#include <stdio.h>

int     check_bits(int n) {

int new_n, new_n_reversed;
int bit_4 = n & (1 << 4);
int bit_5 = n & (1 << 5);

    printf("%s", bit_4 ? "4-bit is set! \n" : "4-bit is not set! \n");
        printf("%s", bit_5 ? "5-bit is set! \n" : "5-bit is not set! \n");
  
    if (bit_4) {
        new_n = n & ~(1 << 4);
            printf("Number after clearing bits: %d \n", new_n);
    }
    if (bit_4) {
        new_n_reversed = n ^ (1 << 5);
        printf("Number after reversing bits: %d \n", new_n_reversed);
    }
}

int     count_bits(int n) {
    int count = 0;
    while (n) {
        count++;
        n &= n - 1;
    }
    return count;
}

int     main()
{
    int     n;

        printf("Input the value of integer number: \n");
        if ((scanf("%d", &n)) != 1) {
            printf("Invalid input! \n");
        }

        printf("Number of bits: %d \n", count_bits(n));

count_bits(n);
check_bits(n);

    return 0;
}