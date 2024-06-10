#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#define N 200
void media(int v[], int dim);
void posmax(int v[], int dim);
void somma(int v[], int dim);
void resto(int v[], int dim);
void diversi(int v[], int dim);


int main(int argc, char** argv) {

    int v[N], dim = N;

    srand(time(NULL));
    for (int i = 0; i < dim; i++){
        v[i] = rand() % 250 + 1;
    }

    media(v, dim);
    posmax(v, dim);
    somma(v, dim);
    resto(v, dim);
    diversi(v, dim);

    return 0;
}
void media(int v[], int dim) {

    int somma = 0;
    float median = 0;

    for (int i = 0; i < dim; i++) {

        if (v[i] >= 100 && v[i] <= 150) {

            somma += v[i];

        }

    }
    median = (float)somma / dim;

    cout << "la media dei numeri compresi fra 100 e 150 e':" <<" "<< median << endl;

}
void posmax(int v[], int dim) {

    int pos = 0;

    for (int i = 1; i < dim; i++) {

        if (v[i] > v[pos]) {

            pos = i;

        }

    }

    cout << "la posizione del massimo all'interno del vettore e':" <<" "<<"["<< pos<<"]" << endl;
}
void somma(int v[], int dim) {

    int sum = 0;

    for (int i = 0; i < dim / 2; i++) {

        sum += v[i];

    }

    cout << "la somma dei numeri della prima meta' del vettore e':" <<" "<<sum<< endl;
}
void resto(int v[], int dim) {

    int perc = 0, contaperc = 0;

    for (int i = 0; i < dim; i++) {

        if (v[i] % 10 == 2) {

            contaperc++;

        }

    }

    perc = (float)contaperc / dim * 100;

    cout << "la percentuale dei numeri con cifra meno significativa uguale a 2:"<<" "<< perc <<"%"<< endl;
}
void diversi(int v[], int dim) {

    bool duv = true;

    for (int i = 0; i < dim; i++) {

        for (int h = i+1; h < dim; h++) {

            if (v[i] == v[h]) {

                duv = false;

            }

        }

    }
    if (duv == true) {

        cout << "tutti i numeri sono diversi" << endl;

    }
    else {

        cout << "il vettore non e' tutto diverso" << endl;

    }

}