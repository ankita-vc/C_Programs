#include<stdio.h>

//#pragma pack(1)

struct demo
{
    int i;
    struct demo *ptr;
};

int main()
{
    struct demo obj1;

    obj1.i= 11;
    obj1.ptr= &obj1;

    printf("%d\n", obj1.i);
    printf("%d\n", obj1.ptr);
    printf("%d\n", &obj1.i);

    printf("%d\n", sizeof(obj1));

    return 0;
}