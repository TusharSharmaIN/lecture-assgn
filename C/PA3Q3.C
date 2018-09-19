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
