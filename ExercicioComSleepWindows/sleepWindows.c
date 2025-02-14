/*
Exercício: Crie um código que escreve:
Esperando por 2 segundos, aguarda os 2 segundos e escreve:
Continuando a execução do programa.
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese"); // define a localidade para Portugues (imprimir acento)
	system("COLOR 02"); // Muda a cor da fonte para verde (cor:2 = verde)
	
	printf("\n\t\"Espere por 2 segundos\"");
	system("PAUSE > Nul");
	
	Sleep(2000); //milissegundos

	
	printf("\n\n\n\tContinuando a execução do programa;\n\n\n");
	system("PAUSE > Nul");
	
	
	return 0;
}