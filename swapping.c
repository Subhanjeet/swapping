#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("After the swapping\n");
    printf("first number is %d and second number is %d", a, b);
    return 0;
}