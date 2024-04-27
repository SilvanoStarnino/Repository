/*Data una matrice di n*m elementi interi, scrivere un programma che crei
due vettori media_colonne di n elementi e media_righe di m elementi tali che:
l’r-esimo elemento di media_righe contenga la media degli elementi dell’r-esima
riga della matrice e il c-esimo elemento di media_colonne contenga la media
degli elementi della c-esima colonna della matrice.*/
#include <iostream>
using namespace std;
void popolaMatrice(int matrice[][10], int n, int m) {
    cout << "Inserisci gli elementi della matrice:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Riga " << i + 1 << ":" << endl;
        for (int j = 0; j < m; j++) {
            cout << "Elemento (" << i << ", " << j << "): ";
            cin >> matrice[i][j];
        }
    }
}


double mediaRiga(int riga[], int m) {
    double somma = 0;
    for (int i = 0; i < m; i++) {
        somma += riga[i];
    }
    return somma / m;
}

double mediaColonna(int matrice[][10], int n, int colonna) {
    double somma = 0;
    for (int i = 0; i < n; i++) {
        somma += matrice[i][colonna];
    }
    return somma / n;
}

int main() {
    const int MAX_RIGHE = 10;
    const int MAX_COLONNE = 10;
    int matrice[MAX_RIGHE][MAX_COLONNE];
    double media_righe[MAX_RIGHE];
    double media_colonne[MAX_COLONNE];
    int n, m;


    cout << "Inserisci il numero di righe della matrice: ";
    cin >> n;
    if(n>MAX_RIGHE){
        cout<<"Non puoi inserire più di 10 righe";
        return 1;
    }
    cout << "Inserisci il numero di colonne della matrice: ";
    cin >> m;
    if(m>MAX_COLONNE){
        cout<<"Non puoi inserire più di 10 colonne";
        return 1;
    }


    popolaMatrice(matrice, n, m);

  
    for (int i = 0; i < n; i++) {
        media_righe[i] = mediaRiga(matrice[i], m);
    }

  
    for (int j = 0; j < m; j++) {
        media_colonne[j] = mediaColonna(matrice, n, j);
    }


    cout << "Medie delle righe:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Riga " << i + 1 << ": " << media_righe[i] << endl;
    }

    
    cout << "Medie delle colonne:" << endl;
    for (int j = 0; j < m; j++) {
        cout << "Colonna " << j + 1 << ": " << media_colonne[j] << endl;
    }

    return 0;
}
