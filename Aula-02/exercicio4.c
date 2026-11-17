/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float potencia, horas, consumo;

    printf("Potencia do equipamento (W)? ");
    scanf("%f", &potencia);

    printf("Horas de uso por dia? ");
    scanf("%f", &horas);

    consumo = (potencia * horas * 30) / 1000;

    printf("Consumo mensal: %.2f kWh\n", consumo);

    return 0;
}
