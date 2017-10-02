# Fundamentos de programación

**Clase 1 de programación**

- Comentarios
```c
// comentario de línea
/* Comenatario de bloque*/
``` 

- Declaración de variables
```c 
int variable variable entera
float variable flotante 
char variable caracter
``` 
- Secuencias de escape
    - **\n** nueva linea
    - **\"** doble comilla
    - **\'** comilla simple
    - **\\** diagonal inversa
    - **\t** tabulador

**Clase 2 Operaciones con variables**

- Función main
- Operaciones simples con variables enteras 

**Clase 3**

- Deciciones **if** e **if else**

```c

if (condicion_verdadera){
	//en caso de ser verdaro entra a ejecutar esta sección
}else{
	//De lo contrario se ejecuta este bloque de código
}

- Formato (printf("texto"))

```c
printf("Recibe un valor entero %d, recibe un valor flotante %f, recibe un valor flotante con maximo 2 decimales %.2f");
```

**Clase 4**

- Funciones trigonometricas 
```c
#include <math.h> //importo la libreria de funciones matematicas

double seno = sin((PI * angulo) / 180); //calculo el seno del angulo
	double coseno = cos((PI * angulo) / 180); //calculo el coseno del angulo
	double tangente = tan((PI * angulo) / 180); //calculo la tangente de
```

- Funciones matematicas

```c
int valorAbsolutoEntero = fabs(-18); // retorna el valor absulo del argumento
	float valorAbsolutoFlotante = fabs(-4.7); // retorna el valor absulo del argumento
		
	printf("%d\n", valorAbsolutoEntero);
	printf("%f\n", valorAbsolutoFlotante);
	
	int x = 3;
	float exponente = exp(x);
	printf("e elevado a la %d: %f \n",x, exponente);
	
	float valor = 16.6;
	float raiz = sqrt(valor); //sqrt calcula la raiz cuadra del argumento
	
	printf("La raiz cuadrada de %f es: %f\n", valor, raiz);
	
	int base = 2;
	int pot = 3;
	int potencia = pow(base, pot); //x^y el primer valor es la base y el segundo es la potencia
	printf("La potencia de %d elevado a la %d es: %d",base, pot, potencia);
	 
```
