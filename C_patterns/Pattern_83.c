/*
 ============================================================================
 Name        : Pattern_83.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 83, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5, then the pattern will be :

A B C D E
 A B C D
  A B C
   A B
    A
   A B
  A B C
 A B C D
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
			printf("%c ", 64+j );
		}

		printf("\n");
	}

	for(i=2;i<=rows;i++)
	{
		for(space=1;space <= (rows-i);space++)
		{
			printf(" ");
		}

		for(j=1;j <= i;j++)
		{
			printf("%c ", 64+j );
		}

		printf("\n");
	}

	return 0 ;
}
