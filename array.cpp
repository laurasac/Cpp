#include <iostream>

using namespace std;

int main(){
    int lista[10];
    for(int i = 0; i<10; i++){
        lista[i] = i;
    }
    for(int i = 0; i<10; i++){
        cout << lista[i] << endl;
    }
    return 0;
}