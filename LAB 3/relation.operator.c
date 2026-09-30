#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Enter any number for a: ");
    scanf("%d", &a);

    printf("Enter any number for b: ");
    scanf("%d", &b);

    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);

    return 0;
}
