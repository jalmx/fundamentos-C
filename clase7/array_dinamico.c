#include <stdio.h>

int main(void) {
	int cantidad = 0;//inicializo la variable como buena practica
	
	printf("Cuantos valores quieres ingresar: ");
	scanf("%d",&cantidad);//cargo el tamaño del array, que pido al usuario
	
	int valores[cantidad];//defino el tamaño del array dado por el usuario
	
	for(int i = 0; i < cantidad ; i++){//pido los datos para guardarlos en el array
		printf("Dar el %d valor: ", (i+1));
		scanf("%d", &valores[i]);//guardo el valor en la posicion que tiene la variable i
	}
	
	printf("-------------\n");
	printf("Los valores ingresados fueron: ");
	for(int i=0; i < cantidad ; i++){//imprimo los valores que tiene almacenado el array
		printf("%d  ", valores[i]);//imprimo el valor de la posicion "i"
	}
	
	return 0;
}

