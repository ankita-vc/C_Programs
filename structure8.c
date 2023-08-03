#include<stdio.h>

struct hello
{
    int no;
    int x;
    struct demo
    {
        int i;
        int j;
        float f;
    }dobj;
}hobj;

int main()
{
    hobj.no= 1;
    hobj.x= 2;
    hobj.dobj.i= 10;
    hobj.dobj.j= 20;

    printf("%d\n", hobj.no);
    printf("%d\n", hobj.x);

    printf("%d\n", hobj.dobj.i);
    printf("%d\n", hobj.dobj.j);
    printf("%f\n", hobj.dobj.f);
    
    return 0;

}