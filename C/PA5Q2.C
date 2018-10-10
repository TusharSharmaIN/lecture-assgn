#include <stdio.h>
#include <stdlib.h>

void getMat(int m, int n, int mat[][n])
{
    int i, j;
    
    for( i = 0; i < m; i++ )
        for( j = 0 ; j < n; j++)
            scanf("%d", &mat[i][j]);
}

void showMat(int m, int n, int mat[][n])
{
    int i, j;
    
    for( i = 0; i < m; i++ )
    {   for( j = 0 ; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }       
}

int minQuad(int r, int c, int m, int n, int size, int mat[][size])
{
    int i,j;
    int min = 2147483647;
    for( i = r; i < m; i++ )
    {   for( j = c; j < n; j++)
            if(min > mat[i][j])
                min = mat[i][j];
    }
    return min;
}

int findInQuad(int m, int n, int mat[][n])
{
    int quad[4];
    int i, x=0;  int min = 2147483647;

    quad[0] = minQuad(0, 0, m/2, n/2, n, mat);
    quad[1] = minQuad(0, n/2, m/2, n, n, mat);
    quad[2] = minQuad(m/2, 0, m, n/2, n, mat);
    quad[3] = minQuad(m/2, n/2, m, n, n, mat);
       
    for(i = 0; i < 4; i++)
    {
        if(min > quad[i])
        {   
            min = quad[i]; 
            x = i;
        }
    }
    return x + 1;
}


int main()
{
    int m, n;
    int i, j;
    
    scanf("%d %d", &m, &n);
    
    int mat[m][n];
    
    getMat(m, n, mat);

    printf("%d", findInQuad(m, n, mat));
    
    return 0;
}
