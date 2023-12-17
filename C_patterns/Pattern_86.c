/*
 ============================================================================
 Name        : Pattern_86.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 86, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5, then the pattern will be :

A B C D E
 A     D
  A   C
   A B
    A
    A
   A B
  A   C
 A     D
A B C D E

*/

#include <stdio.h>

int main()
{
	int i , j , rows = 0 , space ;

	printf("Enter the number of lines :  ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&rows);

	printf("\n");

	for(i=rows;i>=1;i--)
	{
		for(space=1;space <= (rows-i);space++)
		{
			printf(" ");
		}

		for(j=1;j <= i;j++)
		{
			if(j == 1 || j == i || i == rows)
				printf("%c ", 64+j );

			else
				printf("  ");
		}

		printf("\n");
	}

	for(i=1;i<=rows;i++)
	{
		for(space=1;space <= (rows-i);space++)
		{
			printf(" ");
		}

		for(j=1;j <= i;j++)
		{
			if(j == 1 || j == i || i == rows)
				printf("%c ", 64+j );

			else
				printf("  ");
		}

		printf("\n");
	}

	return 0 ;
}
