#include<stdio.h>
#include<conio.h>

/*

Q4. Write a C program to find even elements from an 1D array using pointer.

*/

int main()
{
	int a[100],i,size;
	int *ptr[100];
	clrscr();
	printf("Enter the size of an array:- ");
	scanf("%d",&size);
	printf("Enter the elements of an 1D array:-\n");
	for(i=0; i<size; i++)
	{
		printf("Enter a[%d] = ",i);
		scanf("%d",&a[i]);
		ptr[i] = &a[i];
	}
	printf("Original 1D Array:- ");
	for(i=0; i<size; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nEven elements from the original 1D array:- ");
	for(i=0; i<size; i++)
	{
		if(*ptr[i] %2 == 0)
		{
			printf("%d ",*ptr[i]);
		}
	}
	getch();
	return 0;
}