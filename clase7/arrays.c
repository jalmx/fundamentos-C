#include <stdio.h>

int main(void) {
	
	int arr[4] ; /*se declara array tipo dobule, indicando su espacio total, 
					con las posiciones del 0 al 3*/
	int arr2[] = {2,9,6,22,99,20,3,23}; /*Inicializo el array con valores */
	printf("%d\n", arr2[7]);
	
	for(int i = 0; i<8; i++){
		printf("Posicion %d del array contiene %d\n",i, arr2[i]);
	}
	
	printf("----------------------\n");
	
	for(int i = 0; i < 4; i++){ //uso este for para guardar valores
		arr[i] = (i+3)*7;
	}
	
	for(int i = 0; i < 4; i++){
		printf("Posicion %d del array contiene %d\n",i, arr[i]);
	}
	
	return 0;
}

