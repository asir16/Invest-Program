#include <stdio.h>
#include <conio.h>

int main() 
{
	
	int number;
	int n;
	
	printf("**************************\n **********Menu**********\n");

	printf("1) Invest Program\n");
	printf("2) Exit\n**************************\n");

	printf("Please enter the option:");

	scanf_s("%d", &number);


	int year = 1;
	int invest = 100;
	float simple_interest;
	float compound_interest;
	
	while (number == 1)
	{
		int amount;
		printf("\n Enter amount you want to invest:\n");
		scanf_s("%d", &amount);
		
		year++;
		float simple_interest = 100 * 0.10;
		float compound_interest = invest * 0.05 * year;

		if (compound_interest > simple_interest)
		{

			printf("Simple Interest=%f Compound Interest=%f\n", simple_interest, compound_interest);

			printf("**************************\n **********Menu**********\n");

			printf("1) Invest Program\n");
			printf("2) Exit\n**************************\n");

			printf("Please enter the option:");

			scanf_s("%d", &number);

		}
	    if (compound_interest < simple_interest)
		{
			printf("Simple Interest=%f Compound Interest=%f\n", simple_interest, compound_interest);

			printf("**************************\n **********Menu**********\n");

			printf("1) Invest Program\n");
			printf("2) Exit\n**************************\n");

			printf("Please enter the option:");

			scanf_s("%d", &number);
		
		}
		
	
		
	}

	while (number > 1)

	{
		printf("The program is exiting, goodbye!");
		exit(0);

	}
		
	
}