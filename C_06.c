#include <stdio.h>

int     main()
{
    int     a;

    printf("Input the value of A: \n");
        if (scanf("%d", &a) == 1) {
            printf("%d : %o : %x\n", a, a, a);
            printf("%d : 0%o : 0x%x\n", a, a, a);
    
    } else {
        printf("Error: invalid input\n");
    }

    return 0;
}