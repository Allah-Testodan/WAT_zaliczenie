#include <stdio.h>


int main()
{
int     i,  j;

    printf("Input the value of A: \n");
        if ((scanf(" %d", &i)) != 1) {
            printf("Invalid input, enter a valid integer value: \n");
                return 1;
        }

        printf("Input the value of B: \n");
            if ((scanf(" %d", &j)) != 1) {
                printf("Invalid input, enter a valid integer value: \n");
                    return 1;
            }

                if (j > i) {
                    printf("%d is higher than %d \n", j, i);
                }
                    else if (j == i) {
                        printf("%d is equal to %d \n", i, j);
                    }
                        else {
                            printf("%d is lower than %d \n", j, i);
                        }

    return 0;
}