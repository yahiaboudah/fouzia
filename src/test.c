
// #include "fouzia.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    int i = 0;
    while(++i<argc) printf("%i: %s\n", i, argv[i]);

    return 0;
}