#include <stdio.h>

int main(void) {

	int array[3];
	
	printf("Dar un valor entero\n");
	scanf("%d", &array[0]);
	printf("Dar un valor entero\n");
	scanf("%d", &array[1]);
	printf("Dar un valor entero\n");
	scanf("%d", &array[2]);
		
	printf("Los valores dados fueron %d, %d, %d", array[0], array[1], array[2]);
	
	return 0;
}

