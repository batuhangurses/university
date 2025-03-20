#include <stdio.h>

int mysqrt(int number) {  //defining the function
	int i;
	for (i = 1; i*i<=number; i++) {  
	}
	i=i-1;
	return i;
}

int main() {
	int number,result;
	printf("Please enter a non-negative integer: "); 
	scanf("%d",&number);  //getting the number from user
	result=mysqrt(number);  //calling the function
	printf("The answer is: %d\n",result);
	return 0;
}
// for example; when the user enters 80, the function stop at i=9 because 9x9=81 and 81 is bigger than 80. after that, function decrements i by 1. the answer is 8.
