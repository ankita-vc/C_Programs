#include<stdio.h>

#pragma pack(1)
struct demo
{
    int i;
    int j;
    float f;
    double d;
    char ch1;
    char ch2;
};

int main()
{
    struct demo obj;

    printf("the size of obj is:%d\n", sizeof(obj)); 

    return 0;
}