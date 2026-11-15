#include <stdio.h>

int main()
{
    int n, num, i, flag, count = 0;

    scanf("%d", &n);

    for(num = 2; num <= ______; num++)
    {
        flag = 0;

        for(i = 2; i * i <= ______; i++)
        {
            if(num % ______ == 0)
            {
                flag = 1;
                break;
            }
        }

        if(______ == 0)
        {
            count++;
        }
    }

    printf("Total prime numbers = %d", count);

    return 0;
}
