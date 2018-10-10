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
