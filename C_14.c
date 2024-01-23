#include <stdio.h>

#define size 10

int     main() 
{
    int array[size];

for (int i = '\0'; i < size; i++) {
    array[i] = i * i;
}

for (int i = '\0'; i < size; i++) {
    printf("%d^2 = %d\n", i, array[i]);
}

return 0;
}