/* Reverses a three digit integer inputted by user */

#include <stdio.h>

int main(void){
	int num, first, second, third;

	printf("Enter a three-digit number: ");
 	scanf("%d", &num);
	first = (num / 10) / 10;
	printf("%d\n", first);
	// printf("The reversal is: %d%d%d\n", third, second, first);
	return 0;
}
