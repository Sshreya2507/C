#include <stdio.h>
int binaryToDecimal(int binary)
{
    int decimal = 0, base = 1, rem;
    while (binary > 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * base;
        base = base * 2;
        binary = binary / 10;
    }
    return decimal;
}
int decimalToBinary(int decimal)
{
    int binary = 0, base = 1, rem;
    while (decimal > 0)
    {
        rem = decimal % 2;
        binary = binary + rem * base;
        base = base * 10;
        decimal = decimal / 2;
    }
    return binary;
}
int main()
{
    int binary, decimal;
    printf("enter binary no.\n");
    scanf("%d", &binary);
    printf("decimal no.=%d\n", binaryToDecimal(binary));

    printf("enter decimal no.\n");
    scanf("%d", &decimal);
    printf("binary no.=%d\n", decimalToBinary(decimal));

    return 0;
}