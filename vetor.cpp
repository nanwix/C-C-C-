#include <stdio.h>

int main()
{
	int v[10], i, maior = 0;
	for(i=0;i<10;i++){
		printf("Digite um valor da posi��o [%d]",i );
		scanf("%d",&v[i]);
	}
	for(i=0;i<10;i++){
		printf("valor da posi��o [%d]",i );
		printf("%d",v[i]);
		printf("\n");
	}
	for(i=0;i<10;i++){
		if(v[i]>maior){
		maior=v[i];
		}	
	}
	printf("maior elemento digitado = %d", maior);
}
