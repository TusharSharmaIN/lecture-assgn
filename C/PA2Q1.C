#include <stdio.h>
#include <stdlib.h>

int isTriangularMatrix(int *mat, int size)
{
    int i,j;
    int l=1,u=1;
    
    
    //check if lower triangle
    for (i = 0; i <  size-1; i++)
      for (j = size-1; j > i; j--)
         if(*(mat + i*size + j)!=0)
         {  l = 0;
            break;
         }
    
    //check if uppper triangle
    for (i = 1; i <  size; i++)
      for (j = 0; j < i; j++)
         if(*(mat + i*size + j)!=0)
         {  u = 0;
            break;
         }

    if(u||l)
        return 1;
    else 
        return 0;
}

int main()
{
    int N,i,j;
    scanf("%d",&N);
    
    int *mat = (int *)malloc(N * N * sizeof(int));
    
    for (i = 0; i <  N; i++)
      for (j = 0; j < N; j++)
         scanf("%d ", &*(mat + i*N + j));

    if (isTriangularMatrix(mat,N))
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}
