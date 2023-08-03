#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr= NULL;

    //step1: allocate the memory
    ptr= (int*)malloac(5*sizeof(int));

    //step2: use the memory (in logic building batch)

    ptr= (int*)realloac(ptr, 7* sizeof(int));

    ptr= (int*)realloac(ptr, 3*sizeof(int));

    //step3: dealloacte the memory

    free ptr  ;

    return 0;
}