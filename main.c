#include <stdio.h>

int main(){
    FILE *arquivo_texto = fopen("texto.txt", "r");
    char ch;
    int linhas = 0, palavras = 0, caracteres = 0;

    ch = getc(arquivo_texto);

    while (!feof(arquivo_texto)){

        printf("%c", ch);

        if (ch != '\n' && ch != '\0'){
            caracteres++;
        } else if(ch == '\n'){
            linhas++;
        }

        ch = getc(arquivo_texto);

        if(ch == ' ' || ch == '\n'){
            palavras++;
        }
    }
    
    fclose(arquivo_texto);

    printf("\nQuantia linhas: %d\nQuantia palavras: %d\nQuantia caracteres: %d\n", linhas + 1, palavras + 1, caracteres - 1);
}
