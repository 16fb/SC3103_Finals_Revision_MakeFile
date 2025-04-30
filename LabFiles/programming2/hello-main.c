#include "hello.h"
#include <stdio.h>

int main()
{
    helloprint();

    char i, c;
    while (1)
    {
        i = fread(&c, 1, 1, stdin);
        if (i>0 && (c != '\n')) 
            timePressedPrint(c);
    }

    return 1;
}