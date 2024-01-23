#include <stdio.h>

int     main()
{
    int     size;
    int     n;

    printf("Input the size of loop: \n");
        scanf(" %d", &size);
    
    printf("Input the value of number! \n");
        scanf(" %d", &n);

for (int i = n; i < size; i++) {
   int custom = i * i;
    printf("%d^2 = %d, ", i, custom);
}
printf("\n");

while (n < size) {
   int custom = n * n;
    printf("%d^2 = %d, ", n, custom);
    n++;
}
printf("\n");

do {
    int custom = n * n;
    printf("%d^2 = %d, ", n, custom);
        n++;
}   while (n < size);
printf("\n");

    return 0;
}