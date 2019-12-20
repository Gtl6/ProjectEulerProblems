#include <stdio.h>

int main(void){
	// It probably won't overflow. Probably.
	int counter = 0;
	int i;

	// Just counting up all the 3's and 5's
	// Plus you don't have to worry about double counting 3 and 5 if you preempt it
	for(i = 0; i < 1000; i++){
		if(i % 15 == 0) counter += i;
		else if(i % 5 == 0) counter += i;
		else if(i % 3 == 0) counter += i;
	}

	printf("Counted %d numbers\n", counter);
	return 0;
}
