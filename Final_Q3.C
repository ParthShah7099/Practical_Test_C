#include<stdio.h>
#include<conio.h>
/*

Q3. Write a C program that defines a function to print only odd elements from
1D array elements.

*/
void odd();
int main()
{
	clrscr();
	odd();
	getch();
	return 0;
}
void odd()
{
	int a[100], size, i;
	printf("Enter the size of an array:- ");
	scanf("%d",&size);
	printf("Enter the elements of an array:-\n");
	for(i=0; i<size; i++)
	{
		printf("Enter a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Original Array:- ");
	for(i=0; i<size; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nOnly odd numbers from the original array:- ");
	for(i=0; i<size; i++)
	{
		if(a[i] %2 != 0)
		{
			printf("%d ",a[i]);
		}
	}
}
