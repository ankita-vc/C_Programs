#include<stdio.h>

#include "ppa.h"

int main()
{
    struct demo obj;

    printf("inside main\n");

    printf("rate of interest is %f\n", ROI); //10.7
    
    printf("fees of lb batch is %d\n", FEES); //18200

    printf("size of demo structure is: %d\n", sizeof(obj)); //8 bytes

    return 0;
}