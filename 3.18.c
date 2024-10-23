#include <stdio.h>

int main()
{
	float a, b;
	while (1){
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%f", &a);
		if (a == -1){
		    break;
		}
		b = (a * 0.09) + 200;
		printf("Salary is: $%.2f\n", b);
		printf("\n");
	}
}