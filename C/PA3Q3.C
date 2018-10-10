/*   
 *	Problem Statement
 *
 *	A line of English text will be given, where words are separated by one of the following symbols:
 *	
 *	' ', '\t', '.', ',' and ';'
 *	
 *	Each word may be separated from the next and the previous by one or more of the following symbols. You have to count the number of words in the sentence.
 *
 *	Note that to read the input, you have to read until the EOF symbol is
 *	read, as in the following example.
 *	
 *	int main()
 *	{
 *		int c;
 *	
 *		c = getchar();
 *		while ( c != EOF ) {
 *			c = getchar();
 *		}
 *		return 0;
 *	}
 *
 *	Note: it is possible to solve this question without arrays, so the maximum length of the line is not important.
 *	
 *	Input
	-----
 *	A line of English text with words separated from one another by one or more occurrences of the symbols
 *	
 *	' ', '\t', '.', ',' and ';'
 *
 *	Output
 *	------
 *	The number of words in the line.
 */

#include<stdio.h>

int main()
{
	char c, d;
	int count = 0;
	d = c = getchar();
	
	while(c != EOF) 
	{
		c = d;
		d = getchar();
		
		if(c != ' ' && c != '\t' && c != '.' && c != ',' && c != ';')
			if(d == ' ' || d == '\t' || d == '.' || d == ',' || d == ';' || d == EOF)
				count++;
		if(d == EOF)
			break;
	}
	
	printf("%d", count);
	return 0;
}
