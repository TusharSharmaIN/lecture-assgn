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
