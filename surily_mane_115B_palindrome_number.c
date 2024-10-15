#include <stdio.h>

int main()
{
      int number, original_number, remainder, reversed_number = 0;

      printf("Please enter the number: ");
      scanf("%d",&number);

      original_number = number;

      while (number)
      {
            remainder = number % 10;
            number = number / 10;
            reversed_number = reversed_number * 10 + remainder;
      }

      if (original_number == reversed_number)
      {
            printf("The number %d is a palindrome.",original_number);
      }
      else
      {
            printf("the number %d is not a palindrome.",original_number);
      }
}
