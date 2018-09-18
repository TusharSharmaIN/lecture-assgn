#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, fact=1, count=1;
    
    scanf("%d",&num);
    
    while(1)
    {   
        
        fact = fact * count;
        
        if(fact>num)
            break;
        
        if(fact<=num)
            printf("%d ", fact);
        
        count++;
    }
    
    return 0;
}

