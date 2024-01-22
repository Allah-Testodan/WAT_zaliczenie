#include <stdio.h>

int     is_negative(int n) {
    if (n < 0) {
        return 1;
    }
            else {
                return 0;
            }
return 1;
}

int     check_parity(int n) {
    if (n % 2 == 0) {
        return 1;
    }
            else {
                return 0;
            }
}

int     is_primary(int n) {
    if (n <= 1) {
        return 0;
    }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return 0;
        }
    }
return 1;
}

int     main()
{
    int     n;
    int     control;

        printf("Input the value of number: \n");
                if ((scanf(" %d", &n)) != 1) {
                        printf("Invalid input! \n");
                return 1;
                }

            printf("Choose 1 to check the sign of a number, 2 to check the parity, 3 the primary \n");
                    if ((scanf(" %d", &control)) != 1) {
                            printf("Invalid input! \n");
                    return 1;
                    }       

        switch (control) {
                case 1 : 
                    if (is_negative(n)) {
                                printf("%d is a negative number! \n", n);
                            }
                            else if (n == 0) {
                                printf("%d is equal to zero! \n", n);
                            }
                            else {
                                printf("%d is a positive number! \n", n);
                            }
                                    break;
                                    
                case 2 :
                    if (check_parity(n)) {
                        printf("%d is even! \n", n);
                    }
                    else {
                        printf("%d is odd! \n", n);
                    }
                        break;

                case 3 :
                    if (is_primary(n)) {
                                printf("%d is a prime number! \n", n);
                            }
                            else {
                                printf("%d is not a prime number! \n", n);
                            }
                                    break;
                  }

is_primary(n);
is_negative(n);
check_parity(n);

    return 0;
}