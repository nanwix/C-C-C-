#include<stdio.h>

int main(){
	float A[5], soma=0, media;
	int i;
	printf("\n Digite as notas do aluno  \n");
	for(i=0;i<5;i++){
		scanf("%f", &A[i]);
		soma=soma+A[i];
	}
	media=soma/5;
		printf("\n notas do aluno \n");
	for(i=0;i<5;i++){
		printf("%.2f ",A[i]);
	}
	printf("\n media %.2f ", media);
}
