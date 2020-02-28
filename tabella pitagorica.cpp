#include <iostream>

using namespace std;

void num(int &n);
void tab(int n);

int main(){
    int n;
    num(n);
    tab(n);
    return 0;
}

void num(int &n){
    cout << "scegli un numero tra 1 e 20: ";
    cin >> n;
}

void tab(int n){
    for(int i = 1; i <= n; i++){
        for(int y = 1; y<= n; y ++){
            cout << i*y << " ";
        }
        cout << endl;
    }
}