#include <cstdio>
#include "simple.h"
#include "lib.h"

int main()
{
    printf("Simple! From Simple version %d.%d\n", MAJOR_VERSION, MINOR_VERSION);
    MyLib m;
    m.DoSomething();
    printf("Unknown magic value: %s\n", MAGIC);
    return 0;
}
