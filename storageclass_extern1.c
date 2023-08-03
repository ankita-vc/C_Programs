#include<stdio.h>

int A = 10;

int B;

extern int C;

int main()
{
    printf("The value of A %d\n",A);

    printf("The value of B %d\n",B);

    printf("The value of C %d\n",C);

    return 0;
}