/*
 ============================================================================
 Name        : Pattern_58.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 58, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5 , then the pattern will be :

A
A B A
A B C B A
A B C D C B A
A B C D E D C B A

*/

#include <stdio.h>

int main()
{
	int i , j , k , rows = 0 ;

	printf("Enter the number of rows :  ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&rows);

	printf("\n");

	for(i = 1 ; i <= rows ; i++)
	{
		k = 64+i;

		for(j = 1 ; j <= (2*i-1) ; j++)
		{
			if(j <= i)
				printf("%c ", 64+j );

			else
			{
				k--;
				printf("%c ",k);
			}
		}

		printf("\n");
	}

	return 0 ;
}
