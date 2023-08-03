#include<stdio.h>

struct demo
{
    int i;
    float f;
    int arr[3];
};

int main()
{
    struct demo obj;

    obj.i= 20;
    obj.f= 90.88;
    obj.arr[0]= 10;
    obj.arr[1]= 20;
    obj.arr[2]= 30;

    printf("%d\n", obj.arr[3]);
    printf("%d\n", obj.arr[0]);
    printf("%d\n", obj.i);
    printf("%f\n", obj.f);
    printf("%d\n",&obj.arr[0]);
    printf("%d\n", sizeof(obj.arr[3]));
    printf("%d\n", sizeof(obj.arr));
     
    return 0;
}