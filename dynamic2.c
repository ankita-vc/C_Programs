#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[5];     //statc memory allcation.

    int size= 0;

    int *ptr= NULL;

    printf("enter the size of arr:\n");
    scanf("%d", &size);

    //DYNAMIC MEMORY ALLOCATION

    // Step 1: memory alloaction
    ptr= (int*)calloc(sizeof (int),size);

    //Step 2: use of memory (in logic buildidng batch)

    //Step 3: deallocate the memory
    free(ptr);

    return 0;

}
