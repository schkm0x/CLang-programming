#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercicio 01

Crie um programa em C, que coloque na tela a frase:
"Exerc�cio Sobre Caracteres de Escape" entre aspas duplas,
pulando uma linha e com uma tabula��o horizontal
*/

int main() {
	setlocale(LC_ALL, "");
	
	printf("\n\t\n\t\"Exerc�cio Sobre Caracteres de Escape\" ");
	
	system("PAUSE > Nul");
	return 0;
}