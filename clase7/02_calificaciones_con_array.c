#include <stdio.h>

int main(void) {
	const int totalParciales = 3; //defino mi total de parciales
	int calificaciones[3]; //declaro array con los espacios que necesito
	int suma = 0; //variable auxiliar para guardar la suma
	float promedio = 0; //variable que calculo el promedio
	
	printf("Dar los 3 parciales \n");
	
	for(int i=0;i < totalParciales; i++){
		printf("calificacion %d: ", (i+1));//imprimo mensaje para que de la calificacion
		scanf("%d", &calificaciones[i]); //guardo el valor que me pasan en una posicion del array
		suma += calificaciones[i]; //voy sumando lo que contiene la posicion del array con la variable suma
	}
	promedio = (float) suma/totalParciales; //calculo el promedio 
	
	printf("Promedio final es: %.2f", promedio);//imprimo por pantalla el mensaje con el promedio
	return 0;
}

