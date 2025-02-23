#include<stdio.h>
#include<conio.h>

/*

Q7. Print a below pattern using nested for loop in C Language.
_ _ _ _ 10
_ _ _ 9 10
_ _ 8 9 10
_ 7 8 9 10
6 7 8 9 10

Note: consider _ as a white space.

*/
void main()
{
	int i,j,s;
	clrscr();
	for(i=10; i>=6; i--)
	{
		for(s=6; s<i; s++)
		{
			printf("  ");
		}
		for(j=i; j<=10; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}