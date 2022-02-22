#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum,diff,prod,quot,mod;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    sum = a+b;
    diff = a-b;
    prod = a*b;
    quot = a/b;
    mod = a%b;
    printf("Sum is: %d \n",sum);
    printf("Difference is: %d \n",diff);
    printf("Product  is: %d \n",prod);
    printf("Quotient is: %d \n",quot);
    printf("Modulus is: %d \n",mod);
    return 0;
}
