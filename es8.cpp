#include <iostream>

using namespace std;

void leggi(int &n);
void somma(int n);
int main(){
    int n ;
    leggi(n);
    somma(n);
    cin >> n;
    return 0;
}

void leggi(int &n){
    cout << "Inserisci numero : ";
    cin >> n;
}

void somma (int n){
    int sum = 0;
    for(int i = 1; i <=n; i++){
        sum+=i;
    }
    cout << sum;
}