#include <stdio.h>
#include <math.h>

const float PI = 3.141516f; //variable global
	
double areaCirculo(double radio){
	double area = PI * pow(radio,2); //variable local
	return area;
}

int main(void) {
	
	double radio = 0; //variable local
		
	printf("Dar el radio del circulo: ");
	scanf("%lf", &radio);
	
	double area = areaCirculo(radio); //variable local
	
	double area2 = PI * pow(radio, 2); //variable local
	
	printf("El area del circulo desde funcion: %.2lf\n", area);
	printf("El area del circulo desde el main: %.2lf\n", area2);
	
	return 0;
}

