/*	
 *	Problem Statement
 *
 *	Create a database of students using structures, where in each entry of the database will have the following fields:
 *		1.	a name, which is a string with at most 128 characters
 *		2.	their marks in physics which is an int between 0 and 100
 *		3.	their marks in chemistry which is an int number between 0 and 100
 *		4.	their marks in mathematics which is an int number between 0 and 100
 *
 *	You have to output a list of students in the following order.
 *		1.	if a student 'A' has lower marks in physics than a student 'B', then A's data is listed before B.
 *		2.	If A and B have the same physics marks and A has lower chemistry marks than B, then A is listed before B.
 *		3.	If A and B have the same marks in physics and chemistry, and A has lower marks in mathematics than B, then A is listed before B.
 *		4.	If all marks are equal and A's name precedes B's name in the dictionary order, then A is listed before B.
 *
 *	Input Format :
 *	First line contains the number of students n, where 1<=n<=100.
 *	In following n lines each line contains(space separated)  a name and their respective marks in physics, chemistry, maths, where 0<=marks<=100.
 *
 *	Output Format :
 *	Sorted database of n lines.
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Student
{
	char name[129];
	int phy, chem, maths;
}   student;

//Comparator function to compare and return result to infer which will appear first, A or B.
int comparator(const void *A, const void *B)
{
    /*
     *   Returning -1 means data of A will appear first
     *   Returning 0 means data of A and B are equal
     *   Returning 1 means data of B will appear first
	   */
	int A_phy = ((student *)A)->phy;
	int B_phy = ((student *)B)->phy;
	int A_chem = ((student *)A)->chem;
	int B_chem = ((student *)B)->chem;
	int A_maths = ((student *)A)->maths;
	int B_maths = ((student *)B)->maths;
	char *A_name = ((student *)A)->name;
	char *B_name = ((student *)B)->name;
	//If a student 'A' has lower marks in physics than a student 'B', then A's data is listed before B.
	if(A_phy < B_phy)
		return -1;
	else
	//If A and B have the same physics marks and A has lower chemistry marks than B, then A is listed before B.
	if(A_phy == B_phy && A_chem < B_chem)
		return -1;
	else
	//If A and B have the same marks in physics and chemistry, and A has lower marks in mathematics than B, then A is listed before B.
	if(A_phy == B_phy && A_chem == B_chem && A_maths < B_maths)
		return -1;
	else
	//If all marks are equal and A's name precedes B's name in the dictionary order, then A is listed before B.
	if(A_phy == B_phy && A_chem == B_chem && A_maths == B_maths)
		return strcmp(A_name, B_name);
}

int main()
{
	int n;
	student arr[100];
	scanf("%d", &n);
	//Take input
	for(int i = 0; i < n; i++)
		scanf("%s %d %d %d", arr[i].name, &arr[i].phy, &arr[i].chem, &arr[i].maths);
	//Using qsort from standard library
	qsort(arr, n, sizeof(student), comparator);
	//Print sorted result
	for(int i = 0; i < n; i++)
		printf("%s\t%d\t%d\t%d\n", arr[i].name, arr[i].phy, arr[i].chem, arr[i].maths);
	return 0;
}
