/*
Scrivere una funzione che a partire da due vettori di valori numerici aventi la stessa
dimensione, costruisca una matrice quadrata in cui ogni singolo elemento di
coordinate (r,c) sia ottenuto moltiplicando l’r-esimo elemento del primo
vettore con il c-esimo elemento del secondo vettore. Per esempio dati i vettori
v1={1,4} e v2={2,3} Matrice={{2, 3}, {8, 12}};*/
#include <iostream>
using namespace std;
const int n = 2;

void costruisciMatrice(int v1[], int v2[], int matrice[][10]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrice[i][j] = v1[i] * v2[j];
        }
    }
}


void stampaMatrice(int matrice[][10]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout <<i<<","<<j<<": "<<matrice[i][j]<<endl;
        }

    }
}

int main() {
    int v1[n] = {1, 4};
    int v2[n] = {2, 3};
    int matrice[n][10];
    costruisciMatrice(v1, v2, matrice);
    cout << "Matrice risultante:" << endl;
    stampaMatrice(matrice);

    return 0;
}
