
// Multiple pointers pointing to same data

#include<stdio.h>

int main()
{
    int No = 11;

    int *p = &No;

    int *q = &No;

    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", &No);

    return 0;
}