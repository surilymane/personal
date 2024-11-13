//Program to add all the odd numbers from the array.

#include <stdio.h>

int main() 
{
    int i, sum = 0, size;
    
    printf("Please enter size of array: ");
    scanf("%d",&size);
    
    int array[size];

    for(i = 0; i < size; i++)
    {
        printf("\nPlease enter the number: ");
        scanf(" %d",&array[i]);
    }
      
    for(i = 0; i < size; i++)
    {
        if(array[i] % 2 == 1)
        {
            sum += array[i];
        }
    }
    
    printf("\nThe sum of the odd numbers from the array is %d.",sum);
}