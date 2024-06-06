#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#define N 200

void somma(int v[], int dim);
void perc(int v[], int dim);
void posmin(int v[], int dim);
void poineg(int v[], int dim);
void copvet(int v[], int dim);
void stampa(int v[], int dim);
void inserimento(int v[], int dim);



int main()
{
    int v[N], num, dim;

    do {

        cout << "quanto grande vuoi il vettore" << endl;
        cin >> dim;

    } while (dim <= 0 || dim > 200);

    cout << "quale funzione vuoi inizializzare?" << endl;
    cout << "glossario: 1(somma), 2(percentuale), 3(posmin), 4(poineg), 5(copvet)" << endl;


    do {

        cin >> num;

    } while (num <= 0 || num > 5);

    inserimento(v, dim);
    stampa(v, dim);


    if (num == 1) {

        somma(v, dim);

    }
    if (num == 2) {

        perc(v, dim);

    }
    if (num == 3) {

        posmin(v, dim);

    }
    if (num == 4) {

        poineg(v, dim);

    }
    if (num == 5) {

        copvet(v, dim);

    }

    return 0;

}
void inserimento(int v[], int dim) {



    srand(time(NULL));

    for (int i = 0; i < dim; i++) {

        v[i] = rand() % 201 - 100;

    }


}
void stampa(int v[], int dim) {

    cout << "il contenuto del primo vettore e'" << endl;

    for (int i = 0; i < dim; i++) {


        cout << v[i] << "[" << i << "]" << endl;

    }


}

void somma(int v[], int dim) {

    int sum = 0;

    for (int i = 1; i < dim; i += 2) {

        sum += v[i];

    }

    cout << "la somma dei numeri con indice dispari e'" << " " << sum << endl;

}
void perc(int v[], int dim) {

    int contaperc = 0;
    float percn = 0;

    for (int i = 0; i < dim; i++) {

        if (v[i] >= 20 && v[i] <= 80) {

            contaperc++;

        }


    }


    percn = (float)contaperc / dim * 100;

    cout << "la percentuale dei numeri compresi fra 20 e 80 e'" << " " << percn << "%" << endl;

}
void posmin(int v[], int dim) {

    int posm = 0;

    for (int i = 1; i < dim; i++) {

        if (v[i] < v[posm]) {

            posm = i;

        }


    }


    cout << "la posizione del minimo e'" << "[" << posm << "]" << endl;

}
void poineg(int v[], int dim) {

    int contp = 0;

    for (int i = 0; i < dim; i++) {

        if (v[i] >= 0) {

            contp++;

        }


    }

    if (contp == dim) {

        cout << "i numeri sono tutti positivi" << endl;

    }
    else {

        if (contp == 0) {

            cout << "i numeri inseriti sono tutti negativi" << endl;

        }
        else {

            cout << "i numeri inseriti sono sia negativi che positivi" << endl;

        }

    }

}
void copvet(int v[], int dim) {

    int n[N];

    for (int i = 0; i < dim; i++) {

        n[i] = abs(v[i]);
    }

    cout << "contenuto del secondo vettore copiato dal primo vettore:" << endl;

    for (int i = 0; i < dim; i++) {

        cout << n[i] << "[" << i << "]" << endl;

    }


}
