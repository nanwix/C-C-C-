#include <stdio.h>

int main(){
	int A[4][4], i, j, soma=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Posição [%d] [%d] = ",i,j);
			scanf("%d", &A[i][j]);
		}
		}for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d  ", A[i][j]);
		}	
		printf("\n");
		}
		printf("\n");
		for(i=0;i=4;i++){
			for(j=0;j<4;j++){
			 if(A[i][j]>10){
			 	soma=soma+1;
				 
			 	}
			}
		}printf("%d", soma);	
}
