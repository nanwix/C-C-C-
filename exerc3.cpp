#include <stdio.h>

int main(){
	float A[10];
	int i, quadrado[10];
	for(i=0;i<10;i++){
		printf("Informe os valores %d \n ", i);
		scanf("%f", &A[i]);
	}
	for(i=0;i<10;i++){
		quadrado[i]=A[i]*A[i];
	}
	for(i=0;i<10;i++){
		printf("%d ", quadrado[i]);
	}
}
