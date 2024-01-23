#include <stdio.h>

int bitwise_disjoint_alternative(int a, int b) {
    return a ^ b;
}

int bitwise_alternative(int a, int b) {
    return a & b;
}

int bitwise_conjuction(int a, int b) {
    return a | b;
}

int main()
{
    int n;
        char AL1 = 0xAA;
        char AH1 = 0xF0;
    int a = 2;
    int b = 10;

    n = (AL1 & AH1) << 8 | (AL1 ^ AH1 );

        printf("Older part: %d \n", ((n >> 8) & 0xFF));
        printf("Younger part: %d \n", n & 0xFF);

    if (bitwise_alternative(a , b)) {
        printf("Bitwise alternative is equal to: %d \n", bitwise_alternative(a, b));
    }
    if (bitwise_conjuction(a , b)) {
        printf("Bitwise conjuction is equal to: %d \n", bitwise_conjuction(a, b));
    }
    if (bitwise_disjoint_alternative(a , b)) {
        printf("Bitwise disjoint alternative is equal to: %d \n", bitwise_disjoint_alternative(a, b));
    }

bitwise_alternative(a, b);
bitwise_conjuction(a, b);
bitwise_disjoint_alternative(a, b);

    return 0;
}

/*
alternatywa rozlaczna bitowa ^ xor dla (1 1) -> (0)
alternatywa bitowa   &        or  dla (1 0) -> (0);
koniunkcja bitowa    |        and   dla (1 0) -> (1);
*/