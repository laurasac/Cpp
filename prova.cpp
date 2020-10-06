#include <iostream>

using namespace std;

void leggi(int &n);
void potenza(int n, int ex);
int main(){
    int n, ex ;
    leggi(n);
    leggi(ex);
    potenza(n, ex);
    cin >> n;
    return 0;
}

void leggi(int &n){
    cout << "Inserisci numero : ";
    cin >> n;
}

void potenza (int n, int ex){
    int p = 1;
    for(int i = 0; i <ex; i++){
        p = p*n;
    }
    cout << p << " ";
}