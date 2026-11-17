#include <stdio.h>

int main()
{
    int numero, i;
    char linha[100];
    FILE *arquivo;
    
    
    arquivo = fopen("tabuada.txt", "r");
    
    if (arquivo== NULL){
        printf ("Não foi possível ler o arquivo. \n");
        return 1;
    }
    
    printf("Conteudo do arquivo: \n");
    
    while(fgets(linha, sizeof(linha), arquivo) != NULL){
        printf("%s", linha);
    }
    
    fclose(arquivo);
    
    return 0;
}