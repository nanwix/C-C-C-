#include <stdio.h>

int main(){
	int A[6], i;
	for(i=0;i<6;i++){
		printf("Informe os valores %d \n", i);
		scanf("%d", &A[i]);
	}
	for(i=0;i<6;i++){
		printf("%d ", A[i]);
	}
}
