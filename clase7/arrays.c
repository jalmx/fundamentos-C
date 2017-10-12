#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int arr[4] ; /*se declara array indicando su espacio total, 
					con las posiciones del 0 al 9*/
	int arr2[] = {2,4,6,8,10}; /*Inicializo el array con valores */
	
	for(int i = 0; i<5; i++){
		printf("Posicion %d del array contiene %d\n",i, arr2[i]);
	}
	
	printf("----------------------\n");
	
	for(int i = 0; i < 4; i++){ //uso este for para guardar valores
		arr[i] = (i+1) * 3;
	}
	
	for(int i = 0; i < 4; i++){
		printf("Posicion %d del array contiene %d\n",i, arr[i]);
	}
	
	return 0;
}

