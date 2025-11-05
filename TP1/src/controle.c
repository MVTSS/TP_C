#include <stdio.h>


void four_but_six() {
	for (int i=0; i < 1000; i++) {
		if ((i%4==0) && !(i%6==0)) {
			printf("%d\t", i);
		}
	}
}

void pair_and_eight() {
	for (int i=0; i < 1000; i++) {
		if ((i%2==0) && (i%8==0)) { // Peut être résumé à divisible par 8...
			printf("%d\t", i);
		}
	}
}

void five_seven_but_ten() {
	for (int i=0; i < 1000; i++) {
		if ((i%5==0) && (i%7==0) && !(i%10==0)) {
			printf("%d\t", i);
		}
	}	
}


int main() {
  	four_but_six();
	printf("\n\n");
	pair_and_eight();
	printf("\n\n");
	five_seven_but_ten();
	return 0;
}
