/*
 ============================================================================
 Name        : Pattern_34.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 34, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5 , then the pattern will be :

E E E E E
D D D D
C C C
B B
A

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
		for(j=1;j<=i;j++)
		{
			printf("%c ", 64+i );
		}

		printf("\n");
	}

	return 0 ;
}
