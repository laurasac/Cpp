#include <iostream>
using namespace std;


void input_valori( int &n1, int &n2){
    cout << "Inserisci valore 1: ";
    cin >> n1;
    cout << endl << "Inserisci valore 2: ";
    cin >> n2;
}
void multiplo(int &n1, int &n2){
    if(n2%n1 == 0) cout << n2 << " è multiplo di "<< n1;
    else cout << n2 << " non è multiplo di "<< n1;
}

int main(){
    int n1, n2;
    input_valori(n1,n2);
    multiplo(n1,n2);
    return 0;
}