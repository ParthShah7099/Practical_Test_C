#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*
Q1. Implement a C program to find an average and a grade of a student. Consider
5 subjects. Assign out of 100 marks for each subject. Use conditions for
evaluate grades based on average value.

*/

void main()
{
	float average,sum,mm,em,sm,gm,hm;
	int grade;
	clrscr();
	printf("Enter the marks of Mathematics:- ");
	scanf("%f",&mm);
	printf("Enter the marks of English:- ");
	scanf("%f",&em);
	printf("Enter the marks of Science:- ");
	scanf("%f",&sm);
	printf("Enter the marks of Gujarati:- ");
	scanf("%f",&gm);
	printf("Enter the marks of Hindi:- ");
	scanf("%f",&hm);
	if(mm >= 0 && mm <=100 && em >= 0 && em <=100 && sm >= 0 && sm <=100 && gm >= 0 && gm <=100 && hm >= 0 && hm <=100)
	{
		sum = mm + em + sm + hm + gm;
		average = sum / 5;
	}
	else
	{
		printf("Enter the marks in range between 0 to 100.");
		getch();
		exit(0);

	}
	if(average > 90 && average <=100)
	{
		grade = 'A';
		printf("Total of each marks is %.2f\n",sum);
		printf("Average marks from all subject is %.2f\n",average);
		printf("Grade is %c",grade);
	}
	else if(average > 80 && average <=90)
	{
		grade = 'B';
		printf("Total of each marks is %.2f\n",sum);
		printf("Average marks from all subject is %.2f\n",average);
		printf("Grade is %c",grade);
	}
	else if(average > 70 && average <=80)
	{
		grade = 'C';
		printf("Total of each marks is %.2f\n",sum);
		printf("Average marks from all subject is %.2f\n",average);
		printf("Grade is %c",grade);
	}
	else if(average > 60 && average <=70)
	{
		grade = 'D';
		printf("Total of each marks is %.2f\n",sum);
		printf("Average marks from all subject is %.2f\n",average);
		printf("Grade is %c",grade);
	}
	else
	{
		grade = 'F';
		printf("Total of each marks is %.2f\n",sum);
		printf("Average marks from all subject is %.2f\n",average);
		printf("Grade is %c",grade);
	}
	getch();


}
