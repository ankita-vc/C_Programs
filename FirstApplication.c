#include<stdio.h>

int Addition (int A, int B)
{
    int Result= 0;

    Result= A+B;

    return Result; 
}

int main()
{
    int no1= 10;
    int no2= 11;
    int Ans= 0;

    Ans= Addition(no1, no2);

    printf("%d", Ans);

    return 0;
}
