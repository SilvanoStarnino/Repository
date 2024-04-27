/*Scrivere una funzione che restituisca il valore minimo di una matrice
di dimensione n*n fornita come argomento; la funzione deve fornire anche
le coordinate di tale valore (indice di riga e indice di colonna).
Scrivere un programma che utilizzando la funzione precedente visualizzi
il valore minimo e le relative coordinate di una matrice i cui elementi
sono inseriti da tastiera;*/
#include <iostream>
using namespace std;

const int n = 3;

void popolaMatrice(int matrice[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i << " , " << j << " : ";
            cin >> matrice[i][j];
        }
    }
}

void valoreMinimo(int matrice[n][n], int& indiceRigaMinimo, int& indiceColonnaMinimo) {
    int minimo = matrice[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrice[i][j] < minimo) {
                minimo = matrice[i][j];
                indiceRigaMinimo = i;
                indiceColonnaMinimo = j;
            }
        }
    }
}

int main() {
    int matrice[n][n];
    popolaMatrice(matrice);
    int indiceRigaMinimo = 0, indiceColonnaMinimo = 0; 
    valoreMinimo(matrice, indiceRigaMinimo, indiceColonnaMinimo);
    cout << "Il valore minimo nella matrice è: " << matrice[indiceRigaMinimo][indiceColonnaMinimo] << endl;
    cout << "Le coordinate del valore minimo sono: (" << indiceRigaMinimo << ", " << indiceColonnaMinimo << ")" << endl;

    return 0;
}
