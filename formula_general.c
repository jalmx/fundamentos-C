#include <stdio.h> //libreria para entradas y salidas
#include <math.h> //libreria para funciones matematicas

int main(void) {

	double a, b, c, x1, x2; //declaracion de variables
	
	printf("Dar el valor de \"a\" "); 
	scanf("%lf",&a);
	
	printf("Dar el valor de \"b\" ");
	scanf("%lf",&b);
	
	printf("Dar el valor de \"c\" ");
	scanf("%lf",&c);
	printf("\n");
	
	double raiz = pow(b,2) - (4 * a * c);
	
	if(raiz >= 0){
		double dividendo = 2 *a;
		
		x1 = (- b + sqrt(raiz))/dividendo;
		x2 = (- b - sqrt(raiz))/dividendo;
		
		printf("Resultado de X1: %lf\n", x1);
		printf("Resultado de X2: %lf\n", x2);
		
	}else{
		printf("No tiene resultado real");
	}
		
	return 0;
}

