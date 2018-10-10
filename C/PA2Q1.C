/*   
 *	Problem Statement
 *
 *	In this assignment, you will be given an NxN matrix. You have to determine whether the matrix is a triangular matrix. 
 *
 *	The diagonal of the matrix M of size NxN is the set of entries M(0,0), M(1,1), M(2,2), ..., M(N,N). 
 *
 *	A matrix is upper triangular if every entry below the diagonal is 0. For example,  
 *	1 1 1
 *	0 0 1
 *	0 0 2
 *	is an upper triangular matrix. (The diagonal itself, and the entries above and below the diagonals can be zeroes or non-zero integers.) 
 *
 *	A matrix is lower triangular if every entry above the diagonal is
 *	0. For example, 
 *	2 0 0
 *	3 1 0
 *	4 2 2
 *	is a lower triangular matrix. 
 *
 *	A matrix is triangular if it is either upper triangular or lower triangular or both.  
 *
 *	You may not use arrays for this program.
 *
 *	Input
 *	------
 *	First, you will be given N, which is the size of the matrix.
 *	Then you will be given N rows of integers, where each row consists of N integers separated by spaces. 
 *
 *	Output
 *	------
 *	If the input matrix is triangular, then print yes. Otherwise, print no. 
 */

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
