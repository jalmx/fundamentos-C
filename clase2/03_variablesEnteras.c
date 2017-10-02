#include <stdio.h>
//variables y espacio en memoria
int main(void) {
	//pueden ser positivos o negativos
	signed char charConSigno= 'b';	// 1 byte 128 al +127
	short int enteroCorto= 1;		// 2 bytes 32,768 al +32,767
	int entero= 332;			// 4 bytes 2,147,438,648 to +2,147,438,647
	long int enteroLargo = 234334;	// 4 bytes 2,147,438,648 to +2,147,438,647
	long long int enteroExtraLargo = 423;// 8 bytes 9,223,372,036,854,775,808 to +9,223,372,036,854,775,807
	
	//Solo pueden ser positivos
	unsigned char caracterSinSigno= 'u'; //1 byte 0 al 255
	unsigned short int enteroCortoSinSigno = 3; // o
	unsigned short enteroCortoSinSigno2 = 5; // 2 bytes 0 to 65,535
	unsigned int enteroSinSigno = 45; //4 bytes 0 to 4,294,967,295

	//son numeros enormes que solo pueden ser positivos
	unsigned long int enteroLargoSinSigno = 3487;
	unsigned long largoSinSigno = 354;//4 bytes 0 to 4,294,967,295
	unsigned long long int muyLargoSinSigno = 3432;
	unsigned long long extremoLargo = 43645;// 8bytes 0 to +18,446,744,073,709,551,615
	
	return 0;
}

