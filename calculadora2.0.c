#include <stdio.h> 
#include <stdlib.h>

/*Faça uma calculadora em "c" que leia dois números e o usuario tenha 4 funções
(adição , subtração, multiplicação , divisão) possiveis para fazer operações 
com os dois numeros digitados...
*/

void soma(){ 
    float valor1, valor2, result; 
    printf("\nDigite o 1 valor: "); 
    scanf ("%f", &valor1); 
    printf("Digite o 2 valor: "); 
    scanf ("%f", &valor2);
    result = valor1 + valor2; 
    printf("\nResultado: %.2f\n\n ", result); 
    system ("pause"); //pausa
    system("cls"); //limpa
    menu(); //chama menu
}
void subtrai(){ 
    float valor1, valor2, result;
    printf("\nDigite o 1 valor: "); 
    scanf ("%f", &valor1); 
    printf("Digite o 2 valor: "); 
    scanf ("%f", &valor2); 
    result = valor1 - valor2; 
    printf("\nResultado: %.2f\n\n ", result); 
    system ("pause"); 
    system("cls");
    menu(); 
}
void divide(){ 
    float valor1, valor2, result;
    printf("\nDigite o 1 valor: ");
    scanf ("%f", &valor1);
    printf("Digite o 2 valor: ");
    scanf ("%f", &valor2);
    result = valor1 / valor2;
    printf("\nResultado: %.2f\n\n ", result);
    system ("pause");
    system("cls");
    menu();
}
void multiplica(){ 
    float valor1, valor2, result;
    printf("\nDigite o 1 valor: ");
    scanf ("%f", &valor1);
    printf("Digite o 2 valor: ");
    scanf ("%f", &valor2);
    result = valor1 * valor2;
    printf("\nResultado: %.2f\n\n ", result);
    system ("pause");
    system("cls");
    menu();
}
void menu(){ // Menu
    int escolha; 

    printf("                ___________________________ \n");
    printf("                |-------------------------| \n");
    printf("                |------ CALCULADORA ------| \n");
    printf("                |-------------------------| \n");
    printf("                |---- 1> Soma < ----------| \n");
    printf("                |---- 2> Subtracao < -----| \n");
    printf("                |---- 3> Divisao < -------| \n");
    printf("                |---- 4> Multiplicacao <--| \n");
    printf("                |---- 5> Sair/Finalizar <-| \n");
    printf("                |-------------------------| \n");
    printf("                |_________________________| \n");
   
    printf("\n");
    printf("Opcao: "); 
    scanf ("%d", &escolha); //armazena o int digitado em escolha

    switch (escolha){ //funcao de selecao de escolha do menu
        case 1: 
            soma(); 
        break; 

        case 2:
            subtrai();
        break;

        case 3:
            divide();
        break;

        case 4:
            multiplica();
            break;

        case 5: //caso selecionado 5 executa:
            system("exit"); // fechar o programa
            printf("\nFinalizando...\n\n"); 
        break; 

        default: // caso nao se digite nenhum do case disponoveis execute
            printf("\nComando invalido, tente novamente!\n\n"); 
            system ("pause"); //pausa
            system ("cls"); //limpa
            menu(); //volta pro menu inicial
            break; 
    }
}


int main() //funcao principal
{
    menu(); //chama o menu
    system("pause"); //pausa
    return 0; //retorna que esta tudo OK
}