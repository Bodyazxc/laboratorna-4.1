#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    //Перший спосіб
    int N, k;
    double S;

    cout << "N = ";
    cin >> N;

    S = 0;
    k = N;
    while (k <= 19) {
        S += sqrt(pow(sin(k), 2) + pow(cos(1. * N / k), 2));
        k++;
    }
    cout << "S = " << S << endl;

    //Другий спосіб 
    S = 0;
    k = N;
    do {
        S += sqrt(pow(sin(k), 2) + pow(cos(1. * N / k), 2));
        k++;
    } while (k <= 19);
    cout << "S = " << S << endl;

    //Третій спосіб
    S = 0;
    for (k = N; k <= 19; k++) {
        S += sqrt(pow(sin(k), 2) + pow(cos(1. * N / k), 2));
    }
    cout << "S = " << S << endl;

    // Четвертий спосіб
    S = 0;
    for (k = 19; k >= N; k--) {
        S += sqrt(pow(sin(k), 2) + pow(cos(1. * N / k), 2));
    }
    cout << "S = " << S << endl;

    return 0;
}
