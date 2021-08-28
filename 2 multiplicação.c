#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "portuguese");
	
	int i, soma = 1, TAM;
	
	printf("Digite quantos números serão multiplicados: ");
	scanf("%d", &TAM);
	fflush(stdin);
	
	int v[TAM];
	
	for (i = 0; i < TAM; i++){
		printf("\nDigite o %d número: ", i + 1);
		scanf("%d", &v[i]);
		fflush (stdin);
	}
	
	for (i = 0; i < TAM; i++){
		soma = soma * v[i];
	}
	printf("\n\nO resultado da soma foi: %d", soma);
	fflush (stdout);
	return 0;
}

