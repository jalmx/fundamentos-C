#include <stdio.h>

int main(void) {
	
	int suma =0;
	for(;;){
		int x =0;
		printf("dar numero a sumar, si da 0 sale: ");
		scanf("%d", &x);
		suma+=x;
		
		printf("la suma es: %d\n", suma);
		
		if(x == 0){
			break;
		}
		
	}
	return 0;
}

