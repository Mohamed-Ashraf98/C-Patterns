/*
 ============================================================================
 Name        : Pattern_9.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 9, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5, then the pattern will be :

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include <stdio.h>

int main()
{
	int i , j , rows = 0 , start_num = 1 ;

	printf("Enter the number of lines :  ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&rows);

	printf("\n");

	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",start_num);
			start_num++ ;
		}
		printf("\n");
	}

	return 0 ;
}
