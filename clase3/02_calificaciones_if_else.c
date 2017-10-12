#include <stdio.h>

int main(int argc, char *argv[]) {
	int calificacion;
	
	printf("Da tu calificacion\n");
	scanf("%d", &calificacion);
	
	if(calificacion < 6 ){
		printf("Lastima margarito");
	}else{
		if(calificacion == 6){
			printf("Pasate de pansazo");
		}else{
			if(calificacion == 7){
				printf("Apenitas");
			}else{
				if(calificacion == 8){
					printf("Vas bien");
				}else{
					if(calificacion >= 9){
						printf("Ya eres programador");
					}
				}
			}
		}
	}
	
	return 0;
}

