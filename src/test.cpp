
// #include "fouzia.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int i = 0;
    while(++i<argc) cout << i << ": " << argv[i] << "\n";

    return 0;
}