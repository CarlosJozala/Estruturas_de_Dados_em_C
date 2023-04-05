#include <stdio.h>

int main() {
    int centavos;
    printf("Digite o valor em centavos: ");
    scanf("%d", &centavos);

    int moedas[6] = {100, 50, 25, 10, 5, 1};
    int qtd_moedas[6] = {0};

    int i, resto;
    for (i = 0; i < 6; i++) {
        qtd_moedas[i] = centavos / moedas[i];
        resto = centavos % moedas[i];
        centavos = resto;
    }

    printf("A menor quantidade de moedas é:\n");
    printf("%d moedas de 1 real\n", qtd_moedas[0]);
    printf("%d moedas de 50 centavos\n", qtd_moedas[1]);
    printf("%d moedas de 25 centavos\n", qtd_moedas[2]);
    printf("%d moedas de 10 centavos\n", qtd_moedas[3]);
    printf("%d moedas de 5 centavos\n", qtd_moedas[4]);
    printf("%d moedas de 1 centavo\n", qtd_moedas[5]);

    return 0;
}

