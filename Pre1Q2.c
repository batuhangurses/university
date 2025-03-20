#include <stdio.h>

int gcd(int a, int b) //defining the function
{
	while (b!=0)
	{int temporary = b;
	b = a % b;
	a = temporary;
	}
	return a;
}
int main()
{
    int a,b;
    printf("Please enter two positive integers: ");
    scanf("%d %d", &a, &b);
    printf("The GCD of %d and %d is: %d\n", a, b, gcd(a, b));  //calling the function
    return 0;
}
