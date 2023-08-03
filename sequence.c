
// sequence is ordinary program

#include<stdio.h>

int No1= 0; 
int No2= 0; 
int Ans= 0;

int main()
{
    printf("enter the first value\n");
    scanf("%d", &No1);

    printf("enter second value\n");
    scanf("%d", &No2);

    Ans = No1 + No2;

    printf("the addition is: %d\n", Ans); 
    
    return 0;
}