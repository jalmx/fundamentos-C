#include <stdio.h>
#include <math.h> //importo la libreria de funciones matematicas

//FUNCIONES TRIGONOMETRICAS
int main(void) {
	// SENO - COSENO - TANGENTE -> el argumento debe estar en **radianes**
	//tambien existen -> arc seno, arc cos, arc tan, seno hip, cos hip y tan hip
	float PI = 3.141592; //valor de PI
	int angulo = 90;
	//primero el angulo se debe convertir a radianes
	double seno = sin((PI * angulo) / 180); //calculo el seno del angulo
	double coseno = cos((PI * angulo) / 180); //calculo el coseno del angulo
	double tangente = tan((PI * angulo) / 180); //calculo la tangente del angulo
	
	printf("valor del seno es: %f\n", seno);
	printf("valor del coseno es: %f\n", coseno);
	printf("valor de tangente es: %f\n", tangente);
	
	return 0;
}

