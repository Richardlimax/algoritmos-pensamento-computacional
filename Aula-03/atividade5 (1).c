/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {

    char tipo;
    int diarias;
    float valorDiaria, valorTotal;

    printf("Qual o tipo de hospedagem (S-D-T)? ");
    scanf(" %c", &tipo);

    printf("Qual a quantidade de diarias? ");
    scanf("%d", &diarias);

    switch (tipo) {

        case 'S':
            valorDiaria = 300.00;
            break;

        case 'D':
            valorDiaria = 450.00;
            break;

        case 'T':
            valorDiaria = 500.00;
            break;

        default:
            printf("Tipo invalido!!!\n");
            return 0;
    }

    valorTotal = valorDiaria * diarias;

    printf("Valor total a pagar: R$ %.2f\n", valorTotal);

    return 0;
}