#include <stdio.h>

int main(void)
{
    double a = 123456789123451234567891234512345678912345.0;
    double b = 1;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The a's value is %f\n",a);
    printf("The b's value is %f\n",b);

    return 0;
}
