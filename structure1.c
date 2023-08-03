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

    struct demo obj1;
    struct demo obj2;

    obj1.i= 10;
    obj1.f= 10.0;
    obj1.d= 10.00;
    obj1.j= 100;

    obj2.i= 20;
    obj2.f= 20.0;
    obj2.d= 20.00;
    obj2.j= 200;

    printf("%d\n", obj1.j);

    printf("%d\n",&obj1);

    printf("%d\n", &obj1.i);

    return 0;
}


