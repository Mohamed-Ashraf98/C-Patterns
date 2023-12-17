/*
 ============================================================================
 Name        : Pattern_17.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 17, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5, then the pattern will be :

A
B B
C C C
D D D D
E E E E E

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
			printf("%c ", (i+64) ); /* ASCII value of 'A' is 65 */
		}
		printf("\n");
	}

	return 0 ;
}
