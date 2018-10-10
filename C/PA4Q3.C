/*   
 *	Problem Statement
 *
 *	Write a program that replaces the occurence of a given character (say c) in a primary string (say PS) with another string (say s).
 *
 *	Input:
 *	The first line contains the primary string (PS)
 *	The next line contains a character (c)
 *	The next line contains a string (s)
 *	
 *	Output:
 *	Print the string PS with every occurence of c replaced by s.
 *	
 *	NOTE:
 *	- There are no whitespaces in PS or s. 
 *	- Maximum length of PS is 100.
 *	- Maximum length of s is 10.
 */

#include <stdio.h>

int main()
{
    char c, PS[100], s[10];
    int i;
    
    fgets(PS, 100, stdin);
  	c = getchar();
    getchar();
    fgets(s, 10, stdin);
    
    for(i=0; PS[i]!='\n'; i++)
    {
        if(PS[i]!=c)
        {
            printf("%c", PS[i]);
        }
        else
            printf("%s", s);
    }
    return 0;
}
