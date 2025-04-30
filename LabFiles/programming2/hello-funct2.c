#include "hello.h"
#include <stdio.h>

static int count=0;

void timePressedPrint(char c)
{
    count++;
    printf("Pressed the %c key. Pressed all keys a total of %d times\n", c, count);
    //fwrite(&c, 1, 1, stdout);
}