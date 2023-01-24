#include <stdio.h>
#include <stdlib.h>

int main() {

    float num1, num2, soma, sub, multi, div,resultado;
    int escolha;

    printf("                ___________________________ \n");
    printf("                |-------------------------| \n");
    printf("                |------ CALCULADORA ------| \n");
    printf("                |-------------------------| \n");
    printf("                |---- 1> Soma < ----------| \n");
    printf("                |---- 2> Subtracao < -----| \n");
    printf("                |---- 3> Multiplicacao <--| \n");
    printf("                |---- 4> Divisao <--------| \n");
    printf("                |-------------------------| \n");
    printf("                |_________________________| \n");
    printf("                |-------------------------| \n");
    printf("                |-- Digite dois valores --| \n");
    printf("                |-------------------------| \n");
    printf("                |_________________________| \n");
    printf("\n");

    printf(" Valor 1: ");
    scanf("%f", &num1);
    printf(" Valor 2: ");
    scanf("%f", &num2);
    
    printf("\n\nDigite uma opcao: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        resultado = num1 + num2;
        printf("\n-> A Soma e: %.2f \n\n ", resultado); 
        system ("pause"); 
        system("cls");
        break;
    case 2:
        resultado = num1 - num2;
        printf("\n-> A Subtracao e: %.2f \n\n ", resultado);
        system ("pause"); 
        system("cls");
        break;
    case 3:
        resultado = num1 * num2;
        printf("\n-> A Multiplicacao e: %.2f \n\n ", resultado);
        system ("pause"); 
        system("cls");
        break;
    case 4:
        resultado = num1 / num2;
        printf("\n-> A Divisao e: %.2f \n\n ", resultado);
        system ("pause"); 
        system("cls");
        break;
    case 5:
        system("exit"); 
        printf("\nFinalizando...\n\n");
        break;

    default:
        printf("\nComando invalido, tente novamente!\n\n"); 
        system ("pause"); 
        system ("cls"); 
        break;
    }


    system ("pause"); 
    system("cls");
    return 0;
}