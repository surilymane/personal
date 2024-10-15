#include <stdio.h>

int main()
{
      int number, addition = 0, remainder;

      printf("Please enter the number: ");
      scanf("%d",&number);

      printf("The addition of the digits of the number %d",number);

      while(number != 0)
      {
            remainder = number % 10;
            number = number / 10;
            addition = addition + remainder;
      }

      printf(" is %d.",addition);
}
