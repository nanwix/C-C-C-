#include <stdio.h>

int main(){
	int A[6]={1, 0, 5, 100, -5, 7}, i, soma=0;	
	for(i=0;i<6;i++){
		printf("%d ", A[i]);
	}
	soma=A[0]+A[1]+A[5];
	printf(" \n soma é: %d ", soma);
}

