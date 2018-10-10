/*   
 *	Problem Statement
 *
 *	Write a C function to find the kth occurrence of an even integer in a sequence of non-negative integers, and then call your function from main. 
 *	
 *	Your function should be according to the following declaration:
 *	
 *	int find_even(int k);
 *	
 *	Input
 *	-----
 *	You are given the input in two lines:
 *	
 *	The first line contains a positive integer k. 
 *	In the second line, you will be given a sequence of numbers. 
 *	
 *	You have to find the kth occurrence of n in the sequence below. 
 *	
 *	The second line consists of a sequence of non-negative integers, terminated with a -1.  The -1 is not part of the sequence.
 *	
 *	Output
 *	------
 *	If there are  k even numbers in the sequence, then output the  kth occurrence of even in the sequence. Otherwise, output a -1.
 *	
 */

#include <stdio.h>
#include <stdlib.h>

int find_even(int k);

int main()
{
    int k, result;
    
    scanf("%d",&k);
    
    result=find_even(k);
    
    printf("%d", result);
    
    return 0;
}

int find_even(int k)
{
    int num, count=0;
    
    scanf("%d",&num);
    
    while(num!=-1)
    {
        if(num%2==0)
            count++;
        
        if(count==k)
            return num;
            
        scanf("%d",&num);
    }   
    return -1;
}
