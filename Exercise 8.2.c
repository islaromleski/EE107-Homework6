#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};

int main(void)
{
	int daysBetween(struct date start, struct date end);
	struct date start, end;
	int result;
	
	printf("Enter the start date (mm/dd/yyyy): ");
	scanf("%i%i%i", &start.month, &start.day, &start.year);
	
	printf("Enter the end date (mm/dd/yyyy): ");
	scanf("%i%i%i", &end.month, &end.day, &end.year);
	
	result = daysBetween(start, end);
	
	printf("\nThe number of days between %i/%i/%i and %i/%i/%i is %i.\n",
		start.month, start.day, start.year, end.month, end.day, end.year, result);
	
	return (0);
}

/*	While the exercise said to make something that calls the function twice, it seems
	better to me to have everything occur in the sub-functions, since it removes clutter
	from the main() function.*/

int daysBetween(struct date start, struct date end)
{
	int year(int year, int month);
	int month(int month);
	int n1, n2, result;
	
	n1 = 1461 * year(start.year, start.month) / 4 + 153 * month(start.month) / 5 + start.day;
	n2 = 1461 * year(end.year, end.month) / 4 + 153 * month(end.month) / 5 + end.day;
	
	result = n2 - n1;
	
	return (result);
}

/* 	Although I could combine the next two functions to save space, it's easier to write
	them like this, not to mention that it provides logical separation.*/

int year(int year, int month)
{
	if(month <= 2)
		return (year - 1);
	else
		return (year);
}

int month(int month)
{
	if(month <= 2)
		return (month + 13);
	else
		return (month + 1);
}