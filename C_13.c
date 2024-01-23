#include <stdio.h>
#include <math.h>
#include <stdlib.h>

 
void    print_array(int *array, int input_size) {
    for (int n = 0; n <= input_size; n++) {
        printf("%d, ", array[n]);
    }
    printf("\n");
}

void    print_extrema(int *array, int input_size, int *maxima, int *minima) {
    *maxima = array[1];
    *minima = array[1];
        for (int n = 0; n <= input_size; n++) {
            if (array[n] > *maxima) {
                *maxima = array[n];
            }
            if (array[n] < *minima) {
                *minima = array[n];
            }
        }
    printf("Minima reaches: %d \nMaxima reaches: %d \n", *minima, *maxima);
}

void    count_array(int *array, int input_size, int *sum) {
    for (int n = 0; n <= input_size; n++) {
        *sum += array[n];
    }
    printf("Sum is equal to: %d \n", *sum);
}

int      main() 
{
    int     input_size;
    int     a,   b;
    int     maxima,     minima;
    int     sum;

printf("Input the size of an array: \n");
    if (scanf(" %d", &input_size) != 1) {
        printf("Invalid input! \n");
    }

    int *array = (int*)malloc(input_size * sizeof(int));

printf("Input the value of the base: \n");
    if (scanf(" %d", &a) != 1) {
        printf("Invalid input! \n");
    }

/* printf("Input the value of an exponent: \n");
            if (scanf(" %d", &b) != 1) {
                printf("Invalid input! \n");
            } */

        for (int n = 0; n <= input_size; n++) {
            array[n] = n * n; // gc -o C_13 C_13.c -lm   -->    ./C_13
    }

/*
        for (int n = 0; n <= input_size; n++) {
            array[n] = pow(a, n); // gc -o C_13 C_13.c -lm   -->    ./C_13
    }
*/

print_array(array, input_size);
print_extrema(array, input_size, &maxima, &minima);
count_array(array, input_size, &sum);
    return 0;
}






