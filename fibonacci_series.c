#include <stdio.h>

int main()
{
    int f_1, f_2, n, f_next, i = 0;
    
    printf("Please enter the first two numbers of the fibonacci series: ");
    scanf("%d %d",&f_1,&f_2);
    printf("\nPlease enter how many numbers of the fibonacci sequence are needed: ");
    scanf("%d",&n);
    
    f_next = f_1 + f_2;
    
    printf("The fibonacci sequence is: %d %d %d ",f_1, f_2,f_next);
    
    while(i < n)
    {
        f_1 = f_2;
        f_2 = f_next;
        f_next = f_1 + f_2;
        printf("%d ",f_next);
        i++;
    }
    
}