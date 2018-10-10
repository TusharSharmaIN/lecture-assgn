/*   
 *	Problem Statement
 *
 *	Write a C program to list all the factorial numbers less than or equal to an input number n.
 *
 *	A number N is called a factorial number if it is the factorial of a positive integer. For example, the first few factorial numbers are
 *
 *	1, 2, 6, 24, 120, ...
 *	
 *	Note - We do not list the factorial of 0.
 *
 *	Input
 *	-----
 *	A positive integer, say n.
 *
 *	Output
 *	------
 *	All factorial numbers less than or equal to n.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, fact=1, count=1;
    scanf("%d",&num);
    
    while(1)
    {   
        fact = fact * count;
        
        if(fact<=num)
            printf("%d ", fact);  
        else
          	break;
        count++;
    }
    
    return 0;
}
