#include <stdio.h>
#include <math.h>

int main()
{
    int number, no_of_digits, digit, i;
    int sum = 0;
    printf("Please enter the number: ");
    scanf("%d",&number);
    printf("Please enter the number of digits: ");
    scanf("%d",&no_of_digits);
    
    i = 1;
    
    while(i <= no_of_digits)
    {
        printf("\nPlease enter the %d digit: ",i);
        scanf("%d",&digit);
        sum += (int)pow(digit, no_of_digits);
        //printf("%d",&sum);
        i++;
    }
    
    if(sum == number)
    {
        printf("\nThe number %d is an armstrong number.",number);
    }
    else
    {
        printf("\nThe number %d is not an armstrong number.",number);
    }
}