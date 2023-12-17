/*
 ============================================================================
 Name        : Pattern_15.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 15, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5, then the pattern will be :

A
A B
A B C
A B C D
A B C D E

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
		for(j=1;j<=i;j++)
		{
			printf("%c ", (j+64) ); /* ASCII value of 'A' is 65 */
		}
		printf("\n");
	}

	return 0 ;
}
