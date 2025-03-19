/*The housing prices in a particular neighborhood are related to the popularity of the land and the size of the house through the following relationship:

homeValue= ( popularityB3 + sizeB2  ) * 10000

For example, if the popularity of the neighborhood is 5 and the size of the house is 2, the minimum value for your house should be 1290000 TL.

Write a C program that gets the values of popularity and size from the user and computes &prints the value of homeValue.

A sample run is as follows:

Enter popularity: 5
Enter size: 2
Home value is: 1290000 */
#include <stdio.h>
#include <math.h>

int main()
{
	int popularity;
	int size;
	int homeValue;

	printf("Please enter the popularity value");
	scanf("%d",&popularity);
	printf("Please enter the size of the house");
	scanf("%d",&size);

	homeValue = (pow(popularity,3) + pow(size,2))*10000 ;

	printf("Your home value is %d",homeValue);
}
