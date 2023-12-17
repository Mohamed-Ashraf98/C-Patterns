/*
 ============================================================================
 Name        : Pattern_56.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 56, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5 , then the pattern will be :

1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/

#include <stdio.h>

int main()
{
	int i , j , k , rows = 0 ;

	printf("Enter the number of rows :  ");
	fflush(stdin);fflush(stdout);

	scanf("%d",&rows);

	printf("\n");

	for(i=1;i<=rows;i++)
	{
		k = i;

		for(j = 1 ; j <= (2*i-1) ; j++)
		{
			if(j <= i)
				printf("%d ",j);

			else
			{
				k--;
				printf("%d ",k);
			}
		}

		printf("\n");
	}

	return 0 ;
}
