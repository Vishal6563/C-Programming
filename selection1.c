#include<stdio.h>
int main()
{
    int No = 0;

    printf("Enter number : \n");
    scanf("%d",&No);

    if ((No % 2) == 0)
    {
        printf("it is even number..\n");
    }
    else
    {
        printf("it is odd number..\n");
    }

    return 0;
}