#include <stdio.h>

#define GRAVEDAD 9.81f //variables globales

#define OPCION_MASA 1 //variables globales
#define OPCION_ACELERACION 2 //variables globales

void mensajeBienvenida(){	
	printf("Calculadora cientifica para calcular Segunda Ley de Newton\n");
}
void mensajeResultado(double resultado){
	printf("La fuerza resultante es: %.2lf\n", resultado);
}
double fuerzaGravedad(double masa){
	return masa * GRAVEDAD;
}
double fuerza(double masa, double aceleracion){
	return masa * aceleracion;
}

double verificarGravedad(){
	int opcion = 0;
	const int si = 1;
	printf("La Aceleracion es igual a la Gravedad\? \t1)SI\t2)NO: ");
	scanf("%d", &opcion);
	if(opcion == si){
		return GRAVEDAD;	
	}else{
		return 0.0;
	}
}
double solicitudDato(int opcion){
	double gravedad;
	double valor = 0.0;
	switch(opcion){
	case OPCION_MASA:
		printf("Dar valor de la masa: ");
		scanf("%lf", &valor);
		break;
	case OPCION_ACELERACION:
		gravedad = verificarGravedad();
		if(gravedad != GRAVEDAD){
			printf("Dar valor de la aceleracion: ");
			scanf("%lf", &valor);	
		}else{
			valor = gravedad;
		}
		break;
	}
	return valor;
}

double calcularFuerza(){
	double masa = 0.0;
	double aceleracion = 0.0;
	masa = solicitudDato(OPCION_MASA);
	aceleracion = solicitudDato(OPCION_ACELERACION);
	
	return fuerza(masa, aceleracion);
}


int main() {
	mensajeBienvenida();
	double fuerza = calcularFuerza();
	mensajeResultado(fuerza);
	return 0;
}

