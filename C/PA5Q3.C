#include <stdio.h>

void getString()
{
    char c;
    c = getchar();
    
    if( c != EOF)
    {
        getString();
        printf("%c", c);
    }
    else
    {   
    }
}

int main()
{
    getString();
    return 0;
}
