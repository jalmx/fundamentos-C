#include <stdio.h>

int main(void) {
	
	int poni[3];
	int suma=0;
	int i=0;
	
	while(i<=3){
	printf("Dar un valor entero para la pocision %d\n", i);
	scanf("%d", &poni[i]);
	suma+=poni[i];
	i++;
	}
	
	printf("\nla sumatoria de los valores que diste son:%d", suma);
	
	
	return 0;
}

