/*
Primeiro exercicio
*/

#include <stdio.h>
#include <stdlib.h> // usar o system pause
#include <locale.h> // usar o setlocale (para incluir acento)

int main() {
    setlocale(LC_ALL,"");
    printf("\nHello World\n");
    printf("Só ser feliz na Programação");

    system("PAUSE >nul");

    return 0;
}
