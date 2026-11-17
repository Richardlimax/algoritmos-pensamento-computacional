/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Qual e o peso da pessoa em kg? ");
    scanf("%f", &peso);

    printf("Qual e a altura da pessoa em metros? ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O Indice de Massa Corporal e %.2f kg/m2\n", imc);

    return 0;
}