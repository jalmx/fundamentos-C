#include <stdio.h>

int main(void) {
	int eleccion;
	int a, b, resultado;
	
	for(;;){ //hago el ciclo infinito
		
		printf("Calculadora:\n1)sumar\n2)restar\n3)salir\n");
		scanf("%d",&eleccion);
		
		if(eleccion == 1){
			
			printf("Dar primer valor a sumar\n");
			scanf("%d",&a);
			printf("Dar segundo valor a sumar\n");
			scanf("%d",&b);
			resultado = a+b;
			printf("La suma es: %d\n", resultado);
		}else{
			if(eleccion == 2){
				printf("Dar primer valor a restar\n");
				scanf("%d",&a);
				printf("Dar segundo valor a restar\n");
				scanf("%d",&b);
				resultado = a-b;
				printf("La resta es: %d\n", resultado);	
			}else{
				printf("Saliendo del programa, gracias por su visita");
				break;//rompo el ciclo
			}
			
		}
	}
	
	
	return 0;
}

