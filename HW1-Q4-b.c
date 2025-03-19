#include <stdio.h>
#include <math.h>

void computeHomeValue(int popularity, int size);  //function prototype

int main()
{
	int popularity, size;
	printf("Enter the popularity value: \n");
	scanf("%d", &popularity);
	printf("Enter the size of the house: \n");
	scanf("%d", &size);
	computeHomeValue(popularity, size); //calling the function
	return 0;
}
void computeHomeValue(int popularity, int size) //defining the function
{
	int homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000;
	printf("The value of the house is: %d\n", homeValue);
}
