#include<stdio.h>

struct demo
{
    int i;
    int j;
    int *iptr;
    float *fptr;
};

int main()
{
    struct demo obj;

    int no= 90;
    float f= 9.0;

    obj.i= 11;
    obj.j= 21;
    obj.iptr= &no;
    obj.fptr= &f;

    printf("%d\n", obj.iptr);
    printf("%d\n",obj.iptr);
    printf("%d\n", no);
    printf("%d\n", &no);
    printf("%d\n", obj.iptr);


    return 0;
}