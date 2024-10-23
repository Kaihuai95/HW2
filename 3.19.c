#include <stdio.h>

int main()
{
	float a, b, t;
	int c;
	while (1){
		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &a);
		if (a == -1){
			break;
		}
		printf("Enter interest rate: ");
		scanf("%f", &b);
		printf("Enter term of the loan in days: ");
		scanf("%d", &c);

		t = a * b * c / 365;

		printf("The interest charge is $%.2f\n", t);

		printf("\n");
	}
}