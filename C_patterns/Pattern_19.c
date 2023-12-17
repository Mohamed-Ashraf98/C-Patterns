/*
 ============================================================================
 Name        : Pattern_19.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 19, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 4 and columns = 6, then the pattern will be :

* * * * * *
*         *
*         *
* * * * * *

*/

#include <stdio.h>

int main()
{
	int i , j , rows = 0 , columns = 0;

	printf("Enter the number of rows :  ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&rows);

	printf("Enter the number of columns :  ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&columns);

	printf("\n");

	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=columns;j++)
		{
			if(i == 1 || i == rows || j == 1 || j == columns)
				printf("* ");
				
			else
				printf("  ");
		}
		printf("\n");
	}

	return 0 ;
}
