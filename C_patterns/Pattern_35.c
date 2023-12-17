/*
 ============================================================================
 Name        : Pattern_35.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : pattern 35, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5 , then the pattern will be :

        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5

*/

#include <stdio.h>

int main()
{
	int i , j , rows = 0 , space = 0 , count_1 = 0 , count_2 = 0 ;

	printf("Enter the number of rows :  ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&rows);
	
	printf("\n");

	for(i=1;i<=rows;i++)
	{
		for(space=1 ; space<=(rows-i) ; space++)
		{
			printf("  ");
			count_1++;
		}

		for(j=1 ; j<=(2*i-1) ; j++)
		{
			if(count_1<=rows-1)
			{
				printf("%d ", (i+j-1) );
				count_1++;
			}

			else
			{
				count_2++;
				printf("%d ", (i+j-1)-2*count_2 );
			}
		}

		printf("\n");
		count_1 = count_2 = 0;
	}

	return 0 ;
}
