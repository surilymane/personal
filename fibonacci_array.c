//Program to print fibonacci series in an array.

#include <stdio.h>

int main() 
{
    int i, sum = 0, size;
    
    printf("Please enter size of array: ");
    scanf("%d",&size);
    
    int array[size];
      
    array[0] = 0;
    array[1] = 1;
    
    printf("The fibonacci series is: \n %d %d",array[0],array[1]);
    
    for(i = 2; i < size; i++)
    {
        array[i] = array[0] + array[1];
        
        printf(" %d",array[i]);
        
        array[0] = array[1];
        array[1] = array[i];
    }
}