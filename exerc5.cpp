#include <stdio.h>

int main(){
	int A[10], i, r;
	for(i=0;i<10;i++){
	printf("Informe os valores %d\n", i);
	scanf("%d", &A[i]);
	}
	for(i=0;i<10;i++){
	printf("%d ", A[i]);
	}
	for(i=0;i<10;i++){
		r= A[i]%2;
		if(r==0){
		printf("%d ", A[i]);
		}
	}
	
	
}
