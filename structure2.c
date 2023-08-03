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
    
    struct demo *ptr= &obj;

    obj.i= 10;

    ptr->j= 100;

    ptr->f= 10.0;

    obj.d= 10.00;

    printf("%d\n", ptr->j);
    printf("%d\n", obj.j);

    printf("%d\n", ptr->i);
    printf("%d\n", obj.i);

    printf("%f\n", ptr->f);
    printf("%f\n", obj.f);

    printf("%f\n", ptr->d);
    printf("%f\n", obj.d);

    return 0;
}


