#include<stdio.h>
#include<conio.h>
/*

Q5. Develop a C program that uses structures to represent a laptop
(with attributes like company_name, processor and price). List N number of laptop'
details using array of objects.

*/
struct Laptop
{
    char company_name[100];
    char processor[100];
    float price;
};

void main()
{
    int n, i;
    struct Laptop laptops[100];
    clrscr();
    printf("Enter the number of laptops: ");
    scanf("%d",&n);

 while (getchar() != '\n');

    for (i = 0; i < n; i++)
    {
	printf("\nEnter details for Laptop %d:\n", i + 1);

	printf("Company Name: ");
	scanf("%99[^\n]",&laptops[i].company_name);

 while (getchar() != '\n');

	printf("Processor: ");
	scanf("%99[^\n]",&laptops[i].processor);

 while (getchar() != '\n');

	printf("Price: ");
	scanf("%f",&laptops[i].price);

 while (getchar() != '\n');

    }

    printf("\nLaptop Details:\n");
    for (i = 0; i < n; i++)
    {
	printf("\nLaptop %d:\n", i + 1);
	printf("Company Name: %s\n", laptops[i].company_name);
	printf("Processor: %s\n", laptops[i].processor);
	printf("Price: %.2f\n", laptops[i].price);
    }

    getch();
}