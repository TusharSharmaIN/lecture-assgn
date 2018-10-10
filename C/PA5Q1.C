#include <stdio.h>

int count = 0;

int fun(int n)
{
    if (n == 1)
        return 1;
    else
    {
        if(n % 2 != 0 )
        {
            fun(3*n+1);
        }
        else
        {
            fun(n/2);
        }
        count ++;
    }
}

int main()
{
    int n;
    
    scanf("%d", &n);
    
    fun(n);
    
    printf("%d", count);
    
    return 0;
}
