/*

*/

#include<stdio.h>


struct demo
{
    int i;
    float f;
    double d;
    int j;
};

int main()
{
    struct demo obj;

    printf("size of obj is:%d\n", sizeof(obj));

    return 0;

}