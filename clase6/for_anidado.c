#include <stdio.h>

int main() {
	for(int i =0; i<= 3; i++){
		printf("Valor de i: %d\n", i);
		
		for(int j = 0 ; j <= 3; j++){
			printf("%d ", (j*i));
		}
		
		printf("\n");
	}
	
	return 0;
}

