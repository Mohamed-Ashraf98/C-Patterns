/*
 ============================================================================
 Name        : Pattern_102.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 102, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5, then the pattern will be :

        *
      * *
    *   *
  *     *
*       *
  *     *
    *   *
      * *
        *

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
		for(j=1;j <= rows;j++)
		{
			if(i+j <= rows)
				printf("  ");
			
			else
			{
				if(i+j == rows+1 || j == rows)
					printf("* ");

				else
					printf("  ");
			}
		}

		printf("\n");
	}

	for(i=rows-1;i>=1;i--)
	{
		for(j=1;j <= rows;j++)
		{
			if(i+j <= rows)
				printf("  ");
			
			else
			{
				if(i+j == rows+1 || j == rows)
					printf("* ");

				else
					printf("  ");
			}
		}

		printf("\n");
	}

	return 0 ;
}
