#include <stdio.h>
int main(void) {//inicia el metodo main
	int parcial1 = 8; //declaro mi variable y le asigno 7
	int parcial2 = 8; //declaro mi variable y le asigno 8
	int parcial3 = 9; //declaro mi variable y le asigno 9
	float cantidadParciales = 3; //declaro mi variable y le asigno 3	
	float promedio; //declare mi variable, pero no le asigne ningun valor
	promedio = (parcial1 + parcial2 + parcial3)/ cantidadParciales;
	//hago el calculo y lo guardo en mi variable promedio
	printf("Mi calificacion final es %f", promedio); //imprimo el promedio
	
	return 0;
}

