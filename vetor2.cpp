#include <stdio.h>

int main(){
	int M[2][3], i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Posição [%d] [%d] = ",i,j);
			scanf("%d", &M[i][j]);
		}
	}for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d  ", M[i][j]);
		}
		printf("\n");
}
}
