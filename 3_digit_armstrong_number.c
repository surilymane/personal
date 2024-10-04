#include <stdio.h>

int main()
{
    int number, digit1, digit2, digit3;
    printf("Please enter the number: ");
    scanf("%d",&number);
    printf("Please enter the separate digits: ");
    scanf("%d %d %d",&digit1,&digit2,&digit3);
    
    if(digit1^3 + digit2^3 + digit3^3 == number)
    {
        printf("\nThe number %d is an armstrong number.",number);
    }
    else
    {
        printf("\nThe number of %d is not an armstrong number.",number);
    }
}