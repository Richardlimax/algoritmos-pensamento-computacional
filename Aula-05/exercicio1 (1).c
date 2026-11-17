/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char cpf[12];
    double preco, total = 0;

    printf("Digite o CPF: ");
    scanf("%11s", cpf);

    printf("Digite o preco do produto (0 para encerrar): ");
    scanf("%lf", &preco);

    while (preco != 0) {
        total = total + preco;

        printf("Digite o preco do produto (0 para encerrar): ");
        scanf("%lf", &preco);
    }

    printf("\nCPF: %s\n", cpf);
    printf("Total da compra: R$ %.2lf\n", total);

    return 0;
}
