#include <stdio.h>

int main(void) {
	int calificacion;
	int suma = 0;
	int totalParciales = 3;
	float promedio;
	
	for(int i = 0; i< totalParciales; i++){
		printf("Dar calificacion %d: ",(i+1));
		scanf("%d", &calificacion);
		suma += calificacion;
	}
	
	promedio = (float) suma /totalParciales;
	
	printf("Tu primedio final es: %.2f",promedio);
	return 0;
}

