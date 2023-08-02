#include<stdio.h>

int main()
{
    int std = 0;

    printf("enter yoour standard...: \n");
    scanf("%d",&std);

    switch(std)
    {
        case 1:
            printf("your exam in at 1pm\n");
        break;

        case 2:
            printf("your exam in at 2pm\n");
        break;

        case 3:
            printf("your exam in at 3pm\n");
        break;

        case 4:
             printf("your exam in at 4pm\n");
        break;

        default:
             printf("invalid standard\n");
    }

    return 0;
}