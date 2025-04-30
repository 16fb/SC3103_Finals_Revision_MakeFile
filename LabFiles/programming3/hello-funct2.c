#include "hello.h"

void funct2()
{
    printf("Hello World from funct2!\n");
    int count2;
    for (count2 = 0; count2 < 0x8ffff; count2++)
    {
        usleep(1);
    }
}