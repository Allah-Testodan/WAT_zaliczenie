#include <stdio.h>

void print_text(char c) {
    printf("%c", c);
}

int main()
{
char text[] = "Hello world!";

            for (int i = 0; text[i] != '\0'; i++) {
            print_text(text[i]);
            }

    return 0;
}