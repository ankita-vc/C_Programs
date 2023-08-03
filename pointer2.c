
// Pointer to pointer

#include<stdio.h>

int main()
{  
    int no= 10;
    int *p= &no;
    int **q= &p;
    int ***r= &q;
    int ****a= &r;
    int *****b= &a;
    int ******c= &b;

    printf("%d\n",sizeof(no));     
    printf("%d\n",&no);             
    printf("%d\n",&a);             
    printf("%d\n",sizeof(r));      
    printf("%d\n",sizeof(c));      
    printf("%d\n",sizeof(*p));      
    printf("%d\n",&q);             
    printf("%d\n",&c);             
    printf("%d\n",*p);              
    printf("%d\n",**q);             
    printf("%d\n",****b);          
    printf("%d\n",******c);        
    printf("%d\n",**c);            

    return 0;
}