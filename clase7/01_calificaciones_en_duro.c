#include <stdio.h>

int main(void) {
	int calificacion1,
		calificacion2,
		calificacion3,
		suma,
		totalParciales = 3;
	float promedio = 0;
	
	printf("Dar las 3 calificacionones parciales,\n");
	printf("separados por un espacio o un Enter: ");
	scanf("%d%d%d", &calificacion1, &calificacion2, &calificacion3);
	
	suma = calificacion1 + calificacion2 + calificacion3;
	
	promedio = (float) suma/ totalParciales;
	printf("Tu promedio final es %.2f", promedio);
	
	return 0;
}

