#include <stdio.h>

int main(void) {
	int tabla;
	
	printf("Dar el valor para la tabla\n");
	scanf("%d", &tabla);
	
	printf("Se imprimira la tabla del %d\n", tabla);
	for(int x = 1; x <= 10; x++)
	{//comienza el for
		printf("%d X %d = %d\n",tabla,x, (x*tabla));
	}//termina el for
	
	return 0;
}

