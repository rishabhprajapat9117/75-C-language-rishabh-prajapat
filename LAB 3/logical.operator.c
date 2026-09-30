#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter any number for a: ");
    scanf("%d", &a);

    printf("Enter any number for b: ");
    scanf("%d", &b);

    printf("AND = %d\n", a & b);
    printf("OR = %d\n", a | b);
    printf("XOR = %d\n", a ^ b);
    printf("NOT = %d\n", ~a);
    printf("LEFT swift = %d\n", a << 1);
    printf("RIGHT swift = %d\n", a >> 1);

    return 0;
}
