#include <stdio.h>

int main()
{
	int number, count, i = 2;
	
	printf("Please enter the number: ");
	scanf("%d",&number);
	
	if (number <= 1)
	{
		printf("\nThe number is not prime.\n");
	}
	
	while(i <= number)
	{
		if (number % i == 0)
		{
			printf("\nThe number is not prime.\n");
			return 0;
		}
		else
		{
			printf("\nThe number is prime.\n");
			return 0; 
		}
		
		i++;
	}
}
		
