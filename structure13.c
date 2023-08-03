#include<stdio.h>

struct demo
{
    int i;
    float f;
    double d;
    char ch1;
    char ch2;
};

int main()
{
    struct demo obj;

    printf("size of obj is:%d\n", sizeof(obj));

    return 0;
}