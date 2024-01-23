#include <stdio.h>

void    check_sign(int i) {
    if (i > 0) {
        printf("%d is positive! \n", i);
    }
        else if (i == 0) {
            printf("%d is equal to zero! \n", i);
    }
    else {
        printf("%d is negative! \n", i);
    }
}

int     check_primarity(int i) {
    if (i <= 1) {
        return 0;
    }
            for (int p = 2; p * p <= i; p++) {
                if (i % p == 0) {
                    return 0;
                }  
            }
    return 1; 
}

int     check_parity(int i) {
        if (i % 2 == 0) {
        return 1;
    }
            else {
                return 0;
            }
    return 1;
}

int     main()
{
    int     i;

    printf("Input the value of A: \n");
        scanf(" %d", &i);

        if (check_primarity(i)) {
            printf("%d is a prime number! \n", i);
        }
                else {
                    printf("%d is not a prime number! \n", i);
                }
                        if (check_parity(i)) {
                            printf("%d is even! \n", i);
                        }
                else {
                    printf("%d is odd! \n", i);
                }

check_parity(i);
check_primarity(i);
check_sign(i);

    return 0;
}