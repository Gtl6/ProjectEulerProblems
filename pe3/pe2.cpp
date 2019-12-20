#include <stdio.h>

int main(void){
	int sum = 0;
	
	// Going to do it iteratively, because I don't want a bazillion recursive calls
	int one = 1;
	int two = 2;
	int temp = 0;

	while(two < 4000000){
		// If it's even, add it to our sum
		if(two % 2 == 0) sum += two;
		
		temp = one + two;
		one = two;
		two = temp;
	}

	printf("Sum of even Fibs: %d\n", sum);

	return 0;
}
