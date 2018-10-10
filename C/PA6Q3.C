/*   
 *	Problem Statement
 *
 *	In a string, a "run" is a substring with consisting of consecutive occurrences of the same character. 
 *	For example, the string "mississippi" contains the following runs - "ss", "ss" and "pp".
 *	
 *	In this question, given a string, you have to output the length of the longest run in the string.
 *	
 *	Input
 *	-----
 *	A string, having length at most 100. The string is guaranteed to have at least one run.
 *	
 *	Output
 *	------
 *	The length of the longest run in the string.
 *	
 *	Sample Input
 *	------------
 *	abbaaacccc
 *
 *	Sample Output
 *	-------------
 *	4
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[100];    int i = 1, count = 1, temp = 1;
    char foo;
    scanf("%s", s);
    foo = s[0];
    
    while(s[i] != '\0')
    {
        if(foo == s[i])
        {
            temp++;
        }
        else
        {
            foo = s[i];
            temp = 1;
        }
        if(count < temp)
            count = temp;
        i++;
    }
    printf("%d", count);      
    return 0;
}
