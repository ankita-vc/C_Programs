#include<stdio.h>

struct demo
{
    int i;
    float f;
    struct demo obj; // not alloawed
};

int main()
{
    struct demo obj; //allowd

    return 0;
}
    