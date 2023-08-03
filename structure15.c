#include<stdio.h>

union demo
{
    int i;
    float f;
    int j;
    double d;
};

int main()
{
    union demo obj;
    
    obj.i= 11;
    obj.j= 21;
    obj.f= 90.9;
    obj.d= 30.333;

    printf("the size of i is:%d\n", sizeof(obj.i));
    printf("the size of j is:%d\n", sizeof(obj.j));
    printf("the size of f is:%d\n", sizeof(obj.f));
    printf("the size of d is:%d\n", sizeof(obj.d));

    printf("the size of obj:%d\n", sizeof(obj));

    return 0;

}