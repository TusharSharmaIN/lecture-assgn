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
