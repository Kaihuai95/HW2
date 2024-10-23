#include <stdio.h>

int main()
{
	int max = 5;
	int min = 5;
    for (int i = 1; i <= 9; i++){
		for (int j = 1; j <= 9; j++){
			if ((j >= min) && (j <= max)){
				printf("*");
		    }else{
				printf(" ");
		    }
		}
		if (i < 5){
			max++;
			min--;
		}else{
			max--;
			min++;
		}
		printf("\n");
	}
}