#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer:");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if (num % 2 == 0)
    {
        printf("Number is even.");
    }
    else
    {
        printf("Number is odd.");
    }

    return 0;
}
