/*   
 *	Problem Statement
 *
 *	A graph is abstractly a collection of vertices which are labelled by non-negative integers, and a collection of edges. 
 *	A graph called an undirected graph if we talk of merely the presence of an edge between vertices i and j, rather than its direction. 
 *	
 *	For example, the following is a graph:
 *
 *	In this problem, you are given the edges in an undirected graph. 
 *	An edge is a pair of non-negative integers (i, j) which indicates that the vetex i is connected to vetex j by an edge.
 *	
 *	Afterwards, you will be given a vertex number n. 
 *	You have to output the list of vertices which are connected n by an edge, in the order in which the edges were input.
 *
 *	Input
 *	
 *	You are given the following.
 *	
 *	1. The first line contains an integer, E, between 1 and 1000
 *	
 *	2. This is followed by E lines, where each containing a pair of numbers i and j where i and j are both non-negative integers <=34,000. 
 *	No edge will be listed more than once.
 *	
 *	3. The last line contains a non-negative integer n <= 34,000. n is assured to be a vertex listed in one of the E lines in part (2).
 *	
 *	Output
 *	
 *	You have to output the list of nodes to which n has an edge, in the order in which the edges were input, one line for each vertex.
 */

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
