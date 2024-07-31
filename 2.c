#include <stdio.h>
int main()
{
    int a, count;
    count = 0;

    printf("Enter any Number : ");
    scanf("%d", &a);

    while (a >= 1)
    {
        a /= 10;
        count++;
    }

    printf("%d",count);
    return 0;
}