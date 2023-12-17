/*
 ============================================================================
 Name        : Pattern_39.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 39, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5 , then the pattern will be :

1       5
1     4
1   3
1 2
1

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
		for(j=1;j<=i;j++)
		{
			if(j==1 || j==i)
				printf("%d ",j);

			else
				printf("  ");
		}

		printf("\n");
	}

	return 0 ;
}
