/*
 ============================================================================
 Name        : Pattern_11.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 11, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5, then the pattern will be :

    *
   ***
  *****
 *******
*********

*/

#include <stdio.h>

int main()
{
	int i , j , rows = 0 , space ;

	printf("Enter the number of lines :  ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&rows);

	printf("\n");

	for(i=1;i<=rows;i++)
	{
		for(space=1;space <= (rows-i);space++)
		{
			printf(" ");
		}

		for(j=1;j <= (2*i-1);j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0 ;
}
