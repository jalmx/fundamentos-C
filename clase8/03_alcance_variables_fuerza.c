#include <stdio.h>

#define GRAVEDAD 9.81f

#define opcionMasa 1
#define opcionAceleracion 2

void mensajeBienvenida(){
	printf("Calculadora cientifica para calcular Segunda Ley de Newton\n");
}
void mensajeResultado(double resultado){
	printf("La fuerza resultante es: %lf\n", resultado);
}
double fuerzaGravedad(double masa){
	return masa * GRAVEDAD;
}

double fuerza(double masa, double aceleracion){
	return masa * aceleracion;
}

double solicitudDato(int opcion){
	double valor = 0.0;
	switch(opcion){
	case opcionMasa:
		printf("Dar valor de la masa: ");
		scanf("%lf", &valor);
		break;
	case opcionAceleracion:
		printf("Dar valor de la aceleracion: ");
		scanf("%lf", &valor);
		break;
	}
	return valor;
}
double calcularFuerza(){
	double masa = 0.0;
	double aceleracion = 0.0;
	masa = solicitudDato(opcionMasa);
	aceleracion = solicitudDato(opcionAceleracion);
	
	return fuerza(masa, aceleracion);
}


int main() {
	mensajeBienvenida();
	double fuerza = calcularFuerza();
	mensajeResultado(fuerza);
	return 0;
}

