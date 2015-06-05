#include <stdio.h>

//Definindo limite para ordem da matriz
#define MAX 20

//Definindo mensagem de erro
#define FRASE_ERRO "Opcao invalida!\n"

//Enumeração das opções do programa
enum{
	OPC_SAIR,				//Finaliza o programa.
	OPC_SOMA_LINHA,			//Soma da linha i.
	OPC_SOMA_COLUNA,		//Soma da coluna j.
	OPC_SOMA_GERAL,			//Soma de todos os valores da matriz.
	OPC_SOMA_DIAG_PRINC,	//Soma da diagonal principal.
	OPC_SOMA_DIAG_SEC,		//Soma da diagonal secundaria.
	OPC_MAXMINMED_LIN,		//Imprime os valores máximo, mínimo e médio da linha i
	OPC_MAXMINMED_COL,		//Imprime os valores máximo, mínimo e médio da coluna j
	OPC_MAXMINMED_GERAL,	//Imprime os valores máximo, mínimo e médio da matriz
	OPC_SOMA_MATRIZ,		//B = A + A.
	OPC_PROD_MATRIZ,		//B = A * A'.
	OPC_TRANSPOSTA,			//B = A'.
	OPC_PROD_K,				//B = k * A.
};


int main(){
	int matriz[MAX][MAX];
	int tamanho;
	int i, j;

	do{
		scanf("%d", &tamanho);
	} while (tamanho > MAX);

	for (i = 0; i < tamanho; i++){
		for (j = 0; j < tamanho; j++){
		scanf("%d%d", &matriz[i][j]);
	}
}

	switch

		case OPC_SOMA_LINHA:

			for(i=0; i < ; i++)
				soma[i] = 0;
			for(j=0; j< ; j++)
				for()
					soma[i] += matriz[i][j];

	

	return (0);
}
