#include <stdio.h>

int main()
{
    int a, b, next;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    next = a;
    a = b;
    b = next;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}
