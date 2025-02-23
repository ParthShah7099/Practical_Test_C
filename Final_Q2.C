
#include<stdio.h>
#include<conio.h>

/*

Q2. Write a C program to find the average of all elements in a 2D array using
a function.

*/
void average(int a[100][100], int row, int col);
void main()
{
	int a[100][100],i,j,row,col;
	clrscr();
	printf("Enter the number of rows of a 2D Array:- ");
	scanf("%d",&row);
	printf("Enter the number of columns of a 2D Array:- ");
	scanf("%d",&col);
	printf("Enter the elements of 2D Array:-\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("Enter a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered elements of 2D Array:-\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	average(a,row,col);
	getch();
}
void average(int a[100][100], int row, int col)
{
	int i,j;
	float avg, sum = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			sum += a[i][j];
		}
	}
	printf("Sum of all the elements of 2D Array is:- %.2f\n",sum);
	avg = sum / (row * col);
	printf("Average of all the elements of 2D Array is:- %.2f",avg);

}
