#include <stdio.h>
#include <stdarg.h>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

void PrintLines(char* first, ...) {
    char* str;
    va_list vl;

    str = first;

    va_start(vl, first);

    do {
        puts(str);
        str = va_arg(vl, char*);
    } while (str != NULL);

    va_end(vl);
}

int main() {
    PrintLines("First", "Second", "Third", "Fourth", NULL);
    _getch();
    return 0;
}