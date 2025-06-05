#include <stdio.h>

int main(){
	int A[8], i, soma,x,y;
	for (i=0;i<8;i++){
		printf("infomrme os valores %d \n", i);
		scanf("%d", &A[i]);
	}
	do{
	printf("Informe x e y \n ");
	scanf("%d %d", &x, &y);
	}while(x < 0 || x >7 || y < 0 || y>7);
	soma=x+y;
	printf("%d ", soma);
	
}

