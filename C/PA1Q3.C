/*	
 *	Problem Statement
 *	
 *	A triple of numbers (a,b,c) is called a triangle triple if we can form a triangle of lengths a, b and c.
 *
 *	In this question, you will be given three numbers. You have to output 1 if the three numbers can form a triangle. Otherwise, you have to output 0.
 *
 *	Input
 *	-----
 *	Three real numbers.
 *	
 *	Output
 *	------
 *	1 if the three numbers can form a triangle 0 otherwise
 *
 */

#include <stdio.h>

int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    
    if((a+b)>c && (b+c)>a && (a+c)>b)
        printf("1");
    else
        printf("0");

    return 0;
}
