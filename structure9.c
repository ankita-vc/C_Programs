#include<stdio.h>

struct hello
{
    int no;
    int x;
    struct demo
    {
        int i;
        float f;
    }dobj1,dobj2;
}hobj;
 
int main()
{
    hobj.no= 11;
    hobj.x= 21;

    hobj.dobj1.i= 31;
    hobj.dobj1.f= 41;

    hobj.dobj2.i= 51;
    hobj.dobj2.f= 61;

    printf("%d\n", hobj.no);
    printf("%d\n", hobj.x);
    
    printf("%d\n", hobj.dobj1.i);
    printf("%f\n", hobj.dobj1.f);

    printf("%d\n", hobj.dobj2.i);
    printf("%f\n", hobj.dobj2.f);
    return 0;
}