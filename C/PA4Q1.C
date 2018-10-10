/*   
 *	Problem Statement
 *
 *	Given two arrays of integers output the smallest number in the first array not present in the second one.
 *
 *	Input Specification: 
 *	The first line contains the size N1 of the first array.
 *	Next line give the contents of the first array.
 *	Next line contains the size N2 of the second array.
 *	Next line give the contents of the second array.
 *	
 *	Output Format:
 *	Output must be a single number which is the smallest number occurring in the first array that does not occur in the second. In case there is no such number, output NO.
 *	
 *	Variable Constraints:
 *	The sizes of the arrays are smaller than 20.
 *	Each array entry is an integer which fits an int data type.
 *	
 *	Example:
 *	Input:
 *	3
 *	2 3 4
 *	4
 *	1 3 5 7
 *	
 *	Output: 2
 *
 *	Input
 *	1
 *	1
 *	2
 *	1 2
 *	Output: NO
 */

#include<stdio.h>
#include <stdlib.h>

//function to set array values
//arr[] is the array passed, size is the size of array passed
void setArray(int arr[], int size)
{	
	int i=0;
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
}

//function to print array
//arr[] is the array passed, size is the size of array passed
void getArray(int arr[], int size)
{
	int i=0;
	printf("\nArray : ");
	for(i=0; i<size; i++)
		printf("%d ",arr[i]);
}

//function to swap two int
//*x, *y are the values call by address to perform swap
void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

//function to insert sort an array
//arr[] is the array passed, size is the size of array passed
void insertionSort(int arr[], int size)
{
	int temp, pos;
	for(int j=1; j<size; j++)
	{
		temp=arr[j];
		pos=j-1;
		while(pos>=0 && arr[pos]>temp)
		{
			arr[pos+1]=arr[pos];
			pos--;
		}
		arr[pos+1]=temp;
	}
}

//function to search key element in an array
int searchArray(int A[], int n, int key)
{
    int i;
    //return key if found
    for(i=0; i<n; i++)
    {
        if(key==A[i])
            return key;
    }
    //return zero if not found
    return 0;
}

//function to get smallest num from an array which doesn't occur in other array
int getSmallestNum(int A1[], int N1, int A2[], int N2)
{
    int i, j;
    for(i=0; i<N1; i++)
	{
	    //condition to check if not occur in second array
        if(!searchArray(A2, N2, A1[i]))
            return A1[i];
	}
	return 0;
}

//driver function
int main()
{
	int N1, N2;
	int res;
	
	scanf("%d", &N1);
	int *A1 = (int *) malloc(N1 * sizeof (int));		    //Array 1
	setArray(A1, N1);
	
	scanf("%d", &N2);
	int *A2 = (int *) malloc(N2 * sizeof (int));        //Array 2
	setArray(A2, N2);	
	
	insertionSort(A1, N1);
	insertionSort(A2, N2);
	
	res = getSmallestNum(A1, N1, A2, N2);
	
	if(res)
	   printf("%d", res);
  else printf("NO");
  
	return 0;				
}
/*	Code ends here	*/
