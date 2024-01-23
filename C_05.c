#include <stdio.h>

void    print_human(char h) {
    write(1, &h, 1);
}


int     main()
{
    char human_first_line[] = "\\o/  _o_   o\n";
        char human_second_line[] = " |    |   /|\\\n";
            char human_third_line[] = "/ \\  / \\  / \\";

    for (int i = 0; human_first_line[i] != '\0'; i++) {
        print_human(human_first_line[i]);
        }

        for (int i = 0; human_second_line[i] != '\0'; i++) {
            print_human(human_second_line[i]);
            }

            for (int i = 0; human_third_line[i] != '\0'; i++) {
                print_human(human_third_line[i]);
                }

    return 0;
}