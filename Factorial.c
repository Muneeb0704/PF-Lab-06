#include <stdio.h>

int main(){
	int num, result;
	printf("Enter a number: ");
	scanf("%i", &num);
	
	result = num;
	
	while (num > 1){
		result = result * (num - 1);
		num -= 1;
	}
	printf("The factorial of %i is %i\n", num, result);
	
	return 0;
}
