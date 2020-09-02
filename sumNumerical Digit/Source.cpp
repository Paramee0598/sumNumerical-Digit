#include<stdio.h>

int main()
{
    int a, b = 1, c = 0;
    printf("in put number : ");
    scanf_s("%d",&a);
    while (b <= a)
    {
        if (a % b == 0)
        {
            c += b;
            printf("%d+", b);
        }
        b++;
    }
    printf("\b = %d (in put = %d)", c ,a);

    return 0;
}