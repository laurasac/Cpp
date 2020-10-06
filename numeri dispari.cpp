
#include <iostream>

using namespace std;

int main(){
    int n = 1 , cont = 1;
    while(n != 201){
        if(cont < 5){
            cout << n << " ";
            n += 2;
            cont ++;
        }else{
            cout << n << endl;
            cont = 1;
            n += 2;
        }
    }
    cin >> n;
    return 0;
}