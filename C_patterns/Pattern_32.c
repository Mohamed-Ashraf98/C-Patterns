/*
 ============================================================================
 Name        : Pattern_32.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 32, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5 , then the pattern will be :

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1

*/

#include <stdio.h>

int main()
{
	int i , j , rows = 0 ;

	printf("Enter the number of rows :  ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&rows);

	printf("\n");

	for(i=rows;i>=1;i--)
	{
		for(j=rows;j>=i;j--)
		{
			printf("%d ",j);
		}
		
		printf("\n");
	}

	return 0 ;
}
