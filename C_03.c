#include <stdio.h>

void    count(int x, int y, int z, int *sum)
{
    *sum = x + y + z;
}

int     main()
{
    int x, y, z, sum;

    printf("Input the value of first input: \n");
        scanf("%d", &x);

    printf("Input the value of second input: \n");
        scanf("%d", &y);

    printf("Input the value of third input: \n");
        scanf("%d", &z);

    count(x, y, z, &sum);
        printf("The sum is equal to: %d", sum);
    return 0;
}