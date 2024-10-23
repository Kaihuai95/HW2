#include <stdio.h>

int main()
{
	int a, b, c, count = 0;
	printf("a*a  +  b*b  =  c*c");
	printf("\n");
	for (c = 1; c <= 500; c++){
		for (b = 1; b <= 500; b++){
			for (a = 1; a <= 500; a++){
				if ((a + b > c) && (a <= b)){
					if ((a * a + b * b) == c * c){
						printf("%d\t%d\t%d\n", a, b, c);
					}
				}
			}
		}
	}
}