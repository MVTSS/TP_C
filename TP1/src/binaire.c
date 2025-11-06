#include <stdio.h>

int main() {
	int var;
	int binaire[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; // Pour le garder, au cas où (2^15 = 32768)
	int i = 0;
	printf("Variable : ");
	scanf("%d", &var);

	if (var > 32767) {
		printf("The variable is above the int can hold, but heres the 15 LSB of that number : \n");
	}

	while (var != 0) {	
		binaire[i] = var%2;
		var /= 2;
		i++;
	}

	for (int j = (sizeof(binaire)/4)-1; j >= 0; j--) {
		printf("%d", binaire[j]);
	}
	printf("\n");
	
	return 0;
}
