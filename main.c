#include <stdio.h>
#include <locale.h>

/*Exercício. Informe dois números. Exiba o maior valor, utilizando C*/

int main() {
    int valorUm;
    int valorDois;
    setlocale(LC_ALL, "Portuguese");
    wprintf(L"Digite o primeiro número: ");
    scanf("%d", &valorUm);
    wprintf(L"Digite o segundo número: ");
    scanf("%d", &valorDois);
    if (valorUm > valorDois) {
        wprintf(L"O maior valor é: %d", valorUm);
    }else{
        wprintf(L"O maior valor é: %d", valorDois);
    }

    return 0;
}