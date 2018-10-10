/*   
 *	Problem Statement
 *
 *	You are given a sequence of integers as input, terminated by a -1. (That is, the input integers may be positive, negative or 0. 
 *	A -1 in the input signals the end of the input.) -1 is not considered as part of the input.  
 *	
 *	Find the second largest number in the input. You may not use arrays. 
 */

//  Not Using Pointer and Array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, count=0;
    int firstL=-2147483648;                     //min val of 4 byte integer
    int secondL;
    scanf("%d",&num);
    while(num!=-1)
    {
        if(num>firstL)
        {
            secondL=firstL;
            firstL=num;
        }
        else 
        if(num > secondL && num != firstL)
        {
           secondL=num;
        }
        scanf("%d",&num);
    }
    printf("%d\n",secondL);
    return 0;
}
