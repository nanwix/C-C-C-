#include<stdio.h>

int main(){
	int A[3] [2], i, j;
	printf("\n Incializando o vetor A \n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
		scanf("%d", &A[i][j]);	
		}
	}
	printf("Apresentando o vetor A na tela \n");
	for(i=0;i<3;i++){
			for(j=0;j<2;j++){
		printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
}

