#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416


char area(){
    char op;
    do{
    printf("info: PI = %.4f \n", PI);
    printf("    --- Choose --- \n");
    printf("[1]Triangle: Area = 1/2 * b * h \n");
    printf("[2]Rectangle: Area = w * h \n");
    printf("[3]Square: Area = a2 \n");
    printf("[4]Circle: Area = PI * r2 \n\n");
    printf("[5]Triangle Isosceles: Area = (b * a)/2");
    printf("----------------------------\n");
    scanf(" %c", &op);
    system("cls");
    } while(op != '1' && op != '2' && op != '3' && op != '4' && op !='5');
return op;
}

void calculoArea(op){
    double base, height;
    switch (op) {
    case '1':
        printf("Base? "); scanf("%lf", &base);
        printf("Height? "); scanf("%lf", &height);
        printf("Area of Triangle = 0.5 * %.2lf * %.2lf \n", base, height);
        printf("Area of Triangle = %.2lf \n", 0.5 * base * height);
        break;
    case '2':
        printf("Widht? "); scanf("%lf", &base);
        printf("Height? "); scanf("%lf", &height);
        printf("Area of Rectangle = %.2lf * %.2lf \n", base, height);
        printf("Area of Rectangle = %.2lf \n", base * height);
        break;
    case '3':
        printf("Side? "); scanf("%lf", &base);
        printf("Area of Square = %.2lf * %.2lf \n", base, base);
        printf("Area of Square = %.2lf \n", base * base);
        break;
    case '4':
        printf("Radius? "); scanf("%lf", &base);
        printf("Area of Circle = %.4f * %.2lf \n", PI, base);
        printf("Area of Circle = %.2lf \n", PI * base);
        break;

    case '5': //area do triangulo isosceles
        printf("Base? "); scanf("%lf", &base);
        printf("Height? "); scanf("%lf", &height);
        printf("Area of Triangle Isosceles = (%.2lf * %.2lf)/2  *  \n", base, height);
        printf("Area of Triangle = %.2lf \n", (base * height)/2);
        break;
                
    default:
        printf("Error!!! \n \n \n");
        return 1;
    }
}

char conta(){
    char op;
    do{
    printf("1 = + | 2 = - | 3 = * | 4 = / \n");
    scanf(" %c", &op);
    system("cls");
    } while(op != '1' && op != '2' && op != '3' && op != '4');
return op;
}

void calculoConta(char op){
double num1, num2;
printf("Escolha 2 numeros:\n");
scanf("%lf %lf", &num1, &num2);
switch(op) {
case '1':
    system("cls");
    printf("Resultado: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
    break;
case '2':
    system("cls");
    printf("Resultado: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
    break;
case '3':
    system("cls");
    printf("Resultado: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
    break;
case '4':
    system("cls");
    printf("Resultado: %.2lf / %.2lf = %.2lf\n", num1, num2,  num1 / num2);
    break;
default:
    printf("ASASDFDSGRESSHTRVSHTRV");
    return 1;
    }
}


void main(){
    exit == exit;
    while (exit){
        char op;
        double num1, num2;
        printf("1-Calc / 2-Area / 0-exit  ");
        scanf(" %c", &op);
        switch (op) {
        case '1':
            op = conta();
            calculoConta(op);
        break;
        case '2':
            op = area();
            calculoArea(op);
            break;
        case '0':
            exit(0);
            break;
        default:
            printf("erro!");
        }
    }
}