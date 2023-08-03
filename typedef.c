#include<stdio.h>

// typedef  Old_Name New_Name

typedef const int CINT;
typedef unsigned int UINT;

int main()
{
    const int x= 11;
    CINT y= 11;

    unsigned int i= 21;
    UINT j= 21;

    return 0;
}