#include <stdio.h>

int count(int x, int y, int z) {
    int sum = x + y + z;
}

void print_sum(int sum) {
    printf("The sum is equal to: %d", sum);
}

int main()
{
    int x, y, z;

    printf("Input the value of first input: \n");
    scanf("%d", &x);

        printf("Input the value of second input: \n");
        scanf("%d", &y);

            printf("Input the value of third input: \n");
            scanf("%d", &z);

    int result = count(x, y, z);
    print_sum(result);

    return 0;
}