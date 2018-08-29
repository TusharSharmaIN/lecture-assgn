#include <stdio.h>

int main()
{
    int m,n;
    scanf("%d%d%d",&m,&n);
    
    if(m%n==0)
        printf("%d",(m/n));
    else
        printf("0");

    return 0;
}
