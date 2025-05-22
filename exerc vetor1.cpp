#include <stdio.h>

int main(){
	double A[2] [3], B[2] [3], C[2] [3];
	int i,j;
		printf("Informando os dados da matriz  A \n");
		for(i=0;i<2;i++){
			for(j=0;j<3;j++){
			printf("Posição [%lf] [%lf] = ",i,j);
			scanf("%lf", &A[i][j]);
		}
	}printf("Informando os dados da matriz  B \n");
		for(i=0;i<2;i++){
			for(j=0;j<3;j++){
			printf("Posição [%lf] [%lf] = ",i,j);
			scanf("%lf", &B[i][j]);
		}
	}printf("Soma de  A por B \n");
		for(i=0;i<2;i++){
			for(j=0;j<3;j++){
			C[i][j]=A[i][j]+B[i][j];
			printf("%.2lf ",C[i][j]);
		}
		printf("\n");
}
}
