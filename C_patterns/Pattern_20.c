/*
 ============================================================================
 Name        : Pattern_20.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 20, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5 , then the pattern will be :

    *
   * *
  *   *
 *     *
*********

*/

#include <stdio.h>

int main()
{
	int i , j , rows = 0 , space = 0 ;

	printf("Enter the number of rows :  ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&rows);

	printf("\n");

	for(i=1;i<=rows;i++)
	{
		for(space=1;space<=(rows-i);space++)
		{
			printf(" ");
		}
		
		for(j=1;j<=(2*i-1);j++)
		{
			if(i == rows || j==1 || j==2*i-1)
				printf("*");

			else
				printf(" ");
		}

		printf("\n");
	}

	return 0 ;
}
