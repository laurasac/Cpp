#include <iostream>
using namespace std;


void input_valori( double &n1){
    cout << "Inserisci valore : ";
    cin >> n1;
}
double calc1(double n1){
    if (n1 == 1) return 1;
    else  return n1*calc1(n1-1);
}
double calc2( double esp){
    if (esp == 1) return 3 ;
    else return 3*calc2(esp-1);
}
double rapp(double n1, double n2){
    return n1/n2;
}

int main(){
    double  x, y;
    input_valori(x);
    input_valori(y);
    cout << rapp(calc1(x), calc2(y));
    return 0;
}