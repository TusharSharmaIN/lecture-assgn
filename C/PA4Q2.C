/*   
 *	Problem Statement
 *
 *	Find the number of distinct numbers in a given sequence. The sequence need not be sorted.
 *	
 *	Input
 *	The input consists of two lines.
 *	The first line consists of a positive number N. N is at most 1000.
 *	The second line consists of N numbers separated by spaces.
 *	
 *	Output
 *	The output should be the number of distinct elements in the sequence.
 */

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
