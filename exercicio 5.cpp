#include <iostream>

using namespace std;

// Função para inverter uma string
void inverterString(char str[]) {
    // Calcula o comprimento da string
    int tamanho = 0;
    while (str[tamanho] != '\0') {
        tamanho++;
    }

    // Inverte os caracteres da string
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = str[i];
        str[i] = str[tamanho - i - 1];
        str[tamanho - i - 1] = temp;
    }
}

int main() {
    // String de exemplo
    char minhaString[] = "Exemplo";

    // Mostra a string original
    cout << "String original: " << minhaString << endl;

    // Inverte a string
    inverterString(minhaString);

    // Mostra a string invertida
    cout << "String invertida: " << minhaString << endl;

    return 0;
}