#include <stdio.h>

main() {
	
	int num, res;
	
	printf("Insert a number: ");
	scanf("%d", &num);
	
	while(res != 1) {
		
		// Even Number
		if(num%2 == 0) {
			
			res = num / 2;
			
		}
		
		// Odd Number
		else if(num%2 == 1) {
			
			res = num * 3 + 1;
			
		}
		
		printf("%d \n", res);
		
		num = res;
		
	}
	
}
