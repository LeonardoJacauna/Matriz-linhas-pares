//leia uma matriz 4x4 e mostre somente as linhas pares. Mostre no final a matriz obtida.
#include <stdio.h>

int main (void){
	int i,j,l=4,c=4,matriz[l][c];
	
	for (i=0;i<l;i++){//linha
		for(j=0;j<c;j++){//coluna
			printf ("Matriz [%d][%d]: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	system("cls");
	printf("_____________________Matriz__________________________\n\n");//imprimir a matriz
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf ("\t%d",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("________________Matriz Linhas Pares___________________\n\n");
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			if(i%2==0){ //condição para verificar se i é par, entao imprimi as linhas pares.
			printf ("\t%d",matriz[i][j]);
			}else{
			printf("\t");
		
			}
		}
		printf("\n");
	}

	return 0;
}
