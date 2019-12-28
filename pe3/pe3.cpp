#include <iostream>
#include <vector>
#include "math.h"

// A function that tests if a double is prime
//	Does it rigorously (testing all the multiples)
bool is_prime(double num){
	double test_up_to = sqrt(num);
	for(double d = 2; d < test_up_to; d++){
		if(fmod(num, d) == 0){
			printf("Not a prime though, sorry bud\n");
			return false;
		}
	}
	return true;
}

int main(void){
	double to_factorize = 600851475143;
	double up_to = sqrt(to_factorize);

	double largest = 0;
	double it = 3;

	while(it < up_to){
		if(fmod(to_factorize, it) == 0){
			printf("Got a multiple!\n");
			if(is_prime(it)){
				largest = it;
			}
		}

		// Even numbers are not prime
		it += 2;
	}

	printf("The largest prime multiple of %f is %f\n", to_factorize, largest);

	return 0;
}
