/*  Pointer */
#include <stdio.h>
#include <stdlib.h>

int secondLargest(int *p, int size)
{
    int firstL=*p;
    int secondL=*p;
    
    for(int i=1; i<size; i++)
    {
        if(*(p+i)>firstL)
        {
            secondL=firstL;
            firstL=*(p+i);
        }
    }
    return secondL;
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
    
   	result=secondLargest(arr, count);

    printf("%d\n",result);

    return 0;
}


/*  Array */
#include <stdio.h>
#include <stdlib.h>

int secondLargest(int p[], int size)
{
    long int firstL=p[0];
    int secondL=p[0];
    
    for(int i=0; i<size; i++)
    {
        if(p[i]>firstL)
        {
            secondL=firstL;
            firstL=p[i];
        }
    }
    return secondL;
}

int main()
{
 
    int arr[10];
    int num=0, count=0, result;
    
    scanf("%d",&num);
    
    while(num!=-1)
    {
        arr[count++]=num;
        scanf("%d",&num);
    }   
    
    /*
    for(int i =0;i<count;i++)
        printf("%d",arr[count]);
    */
    
    result=secondLargest(arr, count);

    printf("\n%d\n",result);

    return 0;
}


