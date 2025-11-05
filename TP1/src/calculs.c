#include <stdio.h>

int main() {
	int num1, num2;
	char op;

	printf("Num1 : ");
	scanf("%d", &num1);
	
	printf("Num2 : ");
	scanf("%d", &num2);
	getchar();

	printf("Op : ");
	scanf("%c", &op);
	
	printf("-----------\n");
	switch (op) {
		case '+':
			printf("%d+%d = %d", num1, num2, num1+num2);
			break;
		case '-':
			printf("%d-%d = %d", num1, num2, num1-num2);
			break;
		case '*':
			printf("%d*%d = %d", num1, num2, num1*num2);
			break;
		case '/':
			if (num2==0) {
				printf("num2 should not be 0, exiting");
				break;
			}
			printf("%d/%d = %d", num1, num2, num1/num2);
			break;
		case '%':
			printf("%d%%%d = %d", num1, num2, num1%num2);
			break;
		case '&':
			printf("%d&%d = %d", num1, num2, num1&num2);
			break;
		case '|':
			printf("%d|%d = %d", num1, num2, num1|num2);
			break;
		case '~':
			printf("~%d = %d", num1, ~num1);
			break;
	}

	printf("\n");
	return 0;
}
