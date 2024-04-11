#include <iostream>

using namespace std;

// Função para verificar se um número pertence à sequência de Fibonacci
bool pertenceFibonacci(int num) {
    int a = 0;
    int b = 1;

    while (a <= num) {
        if (a == num) {
            return true;
        }
        int temp = b;
        b = a + b;
        a = temp;
    }
    return false;
}

int main() {
    int numero;

    // Solicita ao usuário que insira um número
    cout << "Digite um numero para verificar se pertence a sequencia de Fibonacci: ";
    cin >> numero;

    // Verifica se o número pertence à sequência de Fibonacci
    if (pertenceFibonacci(numero)) {
        cout << numero << " pertence a sequencia de Fibonacci.\n";
    } else {
        cout << numero << " nao pertence a sequencia de Fibonacci.\n";
    }

    return 0;
}