#include <iostream>
using namespace std;


void input_valori( int &n1, int &n2){
    cout << "Inserisci valore 1: ";
    cin >> n1;
    cout << endl << "Inserisci valore 2: ";
    cin >> n2;
}
void input_operatore( char &op){
    cout << "Inserisci operatore: ";
    cin >> op;
}
void risultato(int &n1, int&n2, char &op){
    switch(op){
        case 43:
             cout << "Il risultato è " << n1+n2;
             break;
        case 45:
            cout << "Il risultato è " << n1-n2;
            break;
        case 42:
            cout << "Il risultato è " << n1*n2;
            break;
        case 47:
            cout << "Il risultato è " << n1/n2;
            break;
        case 94:{
            int risultato = 1;
            for(int i = 0; i < n2; i++){
                risultato = risultato*n1;
            }
            cout << "Il risultato è " << risultato;
            break;
        }
        default:
            break;
    }
}

int main(){
    int n1, n2;
    char operatore;
    input_valori(n1,n2);
    input_operatore(operatore);
    risultato(n1, n2, operatore);
    return 0;
}