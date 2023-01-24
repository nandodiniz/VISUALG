#include <stdio.h> //biblioteca
#include <stdlib.h> //biblioteca

/*Faça uma calculadora em "c" que leia dois números e o usuario tenha 7 funções
(adição , subtração, multiplicação , divisão, fatorial , exponencial e radiação)
possiveis para fazer operações com os dois numeros digitados...
*/

void soma(){ //funcao de soma
    float valor1, valor2, result; //declaração de variaveis 5.3
    printf("\nDigite o 1 valor: "); //pede um valor
    scanf ("%f", &valor1); //armazena o valor
    printf("Digite o 2 valor: "); //pede outro valor
    scanf ("%f", &valor2); //armazena o valor em um float
    result = valor1 + valor2; //soma valor1 com valor 2 e coloca em result
    printf("\nResultado: %.2f\n\n ", result); //mostra o resultado 2.36
    system ("pause"); //pausa pra dar tempo de ver
    system("cls"); //limpa a tela apos precinado enter
    menu(); //chama o menu novamente
}
void subtrai(){ //funcao subtração
    float valor1, valor2, result; //variaveis
    printf("\nDigite o 1 valor: "); //pedi variavel
    scanf ("%f", &valor1); //armazena variavel
    printf("Digite o 2 valor: "); //pedi variavel
    scanf ("%f", &valor2); //armazena variavel
    result = valor1 - valor2; //subtrai os valor 1 de 2 e armazena em result
    printf("\nResultado: %.2f\n\n ", result); //mostra o resultado
    system ("pause"); //pausa
    system("cls"); //limpa
    menu(); //chama menu
}
void divide(){ //funcao divide
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
void multiplica(){ //funcao multiplica
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
void menu(){ //menu
    int escolha; //variavel inteira

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
    printf("Opcao: "); //msg na tela
    scanf ("%d", &escolha); //armazena o int digitado em escolha

    switch (escolha){ //funcao de selecao de escolha do ,menu
        case 1: //caso digitado 1 execute isto:
            soma(); //funcao soma feita anteriomente acima
        break; //termina a funcao de soma

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
            printf("\nFinalizando...\n\n"); //da uma msg na tela
        break; // termina a funcao 5 seleciojada

        default: // caso nao se digite nenhum do case disponoveis execute
            printf("\nComando invalido, tente novamente!\n\n"); //msg
            system ("pause"); //pausa
            system ("cls"); //limpa
            menu(); //volta pro menu inicial
            break; //termina funcao
    }
}


int main() //funcao principal
{
    menu(); //chama o menu
    system("pause"); //pausa
    return 0; //retorna que esta tudo OK
}