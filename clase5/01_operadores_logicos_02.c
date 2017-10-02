#include <stdio.h>

//Verifica si la letra es mayuscula o minuscula
int main(void) {
	
	char letra;
	
	printf("Da una letra  ");
	scanf("%c", &letra);
	printf("\n");
	
	if(letra >='A' && letra <= 'Z'){
		printf("Diste una letra MAYUSCULA y fue: %c", letra);
	}else{
		if(letra >='a' && letra <= 'z'){
			printf("Diste una letra MINUSCULA y fue: %c", letra);	
		}else{
			printf("No diste letra");
		}
	}
	return 0;
}

