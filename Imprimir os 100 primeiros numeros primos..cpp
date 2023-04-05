//Faça um programa que leia uma string e a inverta, imprimindo na tela invertida 
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}


