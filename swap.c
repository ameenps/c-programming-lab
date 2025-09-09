#include <stdio.h>

void main()
{
    int a, b, t;
    a = 5;
    b = 6;
    t = a;
    a = b;
    b = t;

    printf("swapped values  are %d and %d\n", a, b);
    
}

