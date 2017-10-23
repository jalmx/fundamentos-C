#include <math.h>
#include <stdio.h>

double raiz(double a, double b, double c){
	double operacion = pow(b, 2) - (4 * a * c);	
	return sqrt(operacion);
}

double dosA(double a){
	return 2 * a ;
}

double primerRaiz(double a, double b, double c){
	return  (-b + raiz(a,b,c))/dosA(a);
}

double segundaRaiz(double a, double b, double c){
	return  (-b - raiz(a,b,c))/dosA(a);
}
