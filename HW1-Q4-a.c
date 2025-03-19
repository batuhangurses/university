#include <stdio.h>
#include <math.h>

int computeHomeValue(int popularity, int size); //function prototype
int main() //main function begins
{	
    int popularity,size ; //defining the variables that we will use
	printf("Enter the popularity value: \n");
	scanf("%d", &popularity);
	printf("Enter the size of the house: \n");
	scanf("%d", &size);
	int homeValue = computeHomeValue(popularity,size); //calling the function
	printf("The value of the house is: %d\n",homeValue);
	return 0; //end of the function
}
int computeHomeValue(int popularity,int size) //defining the function
{
    return (pow(popularity, 3) + pow(size, 2)) * 10000;
}
