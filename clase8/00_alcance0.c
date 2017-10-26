#include <stdio.h>

int ponny = 0;//variable global

int suma(int v ){
	return v + ponny;
}

int main(int argc, char *argv[]) {
	printf("antes valor de ponny: %d", ponny);
	//int ponny = 5;//no se puede
	scanf("%d", &ponny);
	
	printf("despues valor de ponny: %d", ponny);
	/*int variable2 = 3; //variable local
	int suma = variable1 + variable2;
	
	for(int i = 0; i< 6; i++){
		printf("%d", i);
	}
	
	int o = i + variable1;*/
	
	return 0;
}


