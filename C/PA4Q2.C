#include <stdio.h>
#define N 1000

int getDistinct(int arr[], int n)
{
    int count=0;
    for (int i=0; i<n; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;
        if (i == j)
          count++;
    }
    return count;
}

int main()
{
    int arr[N]={0};
    int i, size, res;
    
    scanf("%d", &size);
    
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);
    
    res = getDistinct(arr, size);
    
    printf("%d\n", res);
    return 0;
}
