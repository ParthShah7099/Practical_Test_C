#include <stdio.h>
#include <conio.h>
/*

Q6. Write a C progrm that writes any N number of fruits name along with their color name in a file called data.txt by taking input from user dynamically.

*/

void main() {
    FILE *file;
    int n, i;
    char fruit_name[100], color[100];

    clrscr();

    file = fopen("data.txt", "w");

    if (file == NULL)
    {
	printf("Error opening file!\n");
	return;
    }

    printf("Enter the number of fruits: ");
    scanf("%d", &n);

    while (getchar() != '\n');

    for (i = 0; i < n; i++)
    {
	printf("\nEnter details for Fruit %d:\n", i + 1);
	printf("Fruit Name: ");
	scanf("%99[^\n]", fruit_name);

	while (getchar() != '\n');

	printf("Color: ");
	scanf("%99[^\n]", color);

	while (getchar() != '\n');

	fprintf(file, "Fruit: %s, Color: %s\n", fruit_name, color);
    }

    fclose(file);

    printf("\nData written to data.txt successfully!\n");

    getch();
}