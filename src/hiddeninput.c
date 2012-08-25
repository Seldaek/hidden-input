#include "stdio.h"
#include "stdlib.h"
#include "conio.h"

int main(void) {
    int input;

    char text[255] = "";
    int ptr = 0;

    while (++ptr < 255) {
        input = _getch();
        if (input == 13 || input == 10) {
            break;
        }
        sprintf(text, "%s%c", text, input);
    }

    printf("%s", text);
    return 0;
}