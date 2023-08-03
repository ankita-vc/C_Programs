
// if_else

#include<stdio.h>

int main()
{
    int No= 0;
    
    printf("enter a number:\n");
    scanf("%d", &No);

    if ((No % 2)== 0)
    {
        printf("it is an even nuber");
    }

    else{
        printf("it is an odd number");
    }

    return 0;
}