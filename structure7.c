#include<stdio.h>

struct demo
{
    int i;
    float f;
};

struct hello
{
    int no;
    int x;
    struct demo dobj;
};

int main()
{
    struct hello hobj; 

    return 0;
}
    