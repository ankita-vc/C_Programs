/*
We can create connected nodes/objets by using the concept of self referential structure....
*/

#include<stdio.h>

struct demo
{
    int no;
    struct demo *ptr;
};

int main()
{
    struct demo *head;

    struct demo obj1;
    struct demo obj2;
    struct demo obj3;

    obj1.no= 11;
    obj2.no= 21;
    obj3.no= 51;

    obj1.ptr= &obj2;
    obj2.ptr= &obj3;
    obj3.ptr= NULL;

    head= &obj1;

    printf("address of obj1:%d\n",&obj1);
    printf("address of obj2:%d\n",&obj2);
    printf("address of obj3:%d\n",&obj3);
    printf("address of head:%d\n",&head);


    return 0;

}