/*
 ============================================================================
 Name        : Pattern_6.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 6, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5, then the pattern will be :

5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

*/

#include <stdio.h>

int main()
{
	int i , j , rows = 0 ;

	printf("Enter the number of lines :  ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&rows);

	printf("\n");

	for(i=1;i<=rows;i++)
	{
		for(j=rows;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

	return 0 ;
}
