#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercicio 01

Crie um programa em C, que coloque na tela a frase:
"Exercício Sobre Caracteres de Escape" entre aspas duplas,
pulando uma linha e com uma tabulação horizontal
*/

int main() {
	setlocale(LC_ALL, "");
	
	printf("\n\t\n\t\"Exercício Sobre Caracteres de Escape\" ");
	
	system("PAUSE > Nul");
	return 0;
}