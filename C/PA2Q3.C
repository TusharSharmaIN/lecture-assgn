/*   
 *	Problem Statement
 *
 *	You are given a sorted (either in the increasing or in the decreasing order) sequence of numbers, ending with a -1. You can assume that are at least two numbers before the ending -1. 
 *	
 *	Let us call the sequence x0 x1 ... xn -1.
 *	
 *	You have to output the number of distinct elements in the sorted sequence.
 *	
 *	Kindly do not use arrays in the code. 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    	int min=0, num, count=0;
    	scanf("%d",&num);

	while(num!=-1)
	{
	    if(num!=min)
	        count++;
        min=num;
        scanf("%d",&num);
	}
	
	printf("%d\n",count);
	return 0;
}
