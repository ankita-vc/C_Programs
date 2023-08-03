

// Basics of pointer including &(addressof) operator and *(dereferance) operator

#include<stdio.h>

int main()
{

    int no= 11;
    int *iptr= &no;

    char ch= 'A';
    char *cptr= &ch;

    float f= 3.14;
    float *fptr= &f;

    double d= 88.90;
    double *dptr= &d;

   // printf("%d\n",no);    // 11 
    //printf("%c\n",ch);    // A
    //printf("%f\n",f);     // 3.14
    //printf("%f\n",d);     //88.89

    //printf("%d\n",&no);   // 100
    //printf("%c\n",&ch);   // 200
    //printf("%f\n",&f);    // 300
    //printf("%f\n",&d);    // 400

    //printf("%d\n",&iptr);   // 500
    //printf("%c\n",&cptr);   // 600
    //printf("%f\n",&fptr);   // 700
    //printf("%f\n",&dptr);   // 800

    //printf("%d\n",*iptr);   // 11
    //printf("%c\n",*cptr);   // A
    //printf("%f\n",*fptr);   // 3.14
    //printf("%f\n",*dptr);   // 88.90

    //printf("%d\n",sizeof(iptr));  // 8
    //printf("%c\n",sizeof(cptr));  // 8
    printf("%f\n",sizeof(fptr));  // 8
    //printf("%f\n",sizeof(dptr));  // 8

   // printf("%d\n",sizeof(*iptr));   // 4
    //printf("%c\n",sizeof(*cptr));   // 1
    //printf("%f\n",sizeof(*fptr));   // 4
   // printf("%f\n",sizeof(*dptr));   //8

    return 0;
}