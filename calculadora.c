#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.1416 // muito importante
// Definição de constantes

// Menu inicial para calculadora que pede ao user escolher a operação matemática que quer fazer. Elaborado por Paulina, 25-09-2025 
int main()
{
    setlocale(LC_ALL,"");
    int op, valor1, valor2, resultado;
	void menu() {
		printf("O que pretende fazer?\n ");
		printf("1 - Soma\n ");
		printf("2 - Subtração\n ");
		printf("3 - Multiplicação\n ");
		printf("4 - Divisão\n ");
		scanf("%d", &op);
		printf("Insira o primeiro valor: ");
		scanf("%d", &valor1);
		printf("Insira o segundo valor: ");
		scanf("%d", &valor2);
	}

    switch (op){
        case 1:    // Operação de somar. Pede dois valores e soma-os. Elaborado pelo Miguel, 25-09-2025 
            resultado=valor1+valor2;
            printf("Resultado: %d.", resultado);
            break;

        // Subtração, pede dois valores e subtrai-os. Elaborado por Fábio, 25-09-2025

        case 2:
            resultado=valor1-valor2;
            printf("Resultado: %d.", resultado);
            break;

       // Ajuste de identação para garantir a funcionalidade do código. Elaborado por Cristiane, 13-10-2025
		
        // Multiplicação. Pede dois valores e multiplica-os. Elaborado por Afonso, 25-09-2025
        case 3:
            resultado=valor1*valor2;
            printf("Resultado: %d.", resultado);
            break;

        // Divisão. Pede dois valores e divide-os. Elaborado por Marco,  13-10-2025

        case 4:
            resultado=valor1/valor2;
            printf("Resultado: %d.", resultado);
            break;
    }
	menu();
}

