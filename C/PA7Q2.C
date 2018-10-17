/*	
 *	Problem Statement
 *
 *	You are given a sequence of integers terminated with a -1. The -1 is not part of the input sequence.
 *
 *	Next, you are given a positive number N.
 *	
 *	You have to create a linked list with the input sequence of integers as entries. 
 *	You can use the following structure.
 *	
 *  struct node{
 *		int data;
 *		struct node *next;
 *	};
 *
 *	Now, you have to delete all but the last N elements from the linked list, and print the resulting list. 
 *	(i.e. The resulting list will consist of only the last N elements from the list.)
 *	
 *	If N is longer than the length of the linked list, you must print -1.
 *	
 *	While printing, the entries of the list must be separated by a single space.
 *
 *	Sample Input
 *	------------
 *	3 4 5 6 -1
 *	1
 *	
 *	Sample Output
 *	-------------
 *	6
 */
 #include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
} Node;

Node* getNode(int data)
{
	Node* n = (Node*)malloc(sizeof(Node));
	
	n->data = data;
	n->next = NULL;
	
	return n;
}

void traverse(Node **head)
{
	Node* ptr = *head;
	
	while(ptr)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
}

int countNodes(Node **head)
{
	int count = 0;
	
	Node* ptr = *head;
	
	while(ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return count;
}

void insertAtEnd(Node **head, int data)
{
	Node* newNode = getNode(data);
	
	Node* ptr = *head;
	
	if(ptr == NULL)
	{
		(*head)=newNode;
	}
	else
	{
		while(ptr->next)
		{
			ptr = ptr->next;
		}
		
		ptr->next = newNode;
	}
	
}

void deleteBeg(Node** head)
{
	if(*head == NULL)
		printf("\nUnder Flow");
	else
	{
		Node* ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
}


int main()
{
	Node* list = NULL;

    int num, c, n, nodes, count = 0;
    
    scanf("%d", &num);
    
    while(num != -1)
    {
        insertAtEnd(&list, num);
        scanf("%d", &num);
    }
	scanf("%d", &n);
	
	nodes = countNodes(&list);
	
	if(n > nodes)
	    printf("-1\n");
	else
	{
	    c = nodes - n;
	
	    while(count < c)
	    {
	        deleteBeg(&list);
	        count++;
	    }
	    traverse(&list);
	    printf("\n");
	}
	return 0;
}
