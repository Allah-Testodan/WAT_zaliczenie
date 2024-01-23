#include <stdio.h>

#define A 5
#define B 2

void    make_array(int array[A][B]) {
    for (int a = 0; a < A; a++) {
        for (int b = 0; b < B; b++) {
            array[a][b] = a + b;
        }
    }
}

void  print_array(int array[A][B]) {
    for (int a = 0; a < A; a++) {
        for (int b = 0; b < B; b++) {
            printf("%d + %d = %d\n", a, b, array[a][b]);
        }
    }
}

int main() {

int array[A][B];

make_array(array);
print_array(array);

    return 0;
}