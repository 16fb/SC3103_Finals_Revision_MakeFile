#include "hello.h"


void funct1()
{
    printf("Hello World from funct1!\n");
    int count1;
    for (count1 = 0; count1 < 0x4ffff; count1++)
    {
        usleep(1);
    }
}