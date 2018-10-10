#include <stdio.h>
#include <stdlib.h>

typedef struct st
{
    int s, t;
} str;

int main()
{
    int num, i, key;
    
    scanf("%d", &num);
    
    str *var = (str *)malloc(sizeof(str)*num);
    
    for(i = 0; i<num; i++)
    {
        scanf("%d %d", &var[i].s, &var[i].t);
    }

    scanf("%d", &key);
    
    for( i = 0; i<num; i++)
    {
        
        if( key == var[i].s)
            printf("%d\n", var[i].t);
        
        else if( key == var[i].t)
            printf("%d\n", var[i].s);
    }
    
                
    return 0;
}
