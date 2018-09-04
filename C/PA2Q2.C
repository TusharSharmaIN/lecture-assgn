/*  Pointer */
#include <stdio.h>
#include <stdlib.h>

int secondLargest(int *p, int size)
{
    int larg=*p;
    
    for(int i=1; i<size; i++)
    {
        if(*(p+i)!=larg)
            return *(p+i);
    }
    return 0;
}

void sort(int *p,int size)
{
    int temp;
    
    for (int i = 0; i < size; ++i) 
        for (int j = i + 1; j < size; ++j) 
            if (*(p+i) < *(p+j)) 
            {
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
}

int main()
{
 
    int *arr=NULL;
    int num=0, count=0, result;
    
    scanf("%d",&num);
    
    while(num!=-1.0)
    {
        arr=(int * )realloc(arr, (count+1)*sizeof(num));
        *(arr + count)=num;
        count++;
        scanf("%d",&num);
    }   
    
    sort(arr,count);
    
   	result=secondLargest(arr, count);

    printf("%d\n",result);

    return 0;
}

/*  Array */
#include <stdio.h>
#include <stdlib.h>

int secondLargest(int p[], int size)
{
    int larg=p[0];
    for(int i=1; i<size; i++)
    {
        if(p[i]!=larg)
            return p[i];
    }
    return 0;
}

void sort(int p[],int size)
{
    int temp;
    
    for (int i = 0; i < size; ++i) 
        for (int j = i + 1; j < size; ++j) 
            if (p[i] < p[j]) 
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
}

int main()
{
 
    int arr[100];
    int num=0, count=0, result;
    
    scanf("%d",&num);
    
    while(num!=-1)
    {
        arr[count++]=num;
        scanf("%d",&num);
    }
    
    sort(arr,count);

    result=secondLargest(arr,count);

    printf("%d\n",result);

    return 0;
}


