/*
 ============================================================================
 Name        : Pattern_42.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 42, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5 , then the pattern will be :

5
4 5
3   5
2     5
1       5

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
		for(j=i;j<=rows;j++)
		{
			if(j == i || j == rows)
				printf("%d ",j);

			else
				printf("  ");
		}

		printf("\n");
	}

	return 0 ;
}
