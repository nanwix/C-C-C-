#include <stdio.h>

int main(){
	int num;
	printf("Escreva um numero \n");
	scanf("%d", &num);
	switch(num){
		case 1:printf("Voce escreveu o numero %d", num); break;
		case 2:printf("Voce escreveu o numero %d", num); break;
		case 3:printf("Voce escreveu o numero %d", num); break;
		default: printf("Voce escreveu um numero maior que tres: %d", num); break;
	}
	
}
