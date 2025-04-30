#include "hello.h"

int main()
{

    printf("Hello World from main!\n");

    int count0;
    for (count0 = 0; count0 < 0x3fff; count0++)
    {
        usleep(1);
    }


    funct1();
    funct2();

    printf("Bye\n");

    return 1;
}