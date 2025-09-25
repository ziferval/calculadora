#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int op, valor1, valor2, resultado;
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

    switch (op){
        case 1:    // Elaborado pelo Miguel, 25-09-2025 
            resultado=valor1+valor2;
            printf("Resultado: %d.", resultado);
            break;

        //Feito Por Fábio

        case 2:
            resultado=valor1-valor2;
            printf("Resultado: %d.", resultado);
            break;



        case 3:
            resultado=valor1*valor2;
            printf("Resultado: %d.", resultado);
            break;
        case 4:
            resultado=valor1/valor2;
            printf("Resultado: %d.", resultado);
            break;
    }
}
