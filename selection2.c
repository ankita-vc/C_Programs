
// switch_case

#include<stdio.h>

int main()
{
    int std= 0;

    printf("enter your standard:\n");
    scanf("%d", &std);

    switch(std)
    {
        case 1:
        printf("your exam is at 1PM..\n");
        break;

        case 2:
        printf("your exam is at 2PM..\n");
        break;

        case 3:
        printf("your exam is at 3PM..\n");
        break;

        default:
        printf("invalid standard..\n");
    }

    return 0;
}