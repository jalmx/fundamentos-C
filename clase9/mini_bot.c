#include <stdio.h>

const char nombreBot[] = "InduBot";
const int SI = 1;

void preguntaBot(char respuestaBot[]){
	printf("%s", respuestaBot);
}
int main(void) {
	
	char respuestaUsuario[20];
	int respuestaNumerica = 0;
	
	printf("******* Bienvenido **********\n\n");
	printf("Mi nombre es %s\n\n", nombreBot);
	
	preguntaBot("Cual es su nombre?\n");
	scanf("%s", respuestaUsuario);
	printf("Hola %s, Es un placer conocerte\n\n", respuestaUsuario);
	preguntaBot("Cual es tu color favorito?\n");
	scanf("%s", respuestaUsuario);
	printf("WoW!!!, el mio igual es el %s!!!\n\n", respuestaUsuario);
	
	preguntaBot("Quieres ser mi amigo?, Tengo dulces >.< --->\t1)si\t2)no\n");
	scanf("%d", &respuestaNumerica);
	
	if(respuestaNumerica == SI){
		preguntaBot("Seremos amigos por siempre \\o/");
	}else{
		preguntaBot("Estare en tus pesadillas, no lo olvides :@");
	}
	
	return 0;
}

