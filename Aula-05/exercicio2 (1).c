/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota, soma = 0, media, maior = 0;
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Digite a nota do %dº estudante: ", i);
        scanf("%f", &nota);

        soma = soma + nota;

        if (nota > maior) {
            maior = nota;
        }
    }

    media = soma / 5;

    printf("\nMedia da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);

    return 0;
}
