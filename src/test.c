
// #include "fouzia.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    printf("argv size: %i\n", (sizeof(**argv) / sizeof(char)));
    printf("argc: %i\n", argc);

    for(int i =0; i<(sizeof(argv) / sizeof(char)) + 4; i++){
        printf("%i: %s\n", i, argv[i]);
    }

    printf("Running...\n");
    printf("%i\n", argc);
    printf("%s\n", argv[--argc]);

    return 0;
}