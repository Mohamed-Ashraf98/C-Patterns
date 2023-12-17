/*
 ============================================================================
 Name        : Pattern_74.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 74, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5, then the pattern will be :

    A
   A B
  A   C
 A     D
A       E
A       E
 A     D
  A   C
   A B
    A

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

		for(j=1;j <= i;j++)
		{
			if(j == 1 || j == i)
				printf("%c ", 64+j );

			else
				printf("  ");
		}

		printf("\n");
	}

	for(i=rows;i>=1;i--)
	{
		for(space=1;space <= (rows-i);space++)
		{
			printf(" ");
		}

		for(j=1;j <= i;j++)
		{
			if(j == 1 || j == i)
				printf("%c ", 64+j );

			else
				printf("  ");
		}

		printf("\n");
	}

	return 0 ;
}
