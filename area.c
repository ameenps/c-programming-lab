#include <stdio.h>

void main()
{
    int l, b, a, p;
    printf("Enter the length and breadth of a rectangle: ");
    scanf("%d %d", &l, &b);
    a = l * b;
    p = 2 * (l + b);
    printf("Area and perimeter of rectangle are %d and %d\n", a, p);
    
}

