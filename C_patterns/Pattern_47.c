/*
 ============================================================================
 Name        : Pattern_47.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 47, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5 , then the pattern will be :

1 2 3 4 5
  2     5
    3   5
      4 5
        5

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
		for(j=1;j<=rows;j++)
		{
			if(i+j <= rows)
				printf("  ");

			else
			{
				if(i+j == rows+1 || j == rows || i == rows)
					printf("%d ",j);

				else
					printf("  ");
			}
		}

		printf("\n");
	}

	return 0 ;
}
