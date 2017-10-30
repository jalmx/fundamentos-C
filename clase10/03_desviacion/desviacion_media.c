#include <stdio.h>
#include "estadistica.h"

int main(int argc, char *argv[]) {
	int CANTIDAD = 4;
	double datos[]= {2,3,4,5};
	
	double med = media(CANTIDAD, datos);
	double desv = desviacion(CANTIDAD, datos);
	double desv2 = desviacionConMedia(CANTIDAD, med, datos);
	
	printf("media: %.2lf\n", med);
	printf("desviacion: %.2lf\n", desv);
	printf("desviacion2: %.2lf\n", desv2);
	
	return 0;
}

