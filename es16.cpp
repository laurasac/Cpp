#include <iostream>

using namespace std;

void leggi(int &n);
void molt(int n);
int main(){
    int n ;
    leggi(n);
    molt(n);
    cin >> n;
    return 0;
}

void leggi(int &n){
    cout << "Inserisci numero : ";
    cin >> n;
}

void molt (int n){
    
    for(int i = 1; i <=12; i++){
        cout << n*i << " ";
    }
}