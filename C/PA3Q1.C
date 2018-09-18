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
