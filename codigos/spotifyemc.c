#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int decicao;
	
	printf("\tBem vindo ao Spotify");
	printf("\nO que deseja fazer?");
	printf("\n");
	printf("1-Visualizar musicas cadastradas");
	printf("\n");
	printf("2-Procurar por musicas");
	printf("\n");
	printf("3-Procurar por artista");
	printf("\n");
	printf("4-Procurar por genero musical");
	printf("\n");
	printf("5-Criar playlist");
	printf("\n");
	printf("6-Cadastrar nova musica");
	printf("\n");
	printf("7-Sair");
	printf("\n");
	
	scanf("%d", &decicao);
	
	switch(decicao){
		case 1:
			system("cls");
			musicascadastradas;
			break;
		case 2:
			system("cls");
			procurarmusica;
			break;
		case 3:
			system("cls");
			procurarartista;
			break;
		case 4:
			system("cls");
			procurargenero;
			break;
		case 5:
			system("cls");
			criarplaylis;
			break;
		case 6:
			system("cls");
			cadastrarmusica;
			break;
		case 7:
			system("cls");
			printf("\tAte mais");
			break;
		default:
			printf("opçao invalida");
			
}
	
	
}
