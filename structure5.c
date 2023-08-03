#include<stdio.h>

struct demo
{
    int i;
    float f;
};

int main()
{
    struct demo arr[3];
    /*
    arr is one dimentional array which contains 3 elements which are of type struct demo
    whrere demo is structure which contains 2 members 
    one is of integer tupe and the other is of float type.
    */
    
    arr[0].i =1;
    arr[1].i= 2;
    arr[2].i= 3;

    arr[0].f= 4;
    arr[1].f= 5;
    arr[2].f= 6;

    printf("%d\n", arr[3].i);
    printf("%f\n", arr[3].f);

    printf("%d\n", arr[0].i);
    printf("%d\n", arr[1].i);
    printf("%d\n", arr[2].i);

    printf("%f\n", arr[0].f);
    printf("%f\n", arr[1].f);
    printf("%f\n", arr[2].f);


    return 0;

}