#include <math.h>

double media(int cantidad, double datos[]){
	double suma = 0;
	
	for(int i = 0; i < cantidad; i++){
		suma += datos[i];
	}
	
	return suma/ cantidad;
}

double desviacion(int cantidad, double datos[]){
	double suma = 0;
	double med = media(cantidad, datos);
	
	for(int i = 0; i<cantidad; i++){
		suma += pow(datos[i]- med,2);
	}
	
	return sqrt(suma/ cantidad);
}

double desviacionConMedia(int cantidad, double media, double datos[]){
	double suma = 0;
	
	for(int i = 0; i<cantidad; i++){
		suma += pow(datos[i]- media,2);
	}
	
	return sqrt(suma/ cantidad);
}
