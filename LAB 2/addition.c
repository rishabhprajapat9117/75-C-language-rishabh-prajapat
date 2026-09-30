#include <stdio.h>

int main()
{
    int a;
    int b;
    int sum;

    printf("Enter two numbers:- ");
    scanf("%d", &a);
    scanf("%d", &b);

    sum = a + b;

    printf("Addition = %d", sum);

    return 0;
}
