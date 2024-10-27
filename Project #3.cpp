#include <iostream>
using namespace std;


float volcil(float, float);
int assoluto(int);
int interi(int, int);
float inter(float, float);
int prodest(int, int);

int main()
{
    int n, m, l, a, b;
    float r, h, k, q;

    cout << "inserisci raggio e altezza del cilindro" << endl;
    cin >> r;
    cin >> h;
    cout << "inserisci valore" << endl;
    cin >> n;
    cout << "inserisci due valori" << endl;
    cin >> m;
    cin >> l;
    cout << "inserisci coeficiente angolare e il punto all'origine" << endl;
    cin >> k >> q;
    cout << "inserire i due estremi" << endl;
    cin >> a >> b;

    cout << "il volume del cilindro e':" << volcil(h, r) << endl;
    cout << "il valore assoluto del numero inserito e':" << assoluto(n) << endl;
    if (interi(m, l) == 1) {

        cout <<"valore dell'uguaglianza dei numeri:"<< interi(m, l) << endl;

    }
    else {

        cout <<"valore dell'uguaglianza dei numeri:"<< interi(m, l) << endl;
    }

    cout << "l'intersezione con l'asse x e':" << inter(k, q) << endl;
    cout << "Il prodotto di tutti i numeri interi positivi compresi nell'intervallo [a,b] e':" << prodest(a, b) << endl;


    return 0;
}
float volcil(float h, float r) {

    float volume;

    volume = r * r * 3.14 * h;

    return volume;

}
int assoluto(int n) {

    int asso;

    asso = abs(n);

    return asso;
}
int interi(int m, int l) {

    int verificato = 0;

    if (m != l) {

        verificato = 1;

    }

    return verificato;

}
float inter(float k, float q) {

    float x = 0;

    x = -q / k;

    return x;

}
int prodest(int a, int b) {

    int estremomin = a;
    int estremomag = b;
    int prod = 1;


    if (a > b) {

        estremomag = a;
        estremomin = b;

    }
    else {

        estremomin = a;
        estremomag = b;

    }


    for (int i = estremomin; i <= estremomag; i++) {


        prod *= i;

    }

    return prod;

}