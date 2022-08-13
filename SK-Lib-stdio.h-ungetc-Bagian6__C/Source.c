#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by AlphaCodingSkills (https://www.alphacodingskills.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int ch;
    char buffer[256];

    FILE* pFile = fopen("test.txt", "r");

    while ((ch = getc(pFile)) != EOF) {
        if (ch == '.') {
            ungetc('!', pFile);
        } else {
            ungetc(ch, pFile);
        }

        ch = getc(pFile);
        putchar(ch);
    }

    _getch();
    return 0;
}