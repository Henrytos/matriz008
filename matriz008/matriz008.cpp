#include <iostream>
//8) Crie um programa que faça a soma de duas matrizes 3x3.
using namespace std;
int main()
{
    double matriz[3][3], matriz2[3][3], matriz3[3][3], soma;
    int lin, col;
    cout << "Valores para a 1- Matriz\n";
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 3; col++) {
            cout << "valor? : ";
            cin >> matriz[lin][col];
        }
    }
    cout << "ARRAY 1\n";
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 3; col++) {
            if (col < 2) {
                cout << matriz[lin][col] << " ";
            }
            else {
                cout << matriz[lin][col] << endl;
            }
        }

    }
    cout << "Valores para a 2-Matriz\n";
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 3; col++) {
            cout << "Valor?: ";
            cin >> matriz2[lin][col];
        }
    }
    cout << "ARRAY 2\n";
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 3; col++) {
            if (col < 2) {
                cout << matriz2[lin][col] << " ";
            }
            else {
                cout << matriz2[lin][col] << endl;
            }
        }

    }
    soma = 0;
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 3; col++) {
            matriz3[lin][col] = matriz[lin][col] + matriz2[lin][col];
            soma = matriz3[lin][col] + soma;
        }
    }
    cout << "A soma das 2 matrizes gerou:\n";
    cout << " ARRAY 3\n";
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 3; col++) {
            if (col < 2) {
                cout << matriz3[lin][col] << " ";
            }
            else {
                cout << matriz3[lin][col] << endl;
            }
        }

    }
    cout << "A soma da matriz 3 eh: " << soma;
    return(0);
}