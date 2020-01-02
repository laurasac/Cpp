#include <iostream>
using namespace std;


void input_valori( int &n1, int &n2){
    cout << "Inserisci valore 1: ";
    cin >> n1;
    cout << endl << "Inserisci valore 2: ";
    cin >> n2;
}
void somma(int &n1, int &n2){
    cout << "La somma è " << n1+n2;
}

int main(){
    int addendo1, addendo2;
    input_valori(addendo1,addendo2);
    somma(addendo1,addendo2);
    return 0;
}