#include <stdio.h>

int main()
{
	printf("(A)");
	printf("\n");
	for (int i = 1; i <= 10; i++){
		for (int j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}

	printf("(B)");
	printf("\n");
	for (int i = 10; i >= 1; i--){
		for (int j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}

	printf("(C)");
	printf("\n");
	for (int i = 1; i <= 10; i++){
		for (int j = 1; j <= 10; j++){
			if (i <= j){
			    printf("*");
			}else{
				printf(" ");
			}

		}

		printf("\n");
	}

	printf("(D)");
	printf("\n");
	for (int i = 10; i >= 1; i--){
		for (int j = 1; j <= 10; j++){
			if (i <= j){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}