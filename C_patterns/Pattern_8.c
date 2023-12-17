/*
 ============================================================================
 Name        : Pattern_8.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 8, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5, then the pattern will be :

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

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
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}

	return 0 ;
}
