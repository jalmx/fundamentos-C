#include <stdio.h>

int main(void) {
	//AND -> &&
	//OR -> ||
	//INVERTER -> !
	
	int c;
	printf("Cual es tu calificacion?\n");
	scanf("%d", &c);
	
	if(c < 6){
		printf("Lastima margarito\n");
	}
	
	if((c >= 6) && (c <7)){
		printf("De pansazo\n");
	}
	if((c >= 7) && (c < 8)){
		printf("Da el fuuuuaaaa\n");
	}
	if((c >= 8) && (c <9)){
		printf("Ahi la llevas\n");
	}
	if((c >= 9) && (c <=10)){
		printf("Ya casi master\n");
	}
	
	return 0;
}

