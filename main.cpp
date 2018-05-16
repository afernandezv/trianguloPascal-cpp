#include <iostream>
#include <iomanip>
#include "coeficienteBinomial.cpp"
#include "programPause.cpp"

using namespace std;

int main() {
    int n = 0;

    cout << "\n\t\t\tTriangulo de Pascal" << endl;

    while(n <= 0 || n > 13){
        cout << "\nIntroduce el numero de filas que desees en el triangulo de pascal (1-13): ";
        cin >> n;
        if(n <= 0){
            cout << "\n\tEl numero de filas debe de ser mayor y distinto de cero.\n" << endl;
        }else if (n > 13){
            cout << "\n\tEl numero de filas debe de ser menor o igual que 13.\n" << endl;
        }
    }

    cout << "\n\t\tTriangulo de Pascal de " << n << " filas" << endl;
    cout << endl;

    for(int i = 0; i < n; i++){
        for(int j = 1; j < n-i; j++){
            cout << "   ";
        }
        for(int k = 0; k <= i; k++){
            cout << setw(6) << coeficienteBinomial(i,k);
        }
        cout << endl;
    }

    programPause();
    return 0;
}