/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    float largura, comprimento, valorCaixa, area, custoTotal;
    int quantidadeCaixas;

    printf("Qual e a largura da area em metros? ");
    scanf("%f", &largura);

    printf("Qual e o comprimento da area em metros? ");
    scanf("%f", &comprimento);

    printf("Qual e o valor de cada caixa? ");
    scanf("%f", &valorCaixa);

    area = largura * comprimento;

    quantidadeCaixas = ceil(area / 2.5);

    custoTotal = quantidadeCaixas * valorCaixa;

    printf("Area total a ser revestida: %.2f m2\n", area);
    printf("Quantidade de caixas necessarias: %d\n", quantidadeCaixas);
    printf("Custo total da compra: R$ %.2f\n", custoTotal);

    return 0;
}