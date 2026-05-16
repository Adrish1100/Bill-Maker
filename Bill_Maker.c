#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifdef _WIN32
#define CLEAR system("cls")
#else
#define CLEAR system("clear")
#endif

struct bill
{
	char item_name[50];
	float qty;
	float price;
};

void output(struct bill s[], int i);

int main()
{
	int i;

	printf("Enter the number of items:");
	scanf("%d", &i);
	getchar();

	struct bill s[i]; // naming the struct bill as s

	for (int b = 0; b < i; b++) //taking input
	{
		printf("Enter the Item Name:");
		fgets(s[b].item_name, 50, stdin);
		s[b].item_name[strcspn(s[b].item_name, "\n")] = '\0'; // nuke the \n
		printf("Enter Qty(in kgs):");
		scanf("%f", &s[b].qty);
		getchar();
		printf("Enter price:");
		scanf("%f", &s[b].price);
		getchar();
	}
	CLEAR;
	output(s, i);
	return 0;
}

void output(struct bill s[], int i)
{
	float grand_total = 0;

	printf("---------------------------------------------------------------------\n");
	printf("%-8s %-10s %-8s %-10s %-10s\n", "Serial", "Item Name", "Qty", "Price", "Total");
	printf("---------------------------------------------------------------------\n");

	for (int b = 0; b < i; b++)
	{
		int c = b + 1;
		float ttl = s[b].qty * s[b].price;
		grand_total += ttl;

		printf("%-8d %-10s %-8.2f %-10.2f %-10.2f\n", c, s[b].item_name, s[b].qty, s[b].price, ttl);
	}
	printf("---------------------------------------------------------------------\n");
	printf("%-42s %10.2f\n", "Grand Total:", grand_total);
	printf("---------------------------------------------------------------------\n");
}